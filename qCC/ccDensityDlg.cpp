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

#include "ccDensityDlg.h"

ccDensityDlg::ccDensityDlg(QWidget* parent/*=0*/)
	: QDialog(parent)
	, Ui::DensityDialog()
{
	setupUi(this);
	setWindowFlags(Qt::Tool);

	connect(preciseRadioButton, SIGNAL(toggled(bool)), this, SLOT(onPreciseToggled(bool)));
}

CCLib::GeometricalAnalysisTools::Density ccDensityDlg::getDensityType() const
{
	if (knnRadioButton->isChecked())
		return CCLib::GeometricalAnalysisTools::DENSITY_KNN;
	else if (surfRadioButton->isChecked())
		return CCLib::GeometricalAnalysisTools::DENSITY_2D;
	else /*if (volRadioButton->isChecked())*/
		return CCLib::GeometricalAnalysisTools::DENSITY_3D;
}

bool ccDensityDlg::isPrecise() const
{
	return preciseRadioButton->isChecked();
}

double ccDensityDlg::getRadius() const
{
	return radiusDoubleSpinBox->value();
}

void ccDensityDlg::setRadius(double r)
{
	radiusDoubleSpinBox->setValue(r);
}

void ccDensityDlg::onPreciseToggled(bool state)
{
	knnRadioButton->setEnabled(state);
	if (!state && knnRadioButton->isChecked())
		surfRadioButton->setChecked(true);
}
