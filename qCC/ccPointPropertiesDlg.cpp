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

#include "ccPointPropertiesDlg.h"

//Local
#include "ccCommon.h"
#include "ccGLWindow.h"
#include "ccGuiParameters.h"

//qCC_db
#include <ccLog.h>
#include <ccPointCloud.h>
#include <cc2DViewportLabel.h>
#include <cc2DLabel.h>

//CCLib
#include <ScalarField.h>

//Qt
#include <QInputDialog>

//System
#include <assert.h>

ccPointPropertiesDlg::ccPointPropertiesDlg(QWidget* parent)
	: ccPointPickingGenericInterface(parent)
	, Ui::PointPropertiesDlg()
	, m_pickingMode(POINT_INFO)
{
	setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint |Qt::Tool);

	connect(closeButton,				SIGNAL(clicked()), this, SLOT(onClose()));
	connect(pointPropertiesButton,		SIGNAL(clicked()), this, SLOT(activatePointPropertiesDisplay()));
	connect(pointPointDistanceButton,	SIGNAL(clicked()), this, SLOT(activateDistanceDisplay()));
	connect(pointsAngleButton,			SIGNAL(clicked()), this, SLOT(activateAngleDisplay()));
	connect(rectZoneToolButton,			SIGNAL(clicked()), this, SLOT(activate2DZonePicking()));
	connect(saveLabelButton,			SIGNAL(clicked()), this, SLOT(exportCurrentLabel()));
	connect(razButton,					SIGNAL(clicked()), this, SLOT(initializeState()));

	//for points picking
	m_label = new cc2DLabel();
	m_label->setSelected(true);

	//for 2D zone picking
	m_rect2DLabel = new cc2DViewportLabel();
	m_rect2DLabel->setVisible(false);	//=invalid
	m_rect2DLabel->setSelected(true);	//=closed
}

ccPointPropertiesDlg::~ccPointPropertiesDlg()
{
	if (m_label)
		delete m_label;
	m_label = 0;

	if (m_rect2DLabel)
		delete m_rect2DLabel;
	m_rect2DLabel = 0;
}

bool ccPointPropertiesDlg::linkWith(ccGLWindow* win)
{
	assert(m_label && m_rect2DLabel);

	ccGLWindow* oldWin = m_associatedWin;

	if (!ccPointPickingGenericInterface::linkWith(win))
		return false;

	//old window?
	if (oldWin)
	{
		oldWin->removeFromOwnDB(m_label);
		oldWin->removeFromOwnDB(m_rect2DLabel);
		oldWin->setInteractionMode(ccGLWindow::TRANSFORM_CAMERA);
		disconnect(oldWin, SIGNAL(mouseMoved(int,int,Qt::MouseButtons)), this, SLOT(update2DZone(int,int,Qt::MouseButtons)));
		disconnect(oldWin, SIGNAL(leftButtonClicked(int,int)), this, SLOT(processClickedPoint(int,int)));
		disconnect(oldWin, SIGNAL(buttonReleased()), this, SLOT(close2DZone()));
	}

	m_rect2DLabel->setVisible(false);	//=invalid
	m_rect2DLabel->setSelected(true);	//=closed
	m_label->clear();

	//new window?
	if (m_associatedWin)
	{
		m_associatedWin->addToOwnDB(m_label);
		m_associatedWin->addToOwnDB(m_rect2DLabel);
		connect(m_associatedWin, SIGNAL(mouseMoved(int,int,Qt::MouseButtons)), this, SLOT(update2DZone(int,int,Qt::MouseButtons)));
		connect(m_associatedWin, SIGNAL(leftButtonClicked(int,int)), this, SLOT(processClickedPoint(int,int)));
		connect(m_associatedWin, SIGNAL(buttonReleased()), this, SLOT(close2DZone()));
	}

	return true;
}

bool ccPointPropertiesDlg::start()
{
	activatePointPropertiesDisplay();

	return ccPointPickingGenericInterface::start();
}

void ccPointPropertiesDlg::stop(bool state)
{
	assert(m_label && m_rect2DLabel);

	m_label->clear();
	m_rect2DLabel->setVisible(false);	//=invalid
	m_rect2DLabel->setSelected(true);	//=closed

	if (m_associatedWin)
		m_associatedWin->setInteractionMode(ccGLWindow::TRANSFORM_CAMERA);

	ccPointPickingGenericInterface::stop(state);
}

void ccPointPropertiesDlg::onClose()
{
	stop(false);
}

void ccPointPropertiesDlg::activatePointPropertiesDisplay()
{
	if (m_associatedWin)
		m_associatedWin->setInteractionMode(ccGLWindow::TRANSFORM_CAMERA);

	m_pickingMode = POINT_INFO;
	pointPropertiesButton->setDown(true);
	pointPointDistanceButton->setDown(false);
	pointsAngleButton->setDown(false);
	rectZoneToolButton->setDown(false);
	m_label->setVisible(true);
	m_rect2DLabel->setVisible(false);
}

void ccPointPropertiesDlg::activateDistanceDisplay()
{
	m_pickingMode = POINT_POINT_DISTANCE;
	pointPropertiesButton->setDown(false);
	pointPointDistanceButton->setDown(true);
	pointsAngleButton->setDown(false);
	rectZoneToolButton->setDown(false);
	m_label->setVisible(true);
	m_rect2DLabel->setVisible(false);

	if (m_associatedWin)
	{
		m_associatedWin->setInteractionMode(ccGLWindow::TRANSFORM_CAMERA);
		m_associatedWin->redraw(false);
	}
}

void ccPointPropertiesDlg::activateAngleDisplay()
{
	m_pickingMode = POINTS_ANGLE;
	pointPropertiesButton->setDown(false);
	pointPointDistanceButton->setDown(false);
	pointsAngleButton->setDown(true);
	rectZoneToolButton->setDown(false);
	m_label->setVisible(true);
	m_rect2DLabel->setVisible(false);

	if (m_associatedWin)
	{
		m_associatedWin->setInteractionMode(ccGLWindow::TRANSFORM_CAMERA);
		m_associatedWin->redraw(false);
	}
}

void ccPointPropertiesDlg::activate2DZonePicking()
{
	m_pickingMode = RECT_ZONE;
	pointPropertiesButton->setDown(false);
	pointPointDistanceButton->setDown(false);
	pointsAngleButton->setDown(false);
	rectZoneToolButton->setDown(true);
	m_label->setVisible(false);
	//m_rect2DLabel->setVisible(false);

	if (m_associatedWin)
	{
		m_associatedWin->setInteractionMode(ccGLWindow::SEGMENT_ENTITY);
		m_associatedWin->redraw(false);
	}
}

void ccPointPropertiesDlg::initializeState()
{
	assert(m_label && m_rect2DLabel);
	m_label->clear();
	m_rect2DLabel->setVisible(false);	//=invalid
	m_rect2DLabel->setSelected(true);	//=closed

	if (m_associatedWin)
		m_associatedWin->redraw(false);
}

void ccPointPropertiesDlg::exportCurrentLabel()
{
	ccHObject* labelObject = 0;
	if (m_pickingMode == RECT_ZONE)
		labelObject = (m_rect2DLabel->isSelected() && m_rect2DLabel->isVisible() ? m_rect2DLabel : 0);
	else
		labelObject = (m_label && m_label->size()>0 ? m_label : 0);
	if (!labelObject)
		return;

	//detach current label from window
	if (m_associatedWin)
		m_associatedWin->removeFromOwnDB(labelObject);
	labelObject->setSelected(false);

	ccHObject* newLabelObject = 0;
	if (m_pickingMode == RECT_ZONE)
	{
		//if (m_associatedWin)
		//	m_rect2DLabel->setParameters(m_associatedWin->getViewportParameters());
		newLabelObject = m_rect2DLabel = new cc2DViewportLabel();
		m_rect2DLabel->setVisible(false);	//=invalid
		m_rect2DLabel->setSelected(true);	//=closed
	}
	else
	{
		//attach old label to first point cloud by default
		m_label->getPoint(0).cloud->addChild(labelObject);
		newLabelObject = m_label = new cc2DLabel();
		m_label->setSelected(true);
	}

	emit newLabel(labelObject);

	if (m_associatedWin)
	{
		m_associatedWin->addToOwnDB(newLabelObject);
		m_associatedWin->redraw(true, false);
	}	
}

void ccPointPropertiesDlg::processPickedPoint(ccPointCloud* cloud, unsigned pointIndex, int x, int y)
{
	assert(cloud);
	assert(m_label);
	assert(m_associatedWin);

	switch(m_pickingMode)
	{
	case POINT_INFO:
		m_label->clear();
		break;
	case POINT_POINT_DISTANCE:
		if (m_label->size() >= 2)
			m_label->clear();
		break;
	case POINTS_ANGLE:
		if (m_label->size() >= 3)
			m_label->clear();
		break;
	case RECT_ZONE:
		return; //we don't use this slot for 2D mode
	}

	m_label->addPoint(cloud,pointIndex);
	m_label->setVisible(true);
	if (m_label->size() == 1 && m_associatedWin)
		m_label->setPosition(static_cast<float>(x+20)/m_associatedWin->width(),static_cast<float>(y+20)/m_associatedWin->height());

	//output info to Console
	QStringList body = m_label->getLabelContent(ccGui::Parameters().displayedNumPrecision);
	ccLog::Print(QString("[Picked] ")+m_label->getName());
	for (int i=0; i<body.size(); ++i)
		ccLog::Print(QString("[Picked]\t- ")+body[i]);

	if (m_associatedWin)
		m_associatedWin->redraw();
}

void ccPointPropertiesDlg::processClickedPoint(int x, int y)
{
	if (m_pickingMode != RECT_ZONE)
		return;

	assert(m_rect2DLabel);
	assert(m_associatedWin);

	if (m_rect2DLabel->isSelected()) //already closed? we start a new label
	{
		float roi[4] = {static_cast<float>(x),
						static_cast<float>(y),
						0,0};

		if (m_associatedWin)
			m_rect2DLabel->setParameters(m_associatedWin->getViewportParameters());
		m_rect2DLabel->setVisible(false);	//=invalid
		m_rect2DLabel->setSelected(false);	//=not closed
		m_rect2DLabel->setRoi(roi);
		m_rect2DLabel->setName(""); //reset name before display!
	}
	else //we close the existing one
	{
		float roi[4] = {m_rect2DLabel->roi()[0],
						m_rect2DLabel->roi()[1],
						static_cast<float>(x),
						static_cast<float>(y) };
		m_rect2DLabel->setRoi(roi);
		m_rect2DLabel->setVisible(true);	//=valid
		m_rect2DLabel->setSelected(true);	//=closed
	}

	if (m_associatedWin)
		m_associatedWin->redraw(true, false);
}

void ccPointPropertiesDlg::update2DZone(int x, int y, Qt::MouseButtons buttons)
{
	if (m_pickingMode != RECT_ZONE)
		return;

	if (m_rect2DLabel->isSelected())
		return;

	float roi[4] = {m_rect2DLabel->roi()[0],
					m_rect2DLabel->roi()[1],
					static_cast<float>(x),
					static_cast<float>(y) };
	m_rect2DLabel->setRoi(roi);
	m_rect2DLabel->setVisible(true);

	if (m_associatedWin)
		m_associatedWin->redraw(true, false);
}

static QString s_last2DLabelComment("");
void ccPointPropertiesDlg::close2DZone()
{
	if (m_pickingMode != RECT_ZONE)
		return;

	if (m_rect2DLabel->isSelected() || !m_rect2DLabel->isVisible())
		return;

	m_rect2DLabel->setSelected(true);

	bool ok;
	QString title = QInputDialog::getText(this, "Set area label title", "Title:", QLineEdit::Normal, s_last2DLabelComment, &ok);
	if (!ok)
	{
		m_rect2DLabel->setVisible(false);
	}
	else
	{
		m_rect2DLabel->setName(title);
		s_last2DLabelComment = title;
	}

	if (m_associatedWin)
		m_associatedWin->redraw(true, false);
}
