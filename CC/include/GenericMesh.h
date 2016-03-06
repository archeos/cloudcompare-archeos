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

#ifndef GENERIC_MESH_HEADER
#define GENERIC_MESH_HEADER

//Local
#include "CCCoreLib.h"
#include "GenericTriangle.h"

namespace CCLib
{

//! A generic mesh interface for data communication between library and client applications
class CC_CORE_LIB_API GenericMesh
{
public:

	//! Default destructor
	virtual ~GenericMesh() {}

	//! Generic function to apply to a triangle (used by foreach)
	typedef void genericTriangleAction(GenericTriangle&);

	//! Returns the number of triangles
	/**	Virtual method to request the mesh size
		\return the mesh size
	**/
	virtual unsigned size() const = 0;

	//! Fast iteration mechanism
	/**	Virtual method to apply a function to the whole mesh
		\param action function to apply (see GenericMesh::genericTriangleAction)
	**/
	virtual void forEach(genericTriangleAction& action) = 0;

	//! Returns the mesh bounding-box
	/**	Virtual method to request the mesh bounding-box limits. It is equivalent to
		the bounding-box of the cloud composed of the mesh vertexes.
		\param bbMin lower bounding-box limits (Xmin,Ymin,Zmin)
		\param bbMax higher bounding-box limits (Xmax,Ymax,Zmax)
	**/
	virtual void getBoundingBox(CCVector3& bbMin, CCVector3& bbMax) = 0;

	//! Places the mesh iterator at the begining
	/**	Virtual method to handle the mesh global iterator
	**/
	virtual void placeIteratorAtBegining() = 0;

	//! Returns the next triangle (relatively to the global iterator position)
	/**	Virtual method to handle the mesh global iterator.
		Global iterator position should be increased each time
		this method is called. The returned object can be temporary.
		\return a triangle
	**/
	virtual GenericTriangle* _getNextTriangle() = 0; //temporary

};

}

#endif //GENERIC_MESH_HEADER
