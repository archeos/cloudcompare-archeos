//##########################################################################
//#                                                                        #
//#                       CLOUDCOMPARE PLUGIN: qEDL                        #
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

#include <QtGui>

#include "qSSAO.h"
#include "ccSSAOFilter.h"

QIcon qSSAO::getIcon() const
{
    return QIcon(QString::fromUtf8(":/CC/plugin/qSSAO/cc_ssao.png"));
}

ccGlFilter* qSSAO::getFilter()
{
    return new ccSSAOFilter();
}

Q_EXPORT_PLUGIN2(qSSAO,qSSAO);
