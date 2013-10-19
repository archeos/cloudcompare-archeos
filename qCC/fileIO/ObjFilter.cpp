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

#include "ObjFilter.h"
#include "../ccCoordinatesShiftManager.h"

//Qt
#include <QApplication>
#include <QFileInfo>
#include <QStringList>
#include <QString>
#include <QFile>
#include <QTextStream>

//qCC_db
#include <ccLog.h>
#include <ccMesh.h>
#include <ccSubMesh.h>
#include <ccMaterial.h>
#include <ccPointCloud.h>
#include <ccProgressDialog.h>
#include <ccNormalVectors.h>
#include <ccMaterialSet.h>

//System
#include <string.h>

CC_FILE_ERROR ObjFilter::saveToFile(ccHObject* entity, const char* filename)
{
	if (!entity)
		return CC_FERR_BAD_ARGUMENT;

	if (!entity->isKindOf(CC_MESH))
		return CC_FERR_BAD_ENTITY_TYPE;

	ccGenericMesh* mesh = ccHObjectCaster::ToGenericMesh(entity);
	if (!mesh || mesh->size() == 0)
	{
		ccLog::Warning(QString("[ObjFilter] No facet in mesh '%1'!").arg(mesh->getName()));
		return CC_FERR_NO_ERROR;
	}

	//try to open file for saving
	FILE* theFile = fopen(filename,"wb");
	if (!theFile)
		return CC_FERR_WRITING;

	CC_FILE_ERROR result = saveToFile(mesh, theFile, filename);

	fclose(theFile);

	return result;
}

CC_FILE_ERROR ObjFilter::saveToFile(ccGenericMesh* mesh, FILE *theFile, const char* filename)
{
	assert(theFile && mesh && mesh->size()!=0);
	unsigned numberOfTriangles = mesh->size();

	//progress
	ccProgressDialog pdlg(true);
	CCLib::NormalizedProgress nprogress(&pdlg,numberOfTriangles);
	pdlg.setMethodTitle(qPrintable(QString("Saving mesh [%1]").arg(mesh->getName())));
	pdlg.setInfo(qPrintable(QString("Number of facets: %1").arg(numberOfTriangles)));
	pdlg.start();

	if (fprintf(theFile,"#OBJ Generated by CloudCompare (TELECOM PARISTECH/EDF R&D)\n") < 0)
		return CC_FERR_WRITING;

	//vertices
	ccGenericPointCloud* vertices = mesh->getAssociatedCloud();
	unsigned nbPoints = vertices->size();
	const double* shift = vertices->getOriginalShift();
	for (unsigned i=0; i<nbPoints; ++i)
	{
		const CCVector3* P = vertices->getPoint(i);
		if (fprintf(theFile,"v %f %f %f\n",-shift[0]+(double)P->x,
			-shift[1]+(double)P->y,
			-shift[2]+(double)P->z) < 0)
			return CC_FERR_WRITING;
	}

	//per-triangle normals
	bool withTriNormals = mesh->hasTriNormals();
	if (withTriNormals)
	{
		NormsIndexesTableType* normsTable = mesh->getTriNormsTable();
		if (normsTable)
		{
			for (unsigned i=0; i<normsTable->currentSize(); ++i)
			{
				const PointCoordinateType* _normalVec = ccNormalVectors::GetNormal(normsTable->getValue(i));
				if (fprintf(theFile,"vn %f %f %f\n",_normalVec[0],_normalVec[1],_normalVec[2]) < 0)
					return CC_FERR_WRITING;
			}
		}
		else
		{
			assert(false);
			withTriNormals = false;
		}
	}

	//if mesh hasn't per-triangle normals, we try per-vertices ones
	bool withVertNormals = vertices->hasNormals();
	if (!withTriNormals && withVertNormals)
	{
		for (unsigned i=0; i<nbPoints; ++i)
		{
			const PointCoordinateType* _normalVec = vertices->getPointNormal(i);
			if (fprintf(theFile,"vn %f %f %f\n",_normalVec[0],_normalVec[1],_normalVec[2]) < 0)
				return CC_FERR_WRITING;
		}
	}

	//materials
	const ccMaterialSet* materials = mesh->getMaterialSet();
	if (materials)
	{
		//save mtl file
		QStringList errors;
		QString baseName = QFileInfo(filename).baseName();
		if (materials->saveAsMTL(QFileInfo(filename).absolutePath(),baseName,errors))
		{
			fprintf(theFile,"mtllib %s\n",qPrintable(baseName+QString(".mtl")));
		}
		else
		{
			materials = 0;
		}

		for (int i=0; i<errors.size(); ++i)
			ccLog::Warning(QString("[ObjFilter::Save::MTL writer] ")+errors[i]);
	}
	bool withMaterials = (materials && mesh->hasMaterials());

	//save texture coordinates
	bool withTexCoordinates = withMaterials && mesh->hasPerTriangleTexCoordIndexes();
	if (withTexCoordinates)
	{
		TextureCoordsContainer* texCoords = mesh->getTexCoordinatesTable();
		if (texCoords)
		{
			for (unsigned i=0; i<texCoords->currentSize(); ++i)
			{
				const float* tc = texCoords->getValue(i);
				fprintf(theFile,"vt %f %f\n",tc[0],tc[1]);
			}
		}
		else
		{
			withTexCoordinates = false;
		}
	}

	bool withNormals = (withTriNormals || withVertNormals);

	std::vector<ccGenericMesh*> subMeshes;
	subMeshes.push_back(mesh);

	//mesh or sub-meshes
	while (!subMeshes.empty())
	{
		ccGenericMesh* subMesh = subMeshes.back();
		subMeshes.pop_back();

		if (subMesh->isKindOf(CC_MESH))
		{
			ccGenericMesh* st = static_cast<ccGenericMesh*>(subMesh);
			if (fprintf(theFile,"g %s\n",qPrintable(st->getName())) < 0)
				return CC_FERR_WRITING;

			unsigned triNum = st->size();
			st->placeIteratorAtBegining();

			int lastMtlIndex = -1;
			int t1 = -1, t2 = -1, t3 = -1;

			for (unsigned i=0;i<triNum;++i)
			{
				if (withMaterials)
				{
					int mtlIndex = mesh->getTriangleMtlIndex(i);
					if (mtlIndex != lastMtlIndex)
					{
						if (mtlIndex >= 0 && mtlIndex < static_cast<int>(materials->size()))
						{
							const ccMaterial& mat = materials->at(mtlIndex);
							fprintf(theFile, "usemtl %s\n",qPrintable(mat.name));
						}
						else
						{
							fprintf(theFile, "usemtl \n");
						}
						lastMtlIndex = mtlIndex;
					}
				}

				if (withTexCoordinates)
				{
					mesh->getTriangleTexCoordinatesIndexes(i,t1,t2,t3);
					if (t1 >= 0) ++t1;
					if (t2 >= 0) ++t2;
					if (t3 >= 0) ++t3;
				}

				const CCLib::TriangleSummitsIndexes* tsi = st->getNextTriangleIndexes();
				//for per-triangle normals
				unsigned i1 = 1+tsi->i1;
				unsigned i2 = 1+tsi->i2;
				unsigned i3 = 1+tsi->i3;
				if (withNormals)
				{
					int n1 = static_cast<int>(i1);
					int n2 = static_cast<int>(i2);
					int n3 = static_cast<int>(i3);
					if (withTriNormals)
					{
						st->getTriangleNormalIndexes(i,n1,n2,n3);
						if (n1 >= 0) ++n1;
						if (n2 >= 0) ++n2;
						if (n3 >= 0) ++n3;
					}

					if (withTexCoordinates)
					{
						if (fprintf(theFile,"f %i/%i/%i %i/%i/%i %i/%i/%i\n", i1, t1, n1, i2, t2, n2, i3, t3, n3) < 0)
						{
							return CC_FERR_WRITING;
						}
					}
					else
					{
						if (fprintf(theFile,"f %i//%i %i//%i %i//%i\n",	i1, n1, i2, n2, i3,	n3) < 0)
						{
							return CC_FERR_WRITING;
						}
					}
				}
				else
				{
					if (withTexCoordinates)
					{
						if (fprintf(theFile,"f %i/%i %i/%i %i/%i\n",i1,t1,i2,t2,i3,t3) < 0)
							return CC_FERR_WRITING;
					}
					else
					{
						if (fprintf(theFile,"f %i %i %i\n",i1,i2,i3) < 0)
							return CC_FERR_WRITING;
					}
				}

				if (!nprogress.oneStep()) //cancel requested
					return CC_FERR_CANCELED_BY_USER;
			}

			if (fprintf(theFile,"#%i faces\n",triNum) < 0)
				return CC_FERR_WRITING;
		}
	}

	return CC_FERR_NO_ERROR;
}

//! OBJ facet ('f') element
struct facetElement
{
	//! A set of indexes (vertex, texture coordinates and normal)
	union
	{
		struct
		{
			int vIndex;		//vertex index
			int tcIndex;	//texture coordinate index
			int nIndex;		//normal index
		};
		int indexes[3];
	};

	//! Default constructor
	facetElement()
		: vIndex(0)
		, tcIndex(0)
		, nIndex(0)
	{
	}

	//! Updates point index to a global index starting from 0!
	bool updatePointIndex(int maxIndex)
	{
		if (vIndex == 0 || -vIndex>maxIndex)
			return false;
		vIndex = (vIndex>0 ? vIndex-1 : maxIndex+vIndex);
		return true;
	}

	//! Updates tex coord index to a global index starting from 0!
	bool updateTexCoordIndex(int maxIndex)
	{
		if (-tcIndex > maxIndex)
			return false;
		//if tcIndex == 0 then we return '-1'
		tcIndex = (tcIndex >= 0 ? tcIndex-1 : maxIndex+tcIndex);
		return true;
	}

	//! Updates normal index to a global index starting from 0!
	bool updateNormalIndex(int maxIndex)
	{
		if (-nIndex > maxIndex)
			return false;
		//if nIndex == 0 then we return '-1'
		nIndex = (nIndex >= 0 ? nIndex-1 : maxIndex+nIndex);
		return true;
	}
};

CC_FILE_ERROR ObjFilter::loadFile(const char* filename, ccHObject& container, bool alwaysDisplayLoadDialog/*=true*/, bool* coordinatesShiftEnabled/*=0*/, double* coordinatesShift/*=0*/)
{
	ccLog::Print("[ObjFilter::Load] %s",filename);

	//open file
	QFile file(filename);
	if (!file.open(QFile::ReadOnly))
		return CC_FERR_READING;
	QTextStream stream(&file);

	//current vertex shift
	double Pshift[3] = {0.0,0.0,0.0};

	//vertices
	ccPointCloud* vertices = new ccPointCloud("vertices");
	int pointsRead = 0;

	//facets
	int facesRead = 0;
	int totalFacesRead = 0;
	int maxVertexIndex = -1;

	//base mesh
	ccMesh* baseMesh = new ccMesh(vertices);
	baseMesh->setName(QFileInfo(filename).baseName());
	//we need some space already reserved!
	if (!baseMesh->reserve(128))
	{
		ccLog::Error("Not engouh memory!");
		return CC_FERR_NOT_ENOUGH_MEMORY;
	}

	//groups (starting index + name)
    std::vector<std::pair<unsigned,QString> > groups;

	//materials
	ccMaterialSet* materials = 0;
	bool hasMaterial = false;
	int currentMaterial = -1;
	bool currentMaterialDefined = false;
	bool materialsLoadFailed = true;

	//texture coordinates
	TextureCoordsContainer* texCoords = 0;
	bool hasTexCoords = false;
	int texCoordsRead = 0;
	int maxTexCoordIndex = -1;

	//normals
	NormsIndexesTableType* normals = 0;
	int normsRead = 0;
	bool normalsPerFacet = false;
	int maxTriNormIndex = -1;

	//progress dialog
	ccProgressDialog progressDlg(false);
	progressDlg.setMethodTitle("Loading OBJ file");
	progressDlg.setInfo("Loading in progress...");
	progressDlg.setRange(0,0);
	progressDlg.show();
	QApplication::processEvents();

	//common warnings that can appear multiple time (we avoid to send too many messages to the console!)
	enum OBJ_WARNINGS {	DISCARED_GROUP		= 0,
						EMPTY_GROUP			= 1,
						INVALID_NORMALS		= 2,
						INVALID_INDEX		= 3,
						NOT_ENOUGH_MEMORY	= 4,
						INVALID_LINE		= 5,
	};
	bool objWarnings[6] = { false, false, false, false, false, false };
	bool error = false;

	unsigned lineCount = 0;
	QString currentLine = stream.readLine();
	while (!currentLine.isNull())
	{
		if ((++lineCount % 4096) == 0)
			progressDlg.update(lineCount>>12);

		QStringList tokens = QString(currentLine).split(QRegExp("\\s+"),QString::SkipEmptyParts);

		//skip comments & empty lines
		if( tokens.empty() || tokens.front().startsWith('/',Qt::CaseInsensitive) || tokens.front().startsWith('#',Qt::CaseInsensitive) )
		{
			currentLine = stream.readLine();
			continue;
		}

		/*** new vertex ***/
		if (tokens.front() == "v")
		{
			//reserve more memory if necessary
			if (vertices->size() == vertices->capacity())
			{
				if (!vertices->reserve(vertices->capacity()+MAX_NUMBER_OF_ELEMENTS_PER_CHUNK))
				{
					objWarnings[NOT_ENOUGH_MEMORY] = true;
					error = true;
					break;
				}
			}

			//malformed line?
			if (tokens.size() < 4)
			{
				objWarnings[INVALID_LINE] = true;
				error = true;
				break;
			}

			double Pd[3] = { tokens[1].toDouble(), tokens[2].toDouble(), tokens[3].toDouble() };

			//first point: check for 'big' coordinates
			if (pointsRead == 0)
			{
				bool shiftAlreadyEnabled = (coordinatesShiftEnabled && *coordinatesShiftEnabled && coordinatesShift);
				if (shiftAlreadyEnabled)
					memcpy(Pshift,coordinatesShift,sizeof(double)*3);
				bool applyAll = false;
				if (ccCoordinatesShiftManager::Handle(Pd,0,alwaysDisplayLoadDialog,shiftAlreadyEnabled,Pshift,0,applyAll))
				{
					vertices->setOriginalShift(Pshift[0],Pshift[1],Pshift[2]);
					ccLog::Warning("[ObjFilter::loadFile] Cloud has been recentered! Translation: (%.2f,%.2f,%.2f)",Pshift[0],Pshift[1],Pshift[2]);

					//we save coordinates shift information
					if (applyAll && coordinatesShiftEnabled && coordinatesShift)
					{
						*coordinatesShiftEnabled = true;
						coordinatesShift[0] = Pshift[0];
						coordinatesShift[1] = Pshift[1];
						coordinatesShift[2] = Pshift[2];
					}
				}
			}

			//shifted point
			CCVector3 P((PointCoordinateType)(Pd[0]+Pshift[0]),
				(PointCoordinateType)(Pd[1]+Pshift[1]),
				(PointCoordinateType)(Pd[2]+Pshift[2]));

			vertices->addPoint(P);
			++pointsRead;
		}
		/*** new vertex texture coordinates ***/
		else if (tokens.front() == "vt")
		{
			//create and reserve memory for tex. coords container if necessary
			if (!texCoords)
			{
				texCoords = new TextureCoordsContainer();
				texCoords->link();
			}
			if (texCoords->currentSize() == texCoords->capacity())
			{
				if (!texCoords->reserve(texCoords->capacity() + MAX_NUMBER_OF_ELEMENTS_PER_CHUNK))
				{
					objWarnings[NOT_ENOUGH_MEMORY] = true;
					error = true;
					break;
				}
			}

			//malformed line?
			if (tokens.size() < 3)
			{
				objWarnings[INVALID_LINE] = true;
				error = true;
				break;
			}

			float T[2] = { tokens[1].toFloat(), tokens[2].toFloat() };

			texCoords->addElement(T);
			++texCoordsRead;
		}
		/*** new vertex normal ***/
		else if (tokens.front() == "vn") //--> in fact it can also be a facet normal!!!
		{
			//create and reserve memory for normals container if necessary
			if (!normals)
			{
				normals = new NormsIndexesTableType;
				normals->link();
			}
			if (normals->currentSize() == normals->capacity())
			{
				if (!normals->reserve(normals->capacity() + MAX_NUMBER_OF_ELEMENTS_PER_CHUNK))
				{
					objWarnings[NOT_ENOUGH_MEMORY] = true;
					error = true;
					break;
				}
			}

			//malformed line?
			if (tokens.size() < 4)
			{
				objWarnings[INVALID_LINE] = true;
				error = true;
				break;
			}

			CCVector3 N((PointCoordinateType)tokens[1].toDouble(),
				(PointCoordinateType)tokens[2].toDouble(),
				(PointCoordinateType)tokens[3].toDouble());

			if (fabs(N.norm2() - 1.0) < 0.05)
				objWarnings[INVALID_NORMALS] = true;
			normsType nIndex = ccNormalVectors::GetNormIndex(N.u);

			normals->addElement(nIndex); //we don't know yet if it's per-vertex or per-triangle normal...
			++normsRead;
		}
		/*** new group ***/
		else if (tokens.front() == "g")
		{
			//update new group index
			totalFacesRead += facesRead;
			facesRead = 0;
			//get the group name
			QString groupName = (tokens.size() > 1 && !tokens[1].isEmpty() ? tokens[1] : "default");
			for (int i=2; i<tokens.size(); ++i) //multiple parts?
				groupName.append(QString(" ")+tokens[i]);
			//push previous group descriptor (if none was pushed)
			if (groups.empty() && totalFacesRead > 0)
				groups.push_back(std::pair<unsigned,QString>(0,"default"));
			//push new group descriptor
			if (!groups.empty() && groups.back().first == totalFacesRead)
				groups.back().second = groupName; //simply replace the group name if the previous group was empty!
			else
				groups.push_back(std::pair<unsigned,QString>(totalFacesRead,groupName));
		}
		/*** new face ***/
		else if (tokens.front().startsWith('f'))
		{
			//malformed line?
			if (tokens.size() < 4)
			{
				objWarnings[INVALID_LINE] = true;
				currentLine = stream.readLine();
				continue;
				//error = true;
				//break;
			}

			//read the face elements (singleton, pair or triplet)
			std::vector<facetElement> currentFace;
			for (int i=1; i<tokens.size(); ++i)
			{
				//new summit
				facetElement fe; //(0,0,0) by default
				QStringList vertexTokens = tokens[i].split('/');
				if (vertexTokens.size() == 0 || vertexTokens[0].isEmpty())
				{
					objWarnings[INVALID_LINE] = true;
					error = true;
				}
				else
				{
					fe.vIndex = vertexTokens[0].toInt();
					if (vertexTokens.size()>1 && !vertexTokens[1].isEmpty())
						fe.tcIndex = vertexTokens[1].toInt();
					if (vertexTokens.size()>2 && !vertexTokens[2].isEmpty())
						fe.nIndex = vertexTokens[2].toInt();
				}

				currentFace.push_back(fe);
			}

			if (error)
				break;

			if (currentFace.size() < 3)
			{
				ccLog::Error("Malformed file: face on line %1 has less than 3 vertices!",lineCount);
				error = true;
				break;
			}

			//first vertex
			std::vector<facetElement>::iterator A = currentFace.begin();

			//the very first vertex of the group tells us about the whole sequence
			if (facesRead == 0)
			{
				//we have a tex. coord index as second vertex element!
				if (!hasTexCoords && A->tcIndex != 0 && !materialsLoadFailed)
				{
					if (!baseMesh->reservePerTriangleTexCoordIndexes())
					{
						objWarnings[NOT_ENOUGH_MEMORY] = true;
						error = true;
						break;
					}
					for (int i=0; i<totalFacesRead; ++i)
						baseMesh->addTriangleTexCoordIndexes(-1, -1, -1);

					hasTexCoords = true;
				}

				//we have a normal index as third vertex element!
				if (!normalsPerFacet && A->nIndex != 0)
				{
					//so the normals are 'per-facet'
					if (!baseMesh->reservePerTriangleNormalIndexes())
					{
						objWarnings[NOT_ENOUGH_MEMORY] = true;
						error = true;
						break;
					}
					for (int i=0; i<totalFacesRead; ++i)
						baseMesh->addTriangleNormalIndexes(-1, -1, -1);
					normalsPerFacet = true;
				}
			}

			//we process all vertices accordingly
			std::vector<facetElement>::iterator it = currentFace.begin();
			for ( ; it!=currentFace.end(); ++it)
			{
				if (!it->updatePointIndex(pointsRead))
				{
					objWarnings[INVALID_INDEX] = true;
					error = true;
					break;
				}
				if (it->vIndex > maxVertexIndex)
					maxVertexIndex = it->vIndex;

				//should we have a tex. coord index as second vertex element?
				if (hasTexCoords && currentMaterialDefined)
				{
					if (!it->updateTexCoordIndex(texCoordsRead))
					{
						objWarnings[INVALID_INDEX] = true;
						error = true;
						break;
					}
					if (it->tcIndex > maxTexCoordIndex)
						maxTexCoordIndex = it->tcIndex;
				}

				//should we have a normal index as third vertex element?
				if (normalsPerFacet)
				{
					if (!it->updateNormalIndex(normsRead))
					{
						objWarnings[INVALID_INDEX] = true;
						error = true;
						break;
					}
					if (it->nIndex > maxTriNormIndex)
						maxTriNormIndex = it->nIndex;
				}
			}

			//don't forget material (common for all vertices)
			if (currentMaterialDefined && !materialsLoadFailed)
			{
				if (!hasMaterial)
				{
					if (!baseMesh->reservePerTriangleMtlIndexes())
					{
						objWarnings[NOT_ENOUGH_MEMORY] = true;
						error = true;
						break;
					}
					for (int i=0; i<totalFacesRead; ++i)
						baseMesh->addTriangleMtlIndex(-1);

					hasMaterial = true;
				}
			}

			if (error)
				break;

			//Now, let's tesselate the whole polygon
			//FIXME: yeah, we do very ulgy tesselation here!
			std::vector<facetElement>::const_iterator B = A+1;
			std::vector<facetElement>::const_iterator C = B+1;
			for ( ; C != currentFace.end(); ++B,++C)
			{
				//need more space?
				if (baseMesh->size() == baseMesh->maxSize())
				{
					if (!baseMesh->reserve(baseMesh->size()+128))
					{
						objWarnings[NOT_ENOUGH_MEMORY] = true;
						error = true;
						break;
					}
				}

				//push new triangle
				baseMesh->addTriangle(A->vIndex, B->vIndex, C->vIndex);
				++facesRead;

				if (hasMaterial)
					baseMesh->addTriangleMtlIndex(currentMaterial);

				if (hasTexCoords)
					baseMesh->addTriangleTexCoordIndexes(A->tcIndex, B->tcIndex, C->tcIndex);

				if (normalsPerFacet)
					baseMesh->addTriangleNormalIndexes(A->nIndex, B->nIndex, C->nIndex);
			}
		}
		/*** material ***/
		else if (tokens.front() == "usemtl") //see 'MTL file' below
		{
			if (materials) //otherwise we have failed to load MTL file!!!
			{
				QString mtlName = currentLine.mid(7).trimmed();
				//DGM: in case there's space characters in the material name, we must read it again from the original line buffer
				//QString mtlName = (tokens.size() > 1 && !tokens[1].isEmpty() ? tokens[1] : "");
				currentMaterial = (!mtlName.isEmpty() ? materials->findMaterial(mtlName) : -1);
				currentMaterialDefined = true;
			}
		}
		/*** material file (MTL) ***/
		else if (tokens.front() == "mtllib")
		{
			//malformed line?
			if (tokens.size() < 2 || tokens[1].isEmpty())
			{
				objWarnings[INVALID_LINE] = true;
			}
			else
			{
				//we build the whole MTL filename + path
				//DGM: in case there's space characters in the filename, we must read it again from the original line buffer
				//QString mtlFilename = tokens[1];
				QString mtlFilename = currentLine.mid(7).trimmed();
				ccLog::Print(QString("[ObjFilter::Load] Material file: ")+mtlFilename);
				QString mtlPath = QFileInfo(filename).canonicalPath();
				//we try to load it
				if (!materials)
				{
					materials = new ccMaterialSet("materials");
					materials->link();
				}

				size_t oldSize = materials->size();
				QStringList errors;
				if (ccMaterialSet::ParseMTL(mtlPath,mtlFilename,*materials,errors))
				{
					ccLog::Print("[ObjFilter::Load] %i materials loaded",materials->size()-oldSize);
					materialsLoadFailed = false;
				}
				else
				{
					ccLog::Error(QString("[ObjFilter::Load] Failed to load material file! (should be in '%1')").arg(mtlPath+'/'+QString(mtlFilename)));
					materialsLoadFailed = true;
				}

				if (!errors.empty())
				{
					for (int i=0; i<errors.size(); ++i)
						ccLog::Warning(QString("[ObjFilter::Load::MTL parser] ")+errors[i]);
				}
				if (materials->empty())
				{
					materials->release();
					materials=0;
					materialsLoadFailed = true;
				}
			}
		}
		///*** shading group ***/
		//else if (tokens.front() == "s")
		//{
		//	//ignored!
		//}

		if (error)
			break;

		currentLine = stream.readLine();
	}

	file.close();

	//1st check
	if (!error && pointsRead == 0)
	{
		//of course if there's no vertex, that's the end of the story ...
		ccLog::Warning("[ObjFilter::Load] Malformed file: no vertex in file!");
		error = true;
	}

	if (!error)
	{
		ccLog::Print("[ObjFilter::Load] %i points, %i faces",pointsRead,totalFacesRead);
		if (texCoordsRead>0 || normsRead>0)
			ccLog::Print("[ObjFilter::Load] %i tex. coords, %i normals",texCoordsRead,normsRead);

		//do some cleaning
		if (vertices->size() < vertices->capacity())
			vertices->resize(vertices->size());
		if (normals && normals->currentSize() < normals->capacity())
			normals->resize(normals->currentSize());
		if (texCoords && texCoords->currentSize() < texCoords->capacity())
			texCoords->resize(texCoords->currentSize());
		if (baseMesh->maxSize() > baseMesh->size())
			baseMesh->resize(baseMesh->size());

		if (maxVertexIndex >= pointsRead
			|| maxTexCoordIndex >= texCoordsRead
			|| maxTriNormIndex >= normsRead)
		{
			//hum, we've got a problem here
			ccLog::Warning("[ObjFilter::Load] Malformed file: indexes go higher than the number of elements! (v=%i/tc=%i/n=%i)",maxVertexIndex,maxTexCoordIndex,maxTriNormIndex);
			error = true;
		}
		else
		{
			if (normals && normalsPerFacet)
			{
				baseMesh->setTriNormsTable(normals);
				baseMesh->showTriNorms(true);
				baseMesh->addChild(normals,true);
			}
			if (materials)
			{
				baseMesh->setMaterialSet(materials);
				baseMesh->showMaterials(true);
				baseMesh->addChild(materials,true);
			}
			if (texCoords)
			{
				if (materials)
				{
					baseMesh->setTexCoordinatesTable(texCoords);
					baseMesh->addChild(texCoords,true);
				}
				else
				{
					ccLog::Warning("[ObjFilter::Load] Texture coordinates were defined but no material could be loaded!");
				}
			}

			//normals: if the obj file doesn't provide any, should we compute them?
			if (!normals)
			{
				if (!materials) //yes if no material is available!
				{
					ccLog::Print("[ObjFilter::Load] Mesh has no normal! We will compute them automatically");
					baseMesh->computeNormals();
					baseMesh->showNormals(true);
				}
				else
				{
					ccLog::Warning("[ObjFilter::Load] Mesh has no normal! CloudCompare can try to compute them (select base entity, then \"Edit > Normals > Compute\")");
				}
			}

			//create sub-meshes if necessary
			ccLog::Print("[ObjFilter::Load] 1 mesh loaded - %i group(s)", groups.size());
			if (groups.size() > 1)
			{
				for (size_t i=0; i<groups.size(); ++i)
				{
					const QString& groupName = groups[i].second;
					unsigned startIndex = groups[i].first;
					unsigned endIndex = (i+1 == groups.size() ? baseMesh->size() : groups[i+1].first);

					if (startIndex == endIndex)
					{
						currentLine = stream.readLine();
						continue;
					}

					ccSubMesh* subTri = new ccSubMesh(baseMesh);
					if (subTri->reserve(endIndex-startIndex))
					{
						subTri->addTriangleIndex(startIndex,endIndex);
						subTri->setName(groupName);
						subTri->showMaterials(baseMesh->materialsShown());
						subTri->showNormals(baseMesh->normalsShown());
						subTri->showTriNorms(baseMesh->triNormsShown());
						//subTri->showColors(baseMesh->colorsShown());
						//subTri->showWired(baseMesh->isShownAsWire());
						baseMesh->addChild(subTri);
					}
					else
					{
						objWarnings[NOT_ENOUGH_MEMORY] = true;
					}
				}
				baseMesh->setVisible(false);
				vertices->setLocked(true);
			}

			baseMesh->addChild(vertices);
			vertices->setEnabled(false);

			container.addChild(baseMesh);
		}

		if (!baseMesh)
		{
			//no (valid) mesh!
			container.addChild(vertices);
		}

		//special case: normals held by cloud!
		if (normals && !normalsPerFacet)
		{
			if (normsRead == pointsRead) //must be 'per-vertex' normals
			{
				vertices->setNormsTable(normals);
				if (baseMesh)
					baseMesh->showNormals(true);
			}
			else
			{
				ccLog::Warning("File contains normals which seem to be neither per-vertex nor per-face!!! We had to ignore them...");
			}
		}
	}

	if (error)
	{
		if (baseMesh)
			delete baseMesh;
		if (vertices)
			delete vertices;
	}

	//release shared structures
	if (normals)
	{
		normals->release();
		normals=0;
	}
	if (texCoords)
	{
		texCoords->release();
		texCoords=0;
	}
	if (materials)
	{
		materials->release();
		materials=0;
	}

	progressDlg.stop();

	//potential warnings
	if (objWarnings[DISCARED_GROUP])
		ccLog::Warning("[ObjFilter::Load] At least one group has been discared while not empty. The file might be malformed, or otherwise it's a bug! You may send us the file to help us correct it...");
	if (objWarnings[EMPTY_GROUP])
		ccLog::Warning("[ObjFilter::Load] At least one group has been ignored because it was empty. It's generally because it is composed of unhandled components (lines, nurbs, etc.)");
	if (objWarnings[INVALID_NORMALS])
		ccLog::Warning("[ObjFilter::Load] Some normals in file were invalid. You should re-compute them (select entity, then \"Edit > Normals > Compute\")");
	if (objWarnings[INVALID_INDEX])
		ccLog::Warning("[ObjFilter::Load] File is malformed! Check indexes...");
	if (objWarnings[NOT_ENOUGH_MEMORY])
		ccLog::Warning("[ObjFilter::Load] Not enough memory!");
	if (objWarnings[INVALID_LINE])
		ccLog::Warning("[ObjFilter::Load] File is malformed! Missing data.");

	return (error ? (objWarnings[NOT_ENOUGH_MEMORY] ? CC_FERR_NOT_ENOUGH_MEMORY : CC_FERR_MALFORMED_FILE) : CC_FERR_NO_ERROR);
}
