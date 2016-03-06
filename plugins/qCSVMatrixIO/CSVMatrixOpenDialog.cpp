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

#include "CSVMatrixOpenDialog.h"

//Qt
#include <QFileDialog>
#include <QFileInfo>
#include <QSettings>

CSVMatrixOpenDialog::CSVMatrixOpenDialog(QWidget* parent/*=0*/)
	: QDialog(parent)
	, Ui::CSVMatrixOpenDlg()
{
	setupUi(this);

	connect(browseToolButton, SIGNAL(clicked()), this, SLOT(browseTextureFile()));

	//persistent settings
	QSettings settings;
	settings.beginGroup("LoadFile");
	QString currentPath = settings.value("currentPath",QApplication::applicationDirPath()).toString();

	textureFilenameLineEdit->setText(currentPath);
}

void CSVMatrixOpenDialog::browseTextureFile()
{
	QString inputFilename = QFileDialog::getOpenFileName(this, "Texture file", textureFilenameLineEdit->text(), "*.*");
	if (inputFilename.isEmpty())
		return;

	textureFilenameLineEdit->setText(inputFilename);

	//save last loading location
	QSettings settings;
	settings.beginGroup("LoadFile");
	settings.setValue("currentPath",QFileInfo(inputFilename).absolutePath());
	settings.endGroup();
}
