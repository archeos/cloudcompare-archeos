//##########################################################################
//#                                                                        #
//#                               CCLIB                                    #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU Library General Public License as       #
//#  published by the Free Software Foundation; version 2 of the License.  #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#include "GenericChunkedArray.h"
#include "AutoSegmentationTools.h"

//local
#include "GenericIndexedCloudPersist.h"
#include "GenericProgressCallback.h"
#include "ReferenceCloud.h"
#include "DgmOctree.h"
#include "FastMarchingForPropagation.h"
#include "ScalarFieldTools.h"
#include "ScalarField.h"

//system
#include <assert.h>

using namespace CCLib;

//marque les composantes connexes
int AutoSegmentationTools::labelConnectedComponents(GenericIndexedCloudPersist* theCloud, uchar level, bool sixConnexity, GenericProgressCallback* progressCb, DgmOctree* _theOctree)
{
	if (!theCloud)
		return -1;

	DgmOctree* theOctree = _theOctree;
	if (!theOctree)
	{
		theOctree = new DgmOctree(theCloud);
		if (theOctree->build(progressCb)<1)
		{
			delete theOctree;
			return -1;
		}
	}

	//on initialise les distances pour recevoir les labels des CCs
	theCloud->enableScalarField();

	int result = theOctree->extractCCs(level,sixConnexity,progressCb);

	if (!_theOctree)
		delete theOctree;

	return result;
}

//extrait les composantes connexes d'un nuage
//--> version avec des ReferenceCloud (uniquement des r�f�rences vers les points)
//pour permettre une r�cup�ration au niveau de l'application cliente
//des couleurs, normales, etc.
bool AutoSegmentationTools::extractConnectedComponents(GenericIndexedCloudPersist* theCloud, ReferenceCloudContainer& cc)
{
	if (!theCloud)
		return false;
	unsigned numberOfPoints = theCloud->size();
	if (numberOfPoints<1)
		return false;

	//on admet que "labelConnectedComponents" a bien d�j� �t� appel�
	//les labels des CCs sont alors stock�es dans le champ scalaire "courant"
	cc.clear();

	//theCloud->placeIteratorAtBegining();
	for (unsigned i=0;i<numberOfPoints;++i)
	{
		int ccLabel=(int)theCloud->getPointScalarValue(i)-1; //les labels commencent � 1 !

		//on remplit le vecteur de "CCs" vides jusqu'� arriver au bon num�ro de CC
		//on s'occupera en th�orie des autres plus tard
		while (ccLabel>=(int)cc.size())
			cc.push_back(new ReferenceCloud(theCloud));

		//on rajoute le point � la CC courante
		cc[ccLabel]->addPointIndex(i);
	}

	return true;
}

bool AutoSegmentationTools::frontPropagationBasedSegmentation(GenericIndexedCloudPersist* theCloud,
                                                                bool signedSF,
                                                                DistanceType minSeedDist,
                                                                uchar octreeLevel,
                                                                ReferenceCloudContainer& theSegmentedLists,
                                                                GenericProgressCallback* progressCb,
                                                                DgmOctree* _theOctree,
                                                                bool applyGaussianFilter,
                                                                float alpha)
{
	if (!theCloud)
        return false;
	unsigned numberOfPoints = theCloud->size();
	if (numberOfPoints<1)
        return false;

	//on calcule l'octree
	DgmOctree* theOctree = _theOctree;
	if (!theOctree)
	{
		theOctree = new DgmOctree(theCloud);
		if (theOctree->build(progressCb)<1)
		{
			delete theOctree;
			return false;
		}
	}

	ScalarField* theDists = new ScalarField("distances",true);
	if (!theDists->reserve(numberOfPoints))
	{
		if (!_theOctree)
			delete theOctree;
		return false;
	}
	theCloud->placeIteratorAtBegining();
	unsigned k=0;
	DistanceType d = theCloud->getPointScalarValue(k);
	for (;k<numberOfPoints;++k)
        theDists->addElement(d);

	//on calcule le gradient (va �craser le champ des distances)
	if (ScalarFieldTools::computeScalarFieldGradient(theCloud,signedSF,true,true,progressCb,theOctree)<0)
	{
		if (!_theOctree)
			delete theOctree;
		return false;
	}

	//et on lisse le r�sultat
	if (applyGaussianFilter)
	{
		uchar level = theOctree->findBestLevelForAGivenPopulationPerCell(NUMBER_OF_POINTS_FOR_GRADIENT_COMPUTATION);
		float cellSize = theOctree->getCellSize(level);
        ScalarFieldTools::applyScalarFieldGaussianFilter(cellSize*0.33f,theCloud,signedSF,-1,progressCb,theOctree);
	}

	DistanceType maxDist;
	unsigned seedPoints = 0;
	unsigned numberOfSegmentedLists = 0;

	//on va faire la propagation avec le FastMarching();
	FastMarchingForPropagation* fm = new FastMarchingForPropagation();

	fm->setJumpCoef(50.0);
	fm->setDetectionThreshold(alpha);

	int result = fm->init(theCloud,theOctree,octreeLevel);
	int octreeLength = OCTREE_LENGTH(octreeLevel)-1;

	if (result<0)
	{
		if (!_theOctree)
            delete theOctree;
		delete fm;
		return false;
	}

	if (progressCb)
	{
		progressCb->reset();
		progressCb->setMethodTitle("FM Propagation");
		char buffer[256];
		sprintf(buffer,"Octree level: %i\nNumber of points: %i",octreeLevel,numberOfPoints);
		progressCb->setInfo(buffer);
		progressCb->start();
	}

	unsigned maxDistIndex=0,begin = 0;
	CCVector3 startPoint;

	while (true)
	{
		maxDist = HIDDEN_VALUE;

		//on cherche la premi�re distance sup�rieure ou �gale � "minSeedDist"
		while (begin<numberOfPoints)
		{
			const CCVector3 *thePoint = theCloud->getPoint(begin);
			const DistanceType& theDistance = theDists->getValue(begin);
			++begin;

			if ((theCloud->getPointScalarValue(begin)>=0.0)&&(theDistance >= minSeedDist))
			{
				maxDist = theDistance;
				startPoint = *thePoint;
				maxDistIndex = begin;
				break;
			}
		}

		//il n'y a plus de point avec des distances suffisamment grandes !
		if (maxDist<minSeedDist)
            break;

		//on finit la recherche du max
		for (unsigned i=begin;i<numberOfPoints;++i)
		{
			const CCVector3 *thePoint = theCloud->getPoint(i);
			const DistanceType& theDistance = theDists->getValue(i);

			if ((theCloud->getPointScalarValue(i)>=0.0)&&(theDistance > maxDist))
			{
				maxDist = theDistance;
				startPoint = *thePoint;
				maxDistIndex = i;
			}
		}

		//on lance la propagation � partir du point de distance maximale
		//propagateFromPoint(aList,_GradientNorms,maxDistIndex,octreeLevel,_gui);

		int pos[3];
		theOctree->getTheCellPosWhichIncludesThePoint(&startPoint,pos,octreeLevel);
		//clipping (important !)
		pos[0] = std::min(octreeLength,pos[0]);
		pos[1] = std::min(octreeLength,pos[1]);
		pos[2] = std::min(octreeLength,pos[2]);
		fm->setSeedCell(pos);
		++seedPoints;

		int result = fm->propagate();

		//si la propagation s'est bien pass�e
		if (result>=0)
		{
			//on la termine (i.e. on extrait les points correspondant)
			ReferenceCloud* newCloud = fm->extractPropagatedPoints();

			//si la liste convient
			//on la rajoute au groupe des listes segment�es
			theSegmentedLists.push_back(newCloud);
			++numberOfSegmentedLists;

			if (progressCb)
                progressCb->update(float(numberOfSegmentedLists % 100));

			fm->endPropagation();

			//break;
		}

		if (maxDistIndex == begin)
            ++begin;
	}

	if (progressCb)
		progressCb->stop();

	for (unsigned i=0;i<numberOfPoints;++i)
		theCloud->setPointScalarValue(i,theDists->getValue(i));

	delete fm;
	theDists->release();
	theDists=0;

	if (!_theOctree)
		delete theOctree;

	return true;
}
