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

#ifndef CC_REGISTRATION_TOOLS_HEADER
#define CC_REGISTRATION_TOOLS_HEADER

//CCLib
#include <RegistrationTools.h>

//qCC_db
#include <ccGLMatrix.h>

class QWidget;
class QStringList;
class ccHObject;

//! Registration tools wrapper
class ccRegistrationTools
{

public:

	//! Applies ICP registration on two entities
	/** \warning Automatically samples points on meshes if necessary (see code for magic numbers ;)
	**/
	static bool ICP(ccHObject* data,
					ccHObject* model,
					ccGLMatrix& transMat,
					double& finalScale,
					double& finalError,
					double minErrorDecrease,
					unsigned maxIterationCount,
					unsigned randomSamplingLimit,
					bool removeFarthestPoints,
					CCLib::ICPRegistrationTools::CONVERGENCE_TYPE method,
					bool adjustScale,
					bool useDataSFAsWeights = false,
					bool useModelSFAsWeights = false,
					int transformationFilters = CCLib::ICPRegistrationTools::SKIP_NONE,
					QWidget* parent = 0);

};

#endif //CC_REGISTRATION_TOOLS_HEADER
