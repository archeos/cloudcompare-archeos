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

#include "CloudSamplingTools.h"

//local
#include "GenericIndexedCloudPersist.h"
#include "GenericIndexedMesh.h"
#include "SimpleCloud.h"
#include "ReferenceCloud.h"
#include "Neighbourhood.h"
#include "SimpleMesh.h"
#include "GenericProgressCallback.h"
#include "DgmOctreeReferenceCloud.h"
#include "DistanceComputationTools.h"

//system
#include <assert.h>

using namespace CCLib;

GenericIndexedCloud* CloudSamplingTools::resampleCloudWithOctree(	GenericIndexedCloudPersist* inputCloud,
																	int newNumberOfPoints,
																	RESAMPLING_CELL_METHOD resamplingMethod,
																	GenericProgressCallback* progressCb,
																	DgmOctree* inputOctree)
{
	assert(inputCloud);

	DgmOctree* theOctree = inputOctree;
	if (!theOctree)
	{
		theOctree = new DgmOctree(inputCloud);
		if (theOctree->build(progressCb) < 1)
			return 0;
	}

	//on cherche le niveau qui donne le nombre de points le plus proche de la consigne
	uchar bestLevel=theOctree->findBestLevelForAGivenCellNumber(newNumberOfPoints);

	GenericIndexedCloud* sampledCloud = resampleCloudWithOctreeAtLevel(inputCloud,bestLevel,resamplingMethod,progressCb,theOctree);

	if (!inputOctree)
		delete theOctree;

	return sampledCloud;
}

SimpleCloud* CloudSamplingTools::resampleCloudWithOctreeAtLevel(GenericIndexedCloudPersist* inputCloud, uchar octreeLevel, RESAMPLING_CELL_METHOD resamplingMethod, GenericProgressCallback* progressCb, DgmOctree* inputOctree)
{
	assert(inputCloud);

	DgmOctree* theOctree = inputOctree;
	if (!theOctree)
	{
		theOctree = new DgmOctree(inputCloud);
		if (theOctree->build(progressCb) < 1)
		{
			delete theOctree;
			return 0;
		}
	}

	SimpleCloud* cloud = new SimpleCloud();

	unsigned nCells = theOctree->getCellNumber(octreeLevel);
	if (!cloud->reserve(nCells))
	{
		if (!inputOctree)
			delete theOctree;
		delete cloud;
		return 0;
	}

	//structure contenant les parametres additionnels
	void* additionalParameters[2] = {	(void*)cloud,
										(void*)&resamplingMethod };

	//The process is so simple that MT is slower!
	//#ifdef ENABLE_MT_OCTREE
	//theOctree->executeFunctionForAllCellsAtLevel_MT(octreeLevel,
	//#else
	if (theOctree->executeFunctionForAllCellsAtLevel(	octreeLevel,
														&resampleCellAtLevel,
														additionalParameters,
														progressCb,
														"Cloud Resampling") == 0)
	{
		//something went wrong
		delete cloud;
		cloud=0;

	}

	if (!inputOctree)
		delete theOctree;

	return cloud;
}

ReferenceCloud* CloudSamplingTools::subsampleCloudWithOctree(	GenericIndexedCloudPersist* inputCloud,
																int newNumberOfPoints,
																SUBSAMPLING_CELL_METHOD subsamplingMethod,
																GenericProgressCallback* progressCb/*=0*/,
																DgmOctree* inputOctree/*=0*/)
{
	assert(inputCloud);

	DgmOctree* theOctree = inputOctree;
	if (!theOctree)
	{
		theOctree = new DgmOctree(inputCloud);
		if (theOctree->build(progressCb) < 1)
			return 0;
	}

	//on cherche le niveau qui donne le nombre de points le plus proche de la consigne
	uchar bestLevel=theOctree->findBestLevelForAGivenCellNumber(newNumberOfPoints);

	ReferenceCloud* subsampledCloud = subsampleCloudWithOctreeAtLevel(inputCloud,bestLevel,subsamplingMethod,progressCb,theOctree);

	if (!inputOctree)
		delete theOctree;

	return subsampledCloud;
}

ReferenceCloud* CloudSamplingTools::subsampleCloudWithOctreeAtLevel(GenericIndexedCloudPersist* inputCloud,
																	uchar octreeLevel,
																	SUBSAMPLING_CELL_METHOD subsamplingMethod,
																	GenericProgressCallback* progressCb/*=0*/,
																	DgmOctree* inputOctree/*=0*/)
{
	assert(inputCloud);

	DgmOctree* theOctree = inputOctree;
	if (!theOctree)
	{
		theOctree = new DgmOctree(inputCloud);
		if (theOctree->build(progressCb) < 1)
		{
			delete theOctree;
			return 0;
		}
	}

	ReferenceCloud* cloud = new ReferenceCloud(inputCloud);

	unsigned nCells = theOctree->getCellNumber(octreeLevel);
	if (!cloud->reserve(nCells))
	{
		if (!inputOctree)
			delete theOctree;
		delete cloud;
		return 0;
	}

	//structure contenant les parametres additionnels
	void* additionalParameters[2] = {	(void*)cloud,
										(void*)&subsamplingMethod };

	//The process is so simple that MT is slower!
	//#ifdef ENABLE_MT_OCTREE
	//theOctree->executeFunctionForAllCellsAtLevel_MT(octreeLevel,
	//#else
	if (theOctree->executeFunctionForAllCellsAtLevel(octreeLevel,
													&subsampleCellAtLevel,
													additionalParameters,
													progressCb,
													"Cloud Subsampling") == 0)
	{
		//something went wrong
		delete cloud;
		cloud=0;
	}

	if (!inputOctree)
		delete theOctree;

	return cloud;
}

ReferenceCloud* CloudSamplingTools::subsampleCloudRandomly(GenericIndexedCloudPersist* inputCloud, unsigned newNumberOfPoints, GenericProgressCallback* progressCb/*=0*/)
{
	assert(inputCloud);

	unsigned theCloudSize = inputCloud->size();

	//we put all input points in a ReferenceCloud
	ReferenceCloud* newCloud = new ReferenceCloud(inputCloud);
	if (!newCloud->addPointIndex(0,theCloudSize))
	{
		delete newCloud;
		return 0;
	}

	//we have less points than requested?!
	if (theCloudSize <= newNumberOfPoints)
	{
		return newCloud;
	}

	unsigned pointsToRemove = theCloudSize-newNumberOfPoints;

	NormalizedProgress* normProgress=0;
	if (progressCb)
	{
		progressCb->setInfo("Random subsampling");
		normProgress = new NormalizedProgress(progressCb,pointsToRemove);
		progressCb->reset();
		progressCb->start();
	}

	//we randomly remove "inputCloud.size() - newNumberOfPoints" points (much simpler)
	unsigned lastPointIndex = theCloudSize-1;
	for (unsigned i=0; i<pointsToRemove; ++i)
	{
		unsigned index = (unsigned)floor((float)rand()/(float)RAND_MAX * (float)lastPointIndex);
		newCloud->swap(index,lastPointIndex);
		--lastPointIndex;

		if (normProgress && !normProgress->oneStep())
		{
			//cancel process
			delete normProgress;
			delete newCloud;
			return 0;
		}
	}

	newCloud->resize(newNumberOfPoints); //always smaller, so it should be ok!

	if (normProgress)
		delete normProgress;

	return newCloud;
}

ReferenceCloud* CloudSamplingTools::resampleCloudSpatially(GenericIndexedCloudPersist* inputCloud,
															PointCoordinateType minDistance,
															DgmOctree* inputOctree/*=0*/,
															GenericProgressCallback* progressCb/*=0*/)
{
	assert(inputCloud);
    unsigned cloudSize = inputCloud->size();

    DgmOctree* theOctree = inputOctree;
	if (!theOctree)
	{
		theOctree = new DgmOctree(inputCloud);
		if (theOctree->build() < static_cast<int>(cloudSize))
		{
			delete theOctree;
			return 0;
		}
	}
	assert(theOctree && theOctree->associatedCloud() == inputCloud);

	//output cloud
    ReferenceCloud* sampledCloud = new ReferenceCloud(inputCloud);
	const unsigned c_reserveStep = 65536;
    if (!sampledCloud->reserve(std::min(cloudSize,c_reserveStep)))
	{
		if (!inputOctree)
			delete theOctree;
		return 0;
	}

	GenericChunkedArray<1,bool>* markers = new GenericChunkedArray<1,bool>(); //DGM: upgraded from vector, as this can be quite huge!
    if (!markers->resize(cloudSize,true,true))
	{
		markers->release();
		if (!inputOctree)
			delete theOctree;
		delete sampledCloud;
		return 0;
	}

	//progress notification
	NormalizedProgress* normProgress = 0;
    if (progressCb)
    {
		progressCb->setMethodTitle("Spatial resampling");
		char buffer[256];
		sprintf(buffer,"Points: %i\nMin dist.: %f",cloudSize,minDistance);
        progressCb->setInfo(buffer);
		normProgress = new NormalizedProgress(progressCb,cloudSize);
        progressCb->reset();
        progressCb->start();
    }

    unsigned char level = theOctree->findBestLevelForAGivenNeighbourhoodSizeExtraction(minDistance);

	//for each point in the cloud that is still 'marked', we look
	//for its neighbors and remove their own marks
	markers->placeIteratorAtBegining();
	bool error = false;
    for (unsigned i=0; i<cloudSize; i++, markers->forwardIterator())
    {
		//no mark? we skip this point
		if (markers->getCurrentValue())
		{
			//init neighbor search structure
			const CCVector3* P = inputCloud->getPoint(i);

			//look for neighbors and 'de-mark' them
			{
				DgmOctree::NeighboursSet neighbours;
				theOctree->getPointsInSphericalNeighbourhood(*P,minDistance,neighbours,level);
				for (DgmOctree::NeighboursSet::iterator it = neighbours.begin(); it != neighbours.end(); ++it)
					if (it->pointIndex != i)
						markers->setValue(it->pointIndex,false);
			}

			//At this stage, the ith point is the only one marked in a radius of <minDistance>.
			//Therefore it will necessarily be in the final cloud!
			if (sampledCloud->size() == sampledCloud->capacity() && !sampledCloud->reserve(sampledCloud->capacity()+c_reserveStep))
			{
				//not enough memory
				error = true;
				break;
			}
			if (!sampledCloud->addPointIndex(i))
			{
				//not enough memory
				error = true;
				break;
			}
		}
			
		//progress indicator
		if (normProgress && !normProgress->oneStep())
		{
			//cancel process
			error = true;
			break;
		}
    }

	//remove unnecessarily allocated memory
	if (!error)
	{
		if (sampledCloud->capacity() > sampledCloud->size())
			sampledCloud->resize(sampledCloud->size());
	}
	else
	{
		delete sampledCloud;
		sampledCloud = 0;
	}

    if(normProgress)
	{
		delete normProgress;
		normProgress = 0;
		progressCb->stop();
	}

	if (!inputOctree)
		delete theOctree;

	markers->release();

	return sampledCloud;
}

ReferenceCloud* CloudSamplingTools::sorFilter(GenericIndexedCloudPersist* inputCloud,
											  PointCoordinateType kernelRadius,
											  double nSigma,
											  bool removeIsolatedPoints/*=false*/,
											  bool useKnn/*=false*/,
											  int knn/*=6*/,
											  bool useAbsoluteError/*=true*/,
											  double absoluteError/*=0.0*/,
											  DgmOctree* inputOctree/*=0*/,
											  GenericProgressCallback* progressCb/*=0*/)
{
	assert(inputCloud);

	DgmOctree* theOctree = inputOctree;
	if (!theOctree)
	{
		theOctree = new DgmOctree(inputCloud);
		if (theOctree->build(progressCb) < 1)
		{
			delete theOctree;
			return 0;
		}
	}

	ReferenceCloud* cloud = new ReferenceCloud(inputCloud);

	unsigned pointCount = inputCloud->size();
	if (!cloud->reserve(pointCount))
	{
		if (!inputOctree)
			delete theOctree;
		delete cloud;
		return 0;
	}

	//structure contenant les parametres additionnels
	void* additionalParameters[] = {(void*)cloud,
									(void*)&kernelRadius,
									(void*)&nSigma,
									(void*)&removeIsolatedPoints,
									(void*)&useKnn,
									(void*)&knn,
									(void*)&useAbsoluteError,
									(void*)&absoluteError
	};

	uchar octreeLevel = 0;
	if (useKnn)
		octreeLevel = theOctree->findBestLevelForAGivenNeighbourhoodSizeExtraction(kernelRadius);
	else
		octreeLevel = theOctree->findBestLevelForAGivenPopulationPerCell(knn);

	#ifdef ENABLE_MT_OCTREE
	if (theOctree->executeFunctionForAllCellsAtLevel_MT(octreeLevel,
	#else
	if (theOctree->executeFunctionForAllCellsAtLevel(octreeLevel,
	#endif
													&applySORFilterAtLevel,
													additionalParameters,
													progressCb,
													"SOR filter") == 0)
	{
		//something went wrong
		delete cloud;
		cloud=0;
	}

	if (!inputOctree)
		delete theOctree;

	return cloud;
}

bool CloudSamplingTools::resampleCellAtLevel(	const DgmOctree::octreeCell& cell,
												void** additionalParameters,
												NormalizedProgress* nProgress/*=0*/)
{
	SimpleCloud* cloud						= static_cast<SimpleCloud*>(additionalParameters[0]);
	RESAMPLING_CELL_METHOD resamplingMethod	= *static_cast<RESAMPLING_CELL_METHOD*>(additionalParameters[1]);

	if (resamplingMethod == CELL_GRAVITY_CENTER)
	{
		const CCVector3* P = Neighbourhood(cell.points).getGravityCenter();
		if (!P)
			return false;
		cloud->addPoint(*P);
	}
	else //if (resamplingMethod == CELL_CENTER)
	{
		PointCoordinateType center[3];
		cell.parentOctree->computeCellCenter(cell.truncatedCode,cell.level,center,true);
		cloud->addPoint(center);
	}

	if (nProgress && !nProgress->steps(cell.points->size()))
		return false;

	return true;
}

bool CloudSamplingTools::subsampleCellAtLevel(	const DgmOctree::octreeCell& cell,
												void** additionalParameters,
												NormalizedProgress* nProgress/*=0*/)
{
	ReferenceCloud* cloud						= static_cast<ReferenceCloud*>(additionalParameters[0]);
	SUBSAMPLING_CELL_METHOD subsamplingMethod	= *static_cast<SUBSAMPLING_CELL_METHOD*>(additionalParameters[1]);

	unsigned selectedPointIndex = 0;
	unsigned pointsCount = cell.points->size();

	if (subsamplingMethod == RANDOM_POINT)
	{
		selectedPointIndex = (static_cast<unsigned>(rand()) % pointsCount);

		if (nProgress && !nProgress->steps(pointsCount))
			return false;
	}
	else // if (subsamplingMethod == NEAREST_POINT_TO_CELL_CENTER)
	{
		PointCoordinateType center[3];
		cell.parentOctree->computeCellCenter(cell.truncatedCode,cell.level,center,true);

		PointCoordinateType minDist = CCVector3::vdistance2(cell.points->getPoint(0)->u,center);

		for (unsigned i=1; i<pointsCount; ++i)
		{
			PointCoordinateType dist = CCVector3::vdistance2(cell.points->getPoint(i)->u,center);
			if (dist < minDist)
			{
				selectedPointIndex = i;
				minDist = dist;
			}

			if (nProgress && !nProgress->oneStep())
				return false;
		}
	}

	return cloud->addPointIndex(cell.points->getPointGlobalIndex(selectedPointIndex));
}

bool CloudSamplingTools::applySORFilterAtLevel(	const DgmOctree::octreeCell& cell,
												void** additionalParameters,
												NormalizedProgress* nProgress/*=0*/)
{
	ReferenceCloud* cloud				= static_cast<ReferenceCloud*>(additionalParameters[0]);
	PointCoordinateType kernelRadius	= *static_cast<PointCoordinateType*>(additionalParameters[1]);
	double nSigma						= *static_cast<double*>(additionalParameters[2]);
	bool removeIsolatedPoints			= *static_cast<bool*>(additionalParameters[3]);
	bool useKnn							= *static_cast<bool*>(additionalParameters[4]);
	int knn								= *static_cast<int*>(additionalParameters[5]);
	bool useAbsoluteError				= *static_cast<bool*>(additionalParameters[6]);
	double absoluteError				= *static_cast<double*>(additionalParameters[7]);

	//structure for nearest neighbors search
	DgmOctree::NearestNeighboursSphericalSearchStruct nNSS;
	nNSS.level = cell.level;
	nNSS.prepare(kernelRadius,cell.parentOctree->getCellSize(nNSS.level));
	if (useKnn)
		nNSS.minNumberOfNeighbors = knn;
	cell.parentOctree->getCellPos(cell.truncatedCode,cell.level,nNSS.cellPos,true);
	cell.parentOctree->computeCellCenter(nNSS.cellPos,cell.level,nNSS.cellCenter);

	unsigned n = cell.points->size(); //number of points in the current cell

	//for each point in the cell
	for (unsigned i=0; i<n; ++i)
	{
		cell.points->getPoint(i,nNSS.queryPoint);

		//look for neighbors in a sphere
		//warning: there may be more points at the end of nNSS.pointsInNeighbourhood than the actual nearest neighbors (neighborCount)!
		unsigned neighborCount = 0;

		if (useKnn)
			neighborCount = cell.parentOctree->findNearestNeighborsStartingFromCell(nNSS);
		else
			neighborCount = cell.parentOctree->findNeighborsInASphereStartingFromCell(nNSS,kernelRadius,false);

		if (neighborCount > 3) //we want 3 points or more (other than the point itself!)
		{
			//find the query point in the nearest neighbors set and place it at the end
			const unsigned globalIndex = cell.points->getPointGlobalIndex(i);
			unsigned localIndex = 0;
			while (localIndex < neighborCount && nNSS.pointsInNeighbourhood[localIndex].pointIndex != globalIndex)
				++localIndex;
			//the query point should be in the nearest neighbors set!
			assert(localIndex < neighborCount);
			if (localIndex+1 < neighborCount) //no need to swap with another point if it's already at the end!
			{
				std::swap(nNSS.pointsInNeighbourhood[localIndex],nNSS.pointsInNeighbourhood[neighborCount-1]);
			}

			unsigned realNeighborCount = neighborCount-1;
			DgmOctreeReferenceCloud neighboursCloud(&nNSS.pointsInNeighbourhood,realNeighborCount); //we don't take the query point into account!
			Neighbourhood Z(&neighboursCloud);

			const PointCoordinateType* lsq = Z.getLSQPlane();
			if (lsq)
			{
				double maxD = absoluteError;
				if (!useAbsoluteError)
				{
					//compute the std. dev. to this plane
					double sum_d = 0;
					double sum_d2 = 0;
					for (unsigned j=0; j<realNeighborCount; ++j)
					{
						const CCVector3* P = neighboursCloud.getPoint(j);
						double d = CCLib::DistanceComputationTools::computePoint2PlaneDistance(P,lsq);
						sum_d += d;
						sum_d2 += d*d;
					}

					double stddev = sqrt(fabs(sum_d2*realNeighborCount - sum_d*sum_d))/realNeighborCount;
					maxD = stddev * nSigma;
				}

				//distance from the query point to the plane
				double d = fabs(CCLib::DistanceComputationTools::computePoint2PlaneDistance(&nNSS.queryPoint,lsq));

				if (d <= maxD)
					cloud->addPointIndex(globalIndex);
			}
			else
			{
				//TODO: ???
			}
		}
		else
		{
			//not enough points to fit a plane AND compute distances to it
			if (!removeIsolatedPoints)
			{
				//we keep the point
				unsigned globalIndex = cell.points->getPointGlobalIndex(i);
				cloud->addPointIndex(globalIndex);
			}
		}

		if (nProgress && !nProgress->oneStep())
			return false;
	}

	return true;
}
