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

#ifndef CC_SPHERE_PRIMITIVE_HEADER
#define CC_SPHERE_PRIMITIVE_HEADER

//Local
#include "qCC_db.h"
#include "ccGenericPrimitive.h"

//CCLib
#include <CCGeom.h>

//! Sphere (primitive)
/** 3D sphere primitive
**/
class QCC_DB_LIB_API ccSphere : public ccGenericPrimitive
{
public:

	//! Default constructor
	/** \param radius sphere radius
		\param transMat optional 3D transformation (can be set afterwards with ccDrawableObject::setGLTransformation)
		\param name name
		\param precision drawing precision (angular step = 360/precision)
	**/
	ccSphere(	PointCoordinateType radius,
				const ccGLMatrix* transMat = 0,
				QString name = QString("Sphere"),
				unsigned precision = 24);

	//! Simplified constructor
	/** For ccHObject factory only!
	**/
	ccSphere(QString name = QString("Sphere"));

	//! Returns class ID
	virtual CC_CLASS_ENUM getClassID() const { return CC_TYPES::SPHERE; }

	//inherited from ccGenericPrimitive
	virtual QString getTypeName() const { return "Sphere"; }
	virtual bool hasDrawingPrecision() const { return true; }
	virtual ccGenericPrimitive* clone() const;

	//! Returns radius
	inline PointCoordinateType getRadius() const { return m_radius; }
	//! Sets radius
	/** \warning changes primitive content (calls ccGenericPrimitive::updateRepresentation)
	**/
	void setRadius(PointCoordinateType radius);

protected:

	//inherited from ccGenericPrimitive
	virtual bool toFile_MeOnly(QFile& out) const;
	virtual bool fromFile_MeOnly(QFile& in, short dataVersion, int flags);
	virtual bool buildUp();

	//inherited from ccHObject
	virtual void drawNameIn3D(CC_DRAW_CONTEXT& context);

	//! Radius
	PointCoordinateType m_radius;
};

#endif //CC_SPHERE_PRIMITIVE_HEADER
