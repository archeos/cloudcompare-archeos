//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################
//
//*********************** Last revision of this file ***********************
//$Author:: dgm                                                            $
//$Rev:: 2276                                                              $
//$LastChangedDate:: 2012-10-18 14:58:26 +0200 (jeu., 18 oct. 2012)        $
//**************************************************************************
//
#include "STLFilter.h"
#include "../ccCoordinatesShiftManager.h"

//Qt
#include <QApplication>
#include <QFileInfo>
#include <QStringList>
#include <QString>

//qCC_db
#include <ccMesh.h>
#include <ccMeshGroup.h>
#include <ccPointCloud.h>
#include <ccProgressDialog.h>
#include <ccNormalVectors.h>

#include "../ccConsole.h"

CC_FILE_ERROR STLFilter::saveToFile(ccHObject* entity, const char* filename)
{
	if (!entity)
		return CC_FERR_BAD_ARGUMENT;

	if (!entity->isKindOf(CC_MESH))
		return CC_FERR_BAD_ENTITY_TYPE;

	ccGenericMesh* mesh = static_cast<ccGenericMesh*>(entity);
	if (mesh->size()==0)
	{
		ccConsole::Warning(QString("[ObjFilter] No facet in mesh '%1'!").arg(mesh->getName()));
		return CC_FERR_NO_ERROR;
	}

	//try to open file for saving
	FILE* theFile = fopen(filename,"wb");
	if (!theFile)
		return CC_FERR_WRITING;

	CC_FILE_ERROR result = saveToFile(mesh, theFile);

	fclose(theFile);

	return result;
}

CC_FILE_ERROR STLFilter::saveToFile(ccGenericMesh* mesh, FILE *theFile)
{
	assert(theFile && mesh && mesh->size()!=0);
	unsigned numberOfTriangles = mesh->size();
	
	//progress
	ccProgressDialog pdlg(true);
	CCLib::NormalizedProgress nprogress(&pdlg,numberOfTriangles);
	pdlg.setMethodTitle(qPrintable(QString("Saving mesh [%1]").arg(mesh->getName())));
	pdlg.setInfo(qPrintable(QString("Number of facets: %1").arg(numberOfTriangles)));
	pdlg.start();

	if (fprintf(theFile,"solid %s\n",qPrintable(mesh->getName())) < 0) //empty names are acceptable!
		return CC_FERR_WRITING;

	//vertices
	ccGenericPointCloud* vertices = mesh->getAssociatedCloud();
	unsigned nbPoints = vertices->size();
	const double* shift = vertices->getOriginalShift();

	mesh->placeIteratorAtBegining();
	for (unsigned i=0;i<numberOfTriangles;++i)
	{
		CCLib::TriangleSummitsIndexes*tsi = mesh->getNextTriangleIndexes();

		const CCVector3* A = vertices->getPointPersistentPtr(tsi->i1);
		const CCVector3* B = vertices->getPointPersistentPtr(tsi->i2);
		const CCVector3* C = vertices->getPointPersistentPtr(tsi->i3);
		//compute face normal (right hand rule)
		CCVector3 N = (*B-*A).cross(*C-*A);

		if (fprintf(theFile,"facet normal %e %e %e\n",N.x,N.y,N.z) < 0) //scientific notation
			return CC_FERR_WRITING;
		if (fprintf(theFile,"outer loop\n") < 0)
			return CC_FERR_WRITING;
		if (fprintf(theFile,"vertex %e %e %e\n",-shift[0]+(double)A->x,-shift[1]+(double)A->y,-shift[2]+(double)A->z) < 0) //scientific notation
			return CC_FERR_WRITING;
		if (fprintf(theFile,"vertex %e %e %e\n",-shift[0]+(double)B->x,-shift[1]+(double)B->y,-shift[2]+(double)B->z) < 0) //scientific notation
			return CC_FERR_WRITING;
		if (fprintf(theFile,"vertex %e %e %e\n",-shift[0]+(double)C->x,-shift[1]+(double)C->y,-shift[2]+(double)C->z) < 0) //scientific notation
			return CC_FERR_WRITING;
		if (fprintf(theFile,"endloop\nendfacet\n") < 0)
			return CC_FERR_WRITING;
	}

	if (fprintf(theFile,"endsolid %s\n",qPrintable(mesh->getName())) < 0) //empty names are acceptable!
		return CC_FERR_WRITING;

	return CC_FERR_NO_ERROR;
}

CC_FILE_ERROR STLFilter::loadFile(const char* filename, ccHObject& container, bool alwaysDisplayLoadDialog/*=true*/, bool* coordinatesShiftEnabled/*=0*/, double* coordinatesShift/*=0*/)
{
	ccConsole::Print("[STLFilter::Load] %s",filename);

	//ouverture du fichier
	FILE *fp = fopen(filename, "rt");
	if (!fp)
		return CC_FERR_READING;

	//current vertex shift
	double Pshift[3]={0.0,0.0,0.0};

	//current mesh
	ccMesh* tri = 0;
	unsigned facesRead = 0;

	//vertices
	ccPointCloud* vertices = new ccPointCloud("vertices");
	unsigned pointsRead = 0;

	//normals
	NormsIndexesTableType* normals = 0;
	int normsRead = 0;

	//progress dialog
	ccProgressDialog progressDlg(false);
	progressDlg.setMethodTitle("Loading STL file");
	progressDlg.setInfo("Loading in progress...");
	progressDlg.setRange(0,0);
	progressDlg.show();
	QApplication::processEvents();

	int lineCount=0;
	QStringList tokens;

	//buffer
	//char currentLine[MAX_ASCII_FILE_LINE_LENGTH];

	while (true)
	{
		////if we don't need to rescan last line
		//if (!restart)
		//{
		//	scanLine = (fgets (currentLine , MAX_ASCII_FILE_LINE_LENGTH , fp) > 0);

		//	//no more line in file?
		//	if (!scanLine)
		//	{
		//		//we save current group and that's it!
		//		saveCurrentGroup = true;
		//		stop = true;
		//		tokens.clear();
		//	}
		//	else
		//	{
		//		if ((++lineCount % 4096) == 0)
		//			progressDlg.update(lineCount>>12);

		//		tokens = QString(currentLine).split(QRegExp("\\s+"),QString::SkipEmptyParts);

		//		//skip comments & empty lines
		//		if( tokens.empty() || tokens.front().startsWith('/',Qt::CaseInsensitive) || tokens.front().startsWith('#',Qt::CaseInsensitive) )
		//			continue;
		//	}
		//}
		//else
		//{
		//	restart = false;
		//}

		////standard line scan
		//if (scanLine)
		//{
		//	if (tokens.front() == "v")
		//	{
		//		//reserve more memory if necessary
		//		if (vertices->size() == vertices->capacity())
		//		{
		//			if (!vertices->reserve(vertices->capacity()+MAX_NUMBER_OF_ELEMENTS_PER_CHUNK))
		//			{
		//				objWarnings[NOT_ENOUGH_MEMORY]=true;
		//				error=true;
		//				break;
		//			}
		//		}

		//		//malformed line?
		//		if (tokens.size() < 4)
		//		{
		//			objWarnings[INVALID_LINE]=true;
		//			error=true;
		//			break;
		//		}

		//		double Pd[3] = { tokens[1].toDouble(), tokens[2].toDouble(), tokens[3].toDouble() };

		//		//first point: check for 'big' coordinates
		//		if (pointsRead==0)
		//		{
		//			bool shiftAlreadyEnabled = (coordinatesShiftEnabled && *coordinatesShiftEnabled && coordinatesShift);
		//			if (shiftAlreadyEnabled)
		//				memcpy(Pshift,coordinatesShift,sizeof(double)*3);
		//			bool applyAll=false;
		//			if (ccCoordinatesShiftManager::Handle(Pd,0,alwaysDisplayLoadDialog,shiftAlreadyEnabled,Pshift,0,applyAll))
		//			{
		//				vertices->setOriginalShift(Pshift[0],Pshift[1],Pshift[2]);
		//				ccConsole::Warning("[STLFilter::loadFile] Cloud has been recentered! Translation: (%.2f,%.2f,%.2f)",Pshift[0],Pshift[1],Pshift[2]);

		//				//we save coordinates shift information
		//				if (applyAll && coordinatesShiftEnabled && coordinatesShift)
		//				{
		//					*coordinatesShiftEnabled = true;
		//					coordinatesShift[0] = Pshift[0];
		//					coordinatesShift[1] = Pshift[1];
		//					coordinatesShift[2] = Pshift[2];
		//				}
		//			}
		//		}

		//		CCVector3 P((PointCoordinateType)(Pd[0]+Pshift[0]),
		//			(PointCoordinateType)(Pd[1]+Pshift[1]),
		//			(PointCoordinateType)(Pd[2]+Pshift[2]));

		//		vertices->addPoint(P);
		//		++pointsRead;
		//	}
		//	else if (tokens.front() == "vt") //vt = vertex texture
		//	{
		//		if (!texCoords)
		//		{
		//			texCoords = new TextureCoordsContainer();
		//			texCoords->link();
		//		}
		//		if (texCoords->currentSize() == texCoords->capacity())
		//		{
		//			if (!texCoords->reserve(texCoords->capacity()+MAX_NUMBER_OF_ELEMENTS_PER_CHUNK))
		//			{
		//				objWarnings[NOT_ENOUGH_MEMORY]=true;
		//				error=true;
		//				break;
		//			}
		//		}

		//		//malformed line?
		//		if (tokens.size() < 3)
		//		{
		//			objWarnings[INVALID_LINE]=true;
		//			error=true;
		//			break;
		//		}

		//		T[0] = tokens[1].toDouble();
		//		T[1] = tokens[2].toDouble();

		//		texCoords->addElement(T);
		//		++texCoordsRead;
		//		//*/
		//	}
		//	else if (tokens.front() == "vn") //vn = vertex normal --> in fact it can also be a facet normal!!!
		//	{
		//		if (!normals)
		//		{
		//			normals = new NormsIndexesTableType;
		//			normals->link();
		//		}
		//		if (normals->currentSize() == normals->capacity())
		//		{
		//			if (!normals->reserve(normals->capacity()+MAX_NUMBER_OF_ELEMENTS_PER_CHUNK))
		//			{
		//				objWarnings[NOT_ENOUGH_MEMORY]=true;
		//				error=true;
		//				break;
		//			}
		//		}

		//		//malformed line?
		//		if (tokens.size() < 4)
		//		{
		//			objWarnings[INVALID_LINE]=true;
		//			error=true;
		//			break;
		//		}

		//		N.x = (PointCoordinateType)tokens[1].toDouble();
		//		N.y = (PointCoordinateType)tokens[2].toDouble();
		//		N.z = (PointCoordinateType)tokens[3].toDouble();

		//		if (fabs(N.norm2() - 1.0)<0.05)
		//			objWarnings[INVALID_NORMALS]=true;
		//		normsType nIndex = ccNormalVectors::GetNormIndex(N.u);

		//		normals->addElement(nIndex); //we don't know yet if it's per-vertex or per-triangle normal...
		//		++normsRead;
		//		//*/
		//	}
		//	else if (tokens.front() == "g") //new group
		//	{
		//		saveCurrentGroup = true;
		//		createNewGroup = true;
		//		//we get the object name
		//		QString objectName = (tokens.size() > 1 && !tokens[1].isEmpty() ? tokens[1] : "default");
		//	}
		//	else if (tokens.front().startsWith('f')) //new facet
		//	{
		//		//malformed line?
		//		if (tokens.size() < 4)
		//		{
		//			objWarnings[INVALID_LINE]=true;
		//			error=true;
		//			break;
		//		}

		//		if (!tri)
		//		{
		//			restart = true;
		//			createNewGroup = true;
		//			//we reset the object name
		//			objectName = "default";
		//		}
		//		else
		//		{
		//			//we reset current facet 'state'
		//			currentFace.clear(); //current face element

		//			for (int i=1; i<tokens.size(); ++i)
		//			{
		//				//new summit
		//				facetElement fe; //(0,0,0) by default
		//				QStringList vertexTokens = tokens[i].split('/');
		//				if (vertexTokens.size()==0 || vertexTokens[0].isEmpty())
		//				{
		//					objWarnings[INVALID_LINE]=true;
		//					error=true;
		//				}
		//				else
		//				{
		//					fe.vIndex = vertexTokens[0].toInt();
		//					if (vertexTokens.size()>1 && !vertexTokens[1].isEmpty())
		//						fe.tcIndex = vertexTokens[1].toInt();
		//					if (vertexTokens.size()>2 && !vertexTokens[2].isEmpty())
		//						fe.nIndex = vertexTokens[2].toInt();
		//				}

		//				currentFace.push_back(fe);
		//			}

		//			if (error)
		//				break;

		//			unsigned vCount = currentFace.size();
		//			if (vCount<3)
		//			{
		//				ccConsole::Error("Malformed file: face on line %1 has less than 3 vertices!",lineCount);
		//				error=true;
		//				break;
		//			}

		//			//first vertex
		//			std::vector<facetElement>::iterator A = currentFace.begin();

		//			//the very first vertex tells us about the whole sequence
		//			if (facesRead == 0)
		//			{
		//				//we have a tex. coord index as second vertex element!
		//				if (A->tcIndex != 0 && !materialsLoadFailed)
		//				{
		//					if (!tri->reservePerTriangleTexCoordIndexes())
		//					{
		//						objWarnings[NOT_ENOUGH_MEMORY]=true;
		//						error=true;
		//						break;
		//					}
		//					hasTexCoords = true;
		//				}

		//				//we have a normal index as third vertex element!
		//				if (A->nIndex != 0)
		//				{
		//					//so the normals are 'per-facet'
		//					normalsPerFacet = true;
		//					if (!tri->reservePerTriangleNormalIndexes())
		//					{
		//						objWarnings[NOT_ENOUGH_MEMORY]=true;
		//						error=true;
		//						break;
		//					}
		//				}
		//			}

		//			//we process all vertices accordingly
		//			std::vector<facetElement>::iterator it = currentFace.begin();
		//			for (;it!=currentFace.end();++it)
		//			{
		//				if (!it->updatePointIndex(pointsRead))
		//				{
		//					objWarnings[INVALID_INDEX]=true;
		//					error=true;
		//					break;
		//				}
		//				if (it->vIndex > maxVertexIndex)
		//					maxVertexIndex = it->vIndex;

		//				//should we have a tex. coord index as second vertex element?
		//				if (hasTexCoords)
		//				{
		//					if (!it->updateTexCoordIndex(texCoordsRead))
		//					{
		//						objWarnings[INVALID_INDEX]=true;
		//						error=true;
		//						break;
		//					}
		//					if (it->tcIndex>maxTexCoordIndex)
		//						maxTexCoordIndex = it->tcIndex;
		//				}

		//				//should we have a normal index as third vertex element?
		//				if (normalsPerFacet)
		//				{
		//					if (!it->updateNormalIndex(normsRead))
		//					{
		//						objWarnings[INVALID_INDEX]=true;
		//						error=true;
		//						break;
		//					}
		//					if (it->nIndex>maxTriNormIndex)
		//						maxTriNormIndex = it->nIndex;
		//				}
		//			}

		//			//don't forget material (common for all vertices)
		//			if (currentMaterialDefined && !materialsLoadFailed)
		//			{
		//				if (!hasMaterial)
		//				{
		//					//We hope it's the first facet!!!
		//					assert(facesRead == 0);
		//					if (!tri->reservePerTriangleMtlIndexes())
		//					{
		//						objWarnings[NOT_ENOUGH_MEMORY]=true;
		//						error=true;
		//						break;
		//					}
		//					hasMaterial = true;
		//				}
		//			}

		//			if (error)
		//				break;

		//			//Now, let's tesselate the whole polygon
		//			//yeah, we do very ulgy tesselation here!
		//			std::vector<facetElement>::const_iterator B = A+1;
		//			std::vector<facetElement>::const_iterator C = B+1;
		//			for (;C != currentFace.end();++B,++C)
		//			{
		//				//need more space?
		//				if (facesRead==maxFaces)
		//				{
		//					maxFaces+=128;
		//					if (!tri->reserve(maxFaces))
		//					{
		//						objWarnings[NOT_ENOUGH_MEMORY]=true;
		//						error=true;
		//						break;
		//					}
		//				}

		//				tri->addTriangle(A->vIndex, B->vIndex, C->vIndex);
		//				++facesRead;

		//				if (hasMaterial)
		//					tri->addTriangleMtlIndex(currentMaterial);

		//				if (hasTexCoords)
		//					tri->addTriangleTexCoordIndexes(A->tcIndex, B->tcIndex, C->tcIndex);

		//				if (normalsPerFacet)
		//					tri->addTriangleNormalIndexes(A->nIndex, B->nIndex, C->nIndex);
		//			}
		//		}
		//	}
		//	else if (tokens.front() == "usemtl") // material (see MTL file)
		//	{
		//		if (materials) //otherwise we have failed to load MTL file!!!
		//		{
		//			//DGM: in case there's space characters in the material name, we must read it again from the original line buffer
		//			//QString mtlName = (tokens.size() > 1 && !tokens[1].isEmpty() ? tokens[1] : "");
		//			QString mtlName = QString(currentLine+7).trimmed();
		//			currentMaterial = (!mtlName.isEmpty() ? materials->findMaterial(mtlName) : -1);
		//			currentMaterialDefined = true;
		//		}
		//	}
		//	else if (tokens.front() == "mtllib") // MTL file
		//	{
		//		//malformed line?
		//		if (tokens.size() < 2 || tokens[1].isEmpty())
		//		{
		//			objWarnings[INVALID_LINE]=true;
		//		}
		//		else
		//		{
		//			//we build the whole MTL filename + path
		//			//DGM: in case there's space characters in the filename, we must read it again from the original line buffer
		//			//QString mtlFilename = tokens[1];
		//			QString mtlFilename = QString(currentLine+7).trimmed();
		//			ccConsole::Print(QString("[STLFilter::Load] Material file: ")+mtlFilename);
		//			QString mtlPath = QFileInfo(filename).canonicalPath();
		//			//we try to load it
		//			if (!materials)
		//			{
		//				materials = new ccMaterialSet("materials");
		//				materials->link();
		//			}

		//			unsigned oldSize = materials->size();
		//			QStringList errors;
		//			if (ccMaterialSet::ParseMTL(mtlPath,mtlFilename,*materials,errors))
		//			{
		//				ccConsole::Print("[STLFilter::Load] %i materials loaded",materials->size()-oldSize);
		//			}
		//			else
		//			{
		//				ccConsole::Error(QString("[STLFilter::Load] Failed to load material file! (should be in '%1')").arg(mtlPath+'/'+QString(mtlFilename)));
		//				materialsLoadFailed = true;
		//			}

		//			if (!errors.empty())
		//			{
		//				for (int i=0; i<errors.size(); ++i)
		//					ccConsole::Warning(QString("[STLFilter::Load::MTL parser] ")+errors[i]);
		//			}
		//			if (materials->empty())
		//			{
		//				materials->release();
		//				materials=0;
		//				materialsLoadFailed = true;
		//			}
		//		}
		//	}
		//	//else if (tokens.front() == "s") // shading group
		//	//{
		//	//	//ignored!
		//	//}
		//}

		//if (error)
		//	break;

		////save the actual group? (if any)
		//if (stop || saveCurrentGroup || (tri && createNewGroup))
		//{
		//	//something to save?
		//	if (saveCurrentGroup && facesRead>0)
		//	{
		//		tri->resize(facesRead);
		//		totalFacesRead+=facesRead;
		//		if (hasMaterial || hasTexCoords)
		//		{
		//			assert(materials);
		//			tri->setMaterialSet(materials);
		//			tri->showMaterials(true);
		//		}
		//		if (hasTexCoords)
		//		{
		//			assert(texCoords);
		//			tri->setTexCoordinatesTable(texCoords);
		//		}
		//		if (normals && normalsPerFacet) //'per-facet' normals
		//		{
		//			normalsPerFacetGlobal = true;
		//			tri->setTriNormsTable(normals);
		//			tri->showTriNorms(true);
		//		}

		//		//we add an intermediary group to encapsulate all the sub-meshes
		//		meshes.push_back(tri);
		//	}
		//	else if (tri)//empty or discarded mesh ?!
		//	{
		//		if (facesRead==0)
		//			objWarnings[EMPTY_GROUP]=true;
		//		if (!saveCurrentGroup) //if we are here, it means that saving for this group has not been requested --> we discard it!
		//			objWarnings[DISCARED_GROUP]=true;
		//		delete tri;
		//		tri=0;
		//	}

		//	tri=0;
		//	maxFaces=facesRead=0;
		//	hasTexCoords=false;
		//	hasMaterial=false;
		//	normalsPerFacet=false;

		//	//job done
		//	saveCurrentGroup=false;
		//}

		////create a new group?
		//if (createNewGroup)
		//{
		//	assert(!tri);

		//	tri = new ccMesh(vertices);
		//	tri->setName(objectName);

		//	//we always reserve some triangles
		//	maxFaces=128;
		//	//WARNING: don't set this value too high on Windows XP,
		//	//as you will really chunk the memory if you have a lot
		//	//of small meshes!
		//	if (!tri->reserve(maxFaces))
		//	{
		//		objWarnings[NOT_ENOUGH_MEMORY]=true;
		//		error=true;
		//		break;
		//	}

		//	//job done
		//	createNewGroup = false;
		//}
	}

	fclose(fp);

	////1st check
	//if (!error && pointsRead == 0)
	//{
	//	//of course if there's no vertex, that's the end of the story ...
	//	ccConsole::Warning("[STLFilter::Load] Malformed file: no vertex in file!");
	//	error = true;
	//}

	//if (!error)
	//{
	//	ccConsole::Print("[STLFilter::Load] %i points, %i faces",pointsRead,totalFacesRead);
	//	if (texCoordsRead>0 || normsRead>0)
	//		ccConsole::Print("[STLFilter::Load] %i tex. coords, %i normals",texCoordsRead,normsRead);

	//	//do some cleaning
	//	if (vertices->size()<vertices->capacity())
	//		vertices->resize(vertices->size());
	//	if (normals && normals->currentSize()<normals->capacity())
	//		normals->resize(normals->currentSize());
	//	if (texCoords && texCoords->currentSize()<texCoords->capacity())
	//		texCoords->resize(texCoords->currentSize());

	//	//if we have at least one mesh
	//	ccGenericMesh* baseMesh = 0;
	//	assert(!tri); //last mesh should have been saved or discared properly then set to 0!
	//	if (!meshes.empty())
	//	{
	//		if (maxVertexIndex>=pointsRead
	//			|| maxTexCoordIndex>=texCoordsRead
	//			|| maxTriNormIndex>=normsRead)
	//		{
	//			//hum, we've got a problem here
	//			ccConsole::Warning("[STLFilter::Load] Malformed file: indexes go higher than the number of elements! (v=%i/tc=%i/n=%i)",maxVertexIndex,maxTexCoordIndex,maxTriNormIndex);
	//			while (!meshes.empty())
	//			{
	//				delete meshes.back();
	//				meshes.pop_back();
	//			}
	//		}
	//		else
	//		{
	//			unsigned meshCount = meshes.size();
	//			ccConsole::Print("[STLFilter::Load] %i mesh(es) loaded", meshCount);
	//			if (meshCount == 1) //don't need to keep a group for a unique mesh!
	//			{
	//				tri = meshes.front();
	//				baseMesh = tri;
	//				baseMesh->getAssociatedCloud()->setLocked(false); //DGM: no need to lock it as it is only used by one mesh!
	//			}
	//			else
	//			{
	//				ccMeshGroup* triGroup = new ccMeshGroup(vertices);
	//				for (unsigned i=0;i<meshCount;++i)
	//					triGroup->addChild(meshes[i]);
	//				if (normals && normalsPerFacetGlobal)
	//					triGroup->showTriNorms(true);
	//				baseMesh = triGroup;
	//			}

	//			assert(baseMesh);
	//			baseMesh->addChild(vertices);
	//			if (materials)
	//				baseMesh->addChild(materials,true);
	//			if (normals && normalsPerFacetGlobal)
	//				baseMesh->addChild(normals,true);
	//			if (texCoords)
	//				baseMesh->addChild(texCoords,true);

	//			vertices->setEnabled(false);
	//			vertices->setLocked(true); //by default vertices are locked (in case they are shared by mutliple sub-meshes).

	//			//normals: if the obj file doesn't provide any, should we compute them?
	//			if (!normals)
	//			{
	//				if (!materials) //yes if no material is available!
	//				{
	//					ccConsole::Print("[STLFilter::Load] Mesh has no normal! We will compute them automatically");
	//					baseMesh->computeNormals();
	//					baseMesh->showNormals(true);
	//				}
	//				else
	//				{
	//					ccConsole::Warning("[STLFilter::Load] Mesh has no normal! CloudCompare can try to compute them (select base entity, then \"Edit > Normals > Compute\")");
	//				}
	//			}

	//			container.addChild(baseMesh);
	//		}
	//	}

	//	if (!baseMesh)
	//	{
	//		//no (valid) mesh!
	//		container.addChild(vertices);
	//	}

	//	//special case: normals held by cloud!
	//	if (normals && !normalsPerFacetGlobal)
	//	{
	//		if (normsRead == pointsRead) //must be 'per-vertex' normals
	//		{
	//			vertices->setNormsTable(normals);
	//			if (baseMesh)
	//				baseMesh->showNormals(true);
	//		}
	//		else
	//		{
	//			ccConsole::Warning("File contains normals which seem to be neither per-vertex nor per-face!!! We had to ignore them...");
	//		}
	//	}
	//}

	//if (error)
	//{
	//	if (tri)
	//		delete tri;
	//	if (vertices)
	//		delete vertices;
	//}

	////release shared structures
	//if (normals)
	//{
	//	normals->release();
	//	normals=0;
	//}

	//if (texCoords)
	//{
	//	texCoords->release();
	//	texCoords=0;
	//}

	//if (materials)
	//{
	//	materials->release();
	//	materials=0;
	//}

	progressDlg.stop();

	return CC_FERR_NO_ERROR;
}
