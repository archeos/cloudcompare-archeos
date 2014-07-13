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

#ifndef CC_HIERARCHY_OBJECT_CASTER_HEADER
#define CC_HIERARCHY_OBJECT_CASTER_HEADER

//Local
#include "qCC_db.h"

class ccHObject;
class ccGenericPointCloud;
class ccPointCloud;
class ccGenericMesh;
class ccMesh;
class ccSubMesh;
class ccGenericPrimitive;
class ccOctree;
class ccKdTree;
class ccSensor;
class ccGBLSensor;
class ccCameraSensor;
class ccImage;
class ccCalibratedImage;
class cc2DLabel;
class cc2DViewportObject;
class cc2DViewportLabel;
class ccFacet;
class ccPolyline;
class ccIndexedTransformationBuffer;

//! Useful class to (try to) statically cast a basic ccHObject to a given type
class QCC_DB_LIB_API ccHObjectCaster
{
public:

	//! converts current object to 'equivalent' ccPointCloud
	/** Waring: if a mesh is passed, this method returns its vertices.
		\param obj ccHObject to dynamically cast to a ccPointCloud object
		\param isLockedVertices the caller can be warned if the returned cloud corresponds to locked vertices
	**/
	static ccPointCloud* ToPointCloud(ccHObject* obj, bool* isLockedVertices = 0);

	//! converts current object to 'equivalent' ccGenericPointCloud
	/** Waring: if a mesh is passed, this method returns its vertices.
	**/
	static ccGenericPointCloud* ToGenericPointCloud(ccHObject* obj, bool* isLockedVertices = 0);

	//! converts current object to ccGenericMesh (if possible)
	static ccGenericMesh* ToGenericMesh(ccHObject* obj);

	//! converts current object to ccMesh (if possible)
	static ccMesh* ToMesh(ccHObject* obj);

	//! converts current object to ccSubMesh (if possible)
	static ccSubMesh* ToSubMesh(ccHObject* obj);

	//! converts current object to ccPolyline (if possible)
	static ccPolyline* ToPolyline(ccHObject* obj);

	//! converts current object to ccFacet (if possible)
	static ccFacet* ToFacet(ccHObject* obj);

	//! converts current object to ccGenericPrimitive (if possible)
	static ccGenericPrimitive* ToPrimitive(ccHObject* obj);

	//! converts current object to ccOctree (if possible)
	static ccOctree* ToOctree(ccHObject* obj);

	//! converts current object to ccKdTree (if possible)
	static ccKdTree* ToKdTree(ccHObject* obj);

	//! converts current object to ccSensor (if possible)
	static ccSensor* ToSensor(ccHObject* obj);

	//! converts current object to ccGBLSensor (if possible)
	static ccGBLSensor* ToGBLSensor(ccHObject* obj);

	//! converts current object to ccCameraSensor (if possible)
	static ccCameraSensor* ToCameraSensor(ccHObject* obj);

	//! converts current object to ccImage (if possible)
	static ccImage* ToImage(ccHObject* obj);

	//! converts current object to ccCalibratedImage (if possible)
	static ccCalibratedImage* ToCalibratedImage(ccHObject* obj);

	//! converts current object to cc2DLabel (if possible)
	static cc2DLabel* To2DLabel(ccHObject* obj);

	//! converts current object to cc2DViewportLabel (if possible)
	static cc2DViewportLabel* To2DViewportLabel(ccHObject* obj);

	//! converts current object to cc2DViewportObject (if possible)
	static cc2DViewportObject* To2DViewportObject(ccHObject* obj);

	//! converts current object to ccIndexedTransformationBuffer (if possible)
	static ccIndexedTransformationBuffer* ToTransBuffer(ccHObject* obj);

};

#endif //CC_HIERARCHY_OBJECT_CASTER_HEADER
