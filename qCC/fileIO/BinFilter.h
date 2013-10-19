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

#ifndef CC_BIN_FILTER_HEADER
#define CC_BIN_FILTER_HEADER

#include "FileIOFilter.h"

//Qt
#include <QFile>

//! CloudCompare dedicated binary point cloud I/O filter
class BinFilter : public FileIOFilter
{
public:

    //inherited from FileIOFilter
    virtual CC_FILE_ERROR loadFile(const char* filename, ccHObject& container, bool alwaysDisplayLoadDialog = true, bool* coordinatesShiftEnabled = 0, double* coordinatesShift = 0);
	virtual CC_FILE_ERROR saveToFile(ccHObject* entity, const char* filename);

protected:

	//! old style BIN loading
    virtual CC_FILE_ERROR loadFileV1(QFile& in, ccHObject& container, unsigned nbScansTotal);

	//! new style BIN loading
    virtual CC_FILE_ERROR loadFileV2(QFile& in, ccHObject& container);
	//virtual CC_FILE_ERROR saveToFileV2(ccHObject* entity, const char* filename);
};

#endif //CC_BIN_FILTER_HEADER
