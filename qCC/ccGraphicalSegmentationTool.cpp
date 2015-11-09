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

#include "ccGraphicalSegmentationTool.h"

//Local
#include "mainwindow.h"
#include "ccEntityPickerDlg.h"

//CCLib
#include <ManualSegmentationTools.h>
#include <SquareMatrix.h>

//qCC_db
#include <ccLog.h>
#include <ccPolyline.h>
#include <ccGenericPointCloud.h>
#include <ccPointCloud.h>
#include <ccMesh.h>
#include <ccHObjectCaster.h>
#include <cc2DViewportObject.h>

//qCC_gl
#include <ccGLWindow.h>

//Qt
#include <QMenu>
#include <QMessageBox>
#include <QPushButton>

//System
#include <assert.h>

ccGraphicalSegmentationTool::ccGraphicalSegmentationTool(QWidget* parent)
	: ccOverlayDialog(parent)
	, Ui::GraphicalSegmentationDlg()
	, m_somethingHasChanged(false)
	, m_state(0)
	, m_segmentationPoly(0)
	, m_polyVertices(0)
	, m_rectangularSelection(false)
	, m_deleteHiddenParts(false)
{
	// Set QDialog background as transparent (DGM: doesn't work over an OpenGL context)
	//setAttribute(Qt::WA_NoSystemBackground);

	setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);

	connect(inButton,							SIGNAL(clicked()),		this,	SLOT(segmentIn()));
	connect(outButton,							SIGNAL(clicked()),		this,	SLOT(segmentOut()));
	connect(razButton,							SIGNAL(clicked()),		this,	SLOT(reset()));
	connect(validButton,						SIGNAL(clicked()),		this,	SLOT(apply()));
	connect(validAndDeleteButton,				SIGNAL(clicked()),		this,	SLOT(applyAndDelete()));
	connect(cancelButton,						SIGNAL(clicked()),		this,	SLOT(cancel()));
	connect(pauseButton,						SIGNAL(toggled(bool)),	this,	SLOT(pauseSegmentationMode(bool)));

	//selection modes
	connect(actionSetPolylineSelection,			SIGNAL(triggered()),	this,	SLOT(doSetPolylineSelection()));
	connect(actionSetRectangularSelection,		SIGNAL(triggered()),	this,	SLOT(doSetRectangularSelection()));
	//import/export options
	connect(actionUseExistingPolyline,			SIGNAL(triggered()),	this,	SLOT(doActionUseExistingPolyline()));
	connect(actionExportSegmentationPolyline,	SIGNAL(triggered()),	this,	SLOT(doExportSegmentationPolyline()));

	//add shortcuts
	addOverridenShortcut(Qt::Key_Space);  //space bar for the "pause" button
	addOverridenShortcut(Qt::Key_Escape); //escape key for the "cancel" button
	addOverridenShortcut(Qt::Key_Return); //return key for the "apply" button
	addOverridenShortcut(Qt::Key_Delete); //delete key for the "apply and delete" button
	addOverridenShortcut(Qt::Key_Tab);    //tab key to switch between rectangular and polygonal selection modes
	addOverridenShortcut(Qt::Key_I);      //'I' key for the "segment in" button
	addOverridenShortcut(Qt::Key_O);      //'O' key for the "segment out" button
	connect(this, SIGNAL(shortcutTriggered(int)), this, SLOT(onShortcutTriggered(int)));

	QMenu* selectionModeMenu = new QMenu(this);
	selectionModeMenu->addAction(actionSetPolylineSelection);
	selectionModeMenu->addAction(actionSetRectangularSelection);
	selectionModelButton->setDefaultAction(actionSetPolylineSelection);
	selectionModelButton->setMenu(selectionModeMenu);

	QMenu* importExportMenu = new QMenu(this);
	importExportMenu->addAction(actionUseExistingPolyline);
	importExportMenu->addAction(actionExportSegmentationPolyline);
	loadSaveToolButton->setMenu(importExportMenu);

	m_polyVertices = new ccPointCloud("vertices");
	m_segmentationPoly = new ccPolyline(m_polyVertices);
	m_segmentationPoly->setForeground(true);
	m_segmentationPoly->setColor(ccColor::green);
	m_segmentationPoly->showColors(true);
	m_segmentationPoly->set2DMode(true);
	allowPolylineExport(false);
}

void ccGraphicalSegmentationTool::allowPolylineExport(bool state)
{
	if (state)
	{
		actionExportSegmentationPolyline->setEnabled(true);
	}
	else
	{
		loadSaveToolButton->setDefaultAction(actionUseExistingPolyline);
		actionExportSegmentationPolyline->setEnabled(false);
	}
}

ccGraphicalSegmentationTool::~ccGraphicalSegmentationTool()
{
	if (m_segmentationPoly)
		delete m_segmentationPoly;
	m_segmentationPoly = 0;

	if (m_polyVertices)
		delete m_polyVertices;
	m_polyVertices = 0;
}

void ccGraphicalSegmentationTool::onShortcutTriggered(int key)
{
 	switch(key)
	{
	case Qt::Key_Space:
		pauseButton->toggle();
		return;

	case Qt::Key_I:
		inButton->click();
		return;

	case Qt::Key_O:
		outButton->click();
		return;

	case Qt::Key_Return:
		validButton->click();
		return;
	case Qt::Key_Delete:
		validAndDeleteButton->click();
		return;
	case Qt::Key_Escape:
		cancelButton->click();
		return;

	case Qt::Key_Tab:
		if (m_rectangularSelection)
			doSetPolylineSelection();
		else
			doSetRectangularSelection();
		return;

	default:
		//nothing to do
		break;
	}
}

bool ccGraphicalSegmentationTool::linkWith(ccGLWindow* win)
{
	assert(m_segmentationPoly);

	ccGLWindow* oldWin = m_associatedWin;

	if (!ccOverlayDialog::linkWith(win))
		return false;

	if (oldWin)
	{
		disconnect(m_associatedWin, SIGNAL(leftButtonClicked(int,int)), this, SLOT(addPointToPolyline(int,int)));
		disconnect(m_associatedWin, SIGNAL(rightButtonClicked(int,int)), this, SLOT(closePolyLine(int,int)));
		disconnect(m_associatedWin, SIGNAL(mouseMoved(int,int,Qt::MouseButtons)), this, SLOT(updatePolyLine(int,int,Qt::MouseButtons)));
		disconnect(m_associatedWin, SIGNAL(buttonReleased()), this, SLOT(closeRectangle()));

		if (m_segmentationPoly)
			m_segmentationPoly->setDisplay(0);
	}
	
	if (m_associatedWin)
	{
		connect(m_associatedWin, SIGNAL(leftButtonClicked(int,int)), this, SLOT(addPointToPolyline(int,int)));
		connect(m_associatedWin, SIGNAL(rightButtonClicked(int,int)), this, SLOT(closePolyLine(int,int)));
		connect(m_associatedWin, SIGNAL(mouseMoved(int,int,Qt::MouseButtons)), this, SLOT(updatePolyLine(int,int,Qt::MouseButtons)));
		connect(m_associatedWin, SIGNAL(buttonReleased()), this, SLOT(closeRectangle()));

		if (m_segmentationPoly)
			m_segmentationPoly->setDisplay(m_associatedWin);
	}

	return true;
}

bool ccGraphicalSegmentationTool::start()
{
	assert(m_polyVertices && m_segmentationPoly);

	if (!m_associatedWin)
	{
		ccLog::Warning("[Graphical Segmentation Tool] No associated window!");
		return false;
	}

	m_segmentationPoly->clear();
	m_polyVertices->clear();
	allowPolylineExport(false);

	//the user must not close this window!
	m_associatedWin->setUnclosable(true);
	m_associatedWin->addToOwnDB(m_segmentationPoly);
	m_associatedWin->setPickingMode(ccGLWindow::NO_PICKING);
	pauseSegmentationMode(false);

	m_somethingHasChanged = false;

	reset();

	return ccOverlayDialog::start();
}

void ccGraphicalSegmentationTool::removeAllEntities(bool unallocateVisibilityArrays)
{
	if (unallocateVisibilityArrays)
	{
		for (std::set<ccHObject*>::iterator p = m_toSegment.begin(); p != m_toSegment.end(); ++p)
		{
			ccHObjectCaster::ToGenericPointCloud(*p)->unallocateVisibilityArray();
		}
	}

	m_toSegment.clear();
}

void ccGraphicalSegmentationTool::stop(bool accepted)
{
	assert(m_segmentationPoly);

	if (m_associatedWin)
	{
		m_associatedWin->displayNewMessage("Segmentation [OFF]",
											ccGLWindow::UPPER_CENTER_MESSAGE,
											false,
											2,
											ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);

		m_associatedWin->setInteractionMode(ccGLWindow::TRANSFORM_CAMERA);
		m_associatedWin->setPickingMode(ccGLWindow::DEFAULT_PICKING);
		m_associatedWin->setUnclosable(false);
		m_associatedWin->removeFromOwnDB(m_segmentationPoly);
	}

	ccOverlayDialog::stop(accepted);
}

void ccGraphicalSegmentationTool::reset()
{
	if (m_somethingHasChanged)
	{
		for (std::set<ccHObject*>::iterator p = m_toSegment.begin(); p != m_toSegment.end(); ++p)
		{
			ccHObjectCaster::ToGenericPointCloud(*p)->resetVisibilityArray();
		}

		if (m_associatedWin)
			m_associatedWin->redraw(false);
		m_somethingHasChanged = false;
	}

	razButton->setEnabled(false);
	validButton->setEnabled(false);
	validAndDeleteButton->setEnabled(false);
	loadSaveToolButton->setDefaultAction(actionUseExistingPolyline);
}

bool ccGraphicalSegmentationTool::addEntity(ccHObject* entity)
{
	//FIXME
	/*if (entity->isLocked())
		ccLog::Warning(QString("Can't use entity [%1] cause it's locked!").arg(entity->getName()));
	else */
	if (entity->getDisplay() != m_associatedWin)
	{
		ccLog::Warning(QString("[Graphical Segmentation Tool] Can't use entity [%1] cause it's not displayed in the active 3D view!").arg(entity->getName()));
		return false;
	}
	if (!entity->isVisible() || !entity->isBranchEnabled())
	{
		ccLog::Warning(QString("[Graphical Segmentation Tool] Entity [%1] is not visible in the active 3D view!").arg(entity->getName()));
	}

	bool result = false;
	if (entity->isKindOf(CC_TYPES::POINT_CLOUD))
	{
		ccGenericPointCloud* cloud = ccHObjectCaster::ToGenericPointCloud(entity);
		//detect if this cloud is in fact a vertex set for at least one mesh
		{
			//either the cloud is the child of its parent mesh
			if (cloud->getParent() && cloud->getParent()->isKindOf(CC_TYPES::MESH) && ccHObjectCaster::ToGenericMesh(cloud->getParent())->getAssociatedCloud() == cloud)
			{
				ccLog::Warning(QString("[Graphical Segmentation Tool] Can't segment mesh vertices '%1' directly! Select its parent mesh instead!").arg(entity->getName()));
				return false;
			}
			//or the parent of its child mesh!
			ccHObject::Container meshes;
			if (cloud->filterChildren(meshes,false,CC_TYPES::MESH) != 0)
			{
				for (unsigned i=0; i<meshes.size(); ++i)
					if (ccHObjectCaster::ToGenericMesh(meshes[i])->getAssociatedCloud() == cloud)
					{
						ccLog::Warning(QString("[Graphical Segmentation Tool] Can't segment mesh vertices '%1' directly! Select its child mesh instead!").arg(entity->getName()));
						return false;
					}
			}
		}

		cloud->resetVisibilityArray();
		m_toSegment.insert(cloud);

		//automatically add cloud's children
		for (unsigned i=0; i<entity->getChildrenNumber(); ++i)
			result |= addEntity(entity->getChild(i));
	}
	else if (entity->isKindOf(CC_TYPES::MESH))
	{
		if (entity->isKindOf(CC_TYPES::PRIMITIVE))
		{
			ccLog::Warning("[ccGraphicalSegmentationTool] Can't segment primitives yet! Sorry...");
			return false;
		}
		if (entity->isKindOf(CC_TYPES::SUB_MESH))
		{
			ccLog::Warning("[ccGraphicalSegmentationTool] Can't segment sub-meshes! Select the parent mesh...");
			return false;
		}
		else
		{
			ccGenericMesh* mesh = ccHObjectCaster::ToGenericMesh(entity);

			//first, we must check that there's no mesh and at least one of its sub-mesh mixed in the current selection!
			for (std::set<ccHObject*>::iterator p = m_toSegment.begin(); p != m_toSegment.end(); ++p)
			{
				if ((*p)->isKindOf(CC_TYPES::MESH))
				{
					ccGenericMesh* otherMesh = ccHObjectCaster::ToGenericMesh(*p);
					if (otherMesh->getAssociatedCloud() == mesh->getAssociatedCloud())
					{
						if ((otherMesh->isA(CC_TYPES::SUB_MESH) && mesh->isA(CC_TYPES::MESH))
							|| (otherMesh->isA(CC_TYPES::MESH) && mesh->isA(CC_TYPES::SUB_MESH)))
						{
							ccLog::Warning("[Graphical Segmentation Tool] Can't mix sub-meshes with their parent mesh!");
							return false;
						}
					}
				}
			}

			mesh->getAssociatedCloud()->resetVisibilityArray();
			m_toSegment.insert(mesh);
			result = true;
		}
	}
	else if (entity->isA(CC_TYPES::HIERARCHY_OBJECT))
	{
		//automatically add entity's children
		for (unsigned i=0;i<entity->getChildrenNumber();++i)
			result |= addEntity(entity->getChild(i));
	}

	return result;
}

unsigned ccGraphicalSegmentationTool::getNumberOfValidEntities() const
{
	return static_cast<unsigned>(m_toSegment.size());
}

void ccGraphicalSegmentationTool::updatePolyLine(int x, int y, Qt::MouseButtons buttons)
{
	//process not started yet?
	if ((m_state & RUNNING) == 0)
		return;

	assert(m_polyVertices);
	assert(m_segmentationPoly);

	unsigned vertCount = m_polyVertices->size();

	//new point
	CCVector3 P(static_cast<PointCoordinateType>(x),
				static_cast<PointCoordinateType>(y),
				0);

	if (m_state & RECTANGLE)
	{
		//we need 4 points for the rectangle!
		if (vertCount != 4)
			m_polyVertices->resize(4);

		const CCVector3* A = m_polyVertices->getPointPersistentPtr(0);
		CCVector3* B = const_cast<CCVector3*>(m_polyVertices->getPointPersistentPtr(1));
		CCVector3* C = const_cast<CCVector3*>(m_polyVertices->getPointPersistentPtr(2));
		CCVector3* D = const_cast<CCVector3*>(m_polyVertices->getPointPersistentPtr(3));
		*B = CCVector3(A->x,P.y,0);
		*C = P;
		*D = CCVector3(P.x,A->y,0);

		if (vertCount != 4)
		{
			m_segmentationPoly->clear();
			if (!m_segmentationPoly->addPointIndex(0,4))
			{
				ccLog::Error("Out of memory!");
				allowPolylineExport(false);
				return;
			}
			m_segmentationPoly->setClosed(true);
		}
	}
	else if (m_state & POLYLINE)
	{
		if (vertCount < 2)
			return;
		//we replace last point by the current one
		CCVector3* lastP = const_cast<CCVector3*>(m_polyVertices->getPointPersistentPtr(vertCount-1));
		*lastP = P;
	}

	if (m_associatedWin)
		m_associatedWin->redraw(true, false);
}

void ccGraphicalSegmentationTool::addPointToPolyline(int x, int y)
{
	if ((m_state & STARTED) == 0)
		return;

	assert(m_polyVertices);
	assert(m_segmentationPoly);
	unsigned vertCount = m_polyVertices->size();

	//particular case: we close the rectangular selection by a 2nd click
	if (m_rectangularSelection && vertCount == 4 && (m_state & RUNNING))
		return;

	//new point
	CCVector3 P(static_cast<PointCoordinateType>(x),
				static_cast<PointCoordinateType>(y),
				0);

	//CTRL key pressed at the same time?
	bool ctrlKeyPressed = m_rectangularSelection || ((QApplication::keyboardModifiers() & Qt::ControlModifier) == Qt::ControlModifier);

	//start new polyline?
	if (((m_state & RUNNING) == 0) || vertCount == 0 || ctrlKeyPressed)
	{
		//reset state
		m_state = (ctrlKeyPressed ? RECTANGLE : POLYLINE);
		m_state |= (STARTED | RUNNING);
		//reset polyline
		m_polyVertices->clear();
		if (!m_polyVertices->reserve(2))
		{
			ccLog::Error("Out of memory!");
			allowPolylineExport(false);
			return;
		}
		//we add the same point twice (the last point will be used for display only)
		m_polyVertices->addPoint(P);
		m_polyVertices->addPoint(P);
		m_segmentationPoly->clear();
		if (!m_segmentationPoly->addPointIndex(0,2))
		{
			ccLog::Error("Out of memory!");
			allowPolylineExport(false);
			return;
		}
	}
	else //next points in "polyline mode" only
	{
		//we were already in 'polyline' mode?
		if (m_state & POLYLINE)
		{
			if (!m_polyVertices->reserve(vertCount+1))
			{
				ccLog::Error("Out of memory!");
				allowPolylineExport(false);
				return;
			}

			//we replace last point by the current one
			CCVector3* lastP = const_cast<CCVector3*>(m_polyVertices->getPointPersistentPtr(vertCount-1));
			*lastP = P;
			//and add a new (equivalent) one
			m_polyVertices->addPoint(P);
			if (!m_segmentationPoly->addPointIndex(vertCount))
			{
				ccLog::Error("Out of memory!");
				return;
			}
			m_segmentationPoly->setClosed(true);
		}
		else //we must change mode
		{
			assert(false); //we shouldn't fall here?!
			m_state &= (~RUNNING);
			addPointToPolyline(x,y);
			return;
		}
	}

	if (m_associatedWin)
		m_associatedWin->redraw(true, false);
}

void ccGraphicalSegmentationTool::closeRectangle()
{
	//only for rectangle selection in RUNNING mode
	if ((m_state & RECTANGLE) == 0 || (m_state & RUNNING) == 0)
		return;

	assert(m_segmentationPoly);
	unsigned vertCount = m_segmentationPoly->size();
	if (vertCount < 4)
	{
		//first point only? we keep the real time update mechanism
		if (m_rectangularSelection)
			return;
		m_segmentationPoly->clear();
		m_polyVertices->clear();
		allowPolylineExport(false);
	}
	else
	{
		allowPolylineExport(true);
	}

	//stop
	m_state &= (~RUNNING);

	if (m_associatedWin)
		m_associatedWin->redraw(true, false);
}

void ccGraphicalSegmentationTool::closePolyLine(int, int)
{
	//only for polyline in RUNNING mode
	if ((m_state & POLYLINE) == 0 || (m_state & RUNNING) == 0)
		return;

	assert(m_segmentationPoly);
	unsigned vertCount = m_segmentationPoly->size();
	if (vertCount < 4)
	{
		m_segmentationPoly->clear();
		m_polyVertices->clear();
	}
	else
	{
		//remove last point!
		m_segmentationPoly->resize(vertCount-1); //can't fail --> smaller
		m_segmentationPoly->setClosed(true);
	}

	//stop
	m_state &= (~RUNNING);

	//set the default import/export icon to 'export' mode
	loadSaveToolButton->setDefaultAction(actionExportSegmentationPolyline);
	allowPolylineExport(m_segmentationPoly->size() > 1);

	if (m_associatedWin)
		m_associatedWin->redraw(true, false);
}

void ccGraphicalSegmentationTool::segmentIn()
{
	segment(true);
}

void ccGraphicalSegmentationTool::segmentOut()
{
	segment(false);
}

void ccGraphicalSegmentationTool::segment(bool keepPointsInside)
{
	if (!m_associatedWin)
		return;

	if (!m_segmentationPoly)
	{
		ccLog::Error("No polyline defined!");
		return;
	}

	if (!m_segmentationPoly->isClosed())
	{
		ccLog::Error("Define and/or close the segmentation polygon first! (right click to close)");
		return;
	}

	//viewing parameters
	const double* MM = m_associatedWin->getModelViewMatd(); //viewMat
	const double* MP = m_associatedWin->getProjectionMatd(); //projMat
	const GLdouble half_w = static_cast<GLdouble>(m_associatedWin->width())/2;
	const GLdouble half_h = static_cast<GLdouble>(m_associatedWin->height())/2;

	int VP[4];
	m_associatedWin->getViewportArray(VP);

	//for each selected entity
	for (std::set<ccHObject*>::iterator p = m_toSegment.begin(); p != m_toSegment.end(); ++p)
	{
		ccGenericPointCloud* cloud = ccHObjectCaster::ToGenericPointCloud(*p);
		assert(cloud);

		ccGenericPointCloud::VisibilityTableType* visibilityArray = cloud->getTheVisibilityArray();
		assert(visibilityArray);

		unsigned cloudSize = cloud->size();

		//we project each point and we check if it falls inside the segmentation polyline
		for (unsigned i=0; i<cloudSize; ++i)
		{
			if (visibilityArray->getValue(i) == POINT_VISIBLE)
			{
				CCVector3 P;
				cloud->getPoint(i,P);

				GLdouble xp,yp,zp;
				gluProject(P.x,P.y,P.z,MM,MP,VP,&xp,&yp,&zp);

				CCVector2 P2D(	static_cast<PointCoordinateType>(xp-half_w),
								static_cast<PointCoordinateType>(yp-half_h) );
				bool pointInside = CCLib::ManualSegmentationTools::isPointInsidePoly(P2D,m_segmentationPoly);

				visibilityArray->setValue(i, keepPointsInside != pointInside ? POINT_HIDDEN : POINT_VISIBLE );
			}
		}
	}

	m_somethingHasChanged = true;
	validButton->setEnabled(true);
	validAndDeleteButton->setEnabled(true);
	razButton->setEnabled(true);
	pauseSegmentationMode(true);
}

void ccGraphicalSegmentationTool::pauseSegmentationMode(bool state)
{
	assert(m_polyVertices && m_segmentationPoly);

	if (!m_associatedWin)
		return;

	if (state/*=activate pause mode*/)
	{
		m_state = PAUSED;
		if (m_polyVertices->size() != 0)
		{
			m_segmentationPoly->clear();
			m_polyVertices->clear();
			allowPolylineExport(false);
		}
		m_associatedWin->setInteractionMode(ccGLWindow::TRANSFORM_CAMERA);
		m_associatedWin->displayNewMessage("Segmentation [PAUSED]",ccGLWindow::UPPER_CENTER_MESSAGE,false,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
		m_associatedWin->displayNewMessage("Unpause to segment again",ccGLWindow::UPPER_CENTER_MESSAGE,true,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
	}
	else
	{
		m_state = STARTED;
		m_associatedWin->setInteractionMode(ccGLWindow::SEGMENT_ENTITY);
		if (m_rectangularSelection)
		{
			m_associatedWin->displayNewMessage("Segmentation [ON] (rectangular selection)",ccGLWindow::UPPER_CENTER_MESSAGE,false,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
			m_associatedWin->displayNewMessage("Left click: set opposite corners",ccGLWindow::UPPER_CENTER_MESSAGE,true,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
		}
		else
		{
			m_associatedWin->displayNewMessage("Segmentation [ON] (polygonal selection)",ccGLWindow::UPPER_CENTER_MESSAGE,false,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
			m_associatedWin->displayNewMessage("Left click: add contour points / Right click: close",ccGLWindow::UPPER_CENTER_MESSAGE,true,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
		}
	}

	//update mini-GUI
	pauseButton->blockSignals(true);
	pauseButton->setChecked(state);
	pauseButton->blockSignals(false);

	m_associatedWin->redraw(!state);
}

void ccGraphicalSegmentationTool::doSetPolylineSelection()
{
	if (!m_rectangularSelection)
		return;

	selectionModelButton->setDefaultAction(actionSetPolylineSelection);

	m_rectangularSelection=false;
	if (m_state != PAUSED)
	{
		pauseSegmentationMode(true);
		pauseSegmentationMode(false);
	}

	m_associatedWin->displayNewMessage(QString(),ccGLWindow::UPPER_CENTER_MESSAGE); //clear the area
	m_associatedWin->displayNewMessage("Segmentation [ON] (rectangular selection)",ccGLWindow::UPPER_CENTER_MESSAGE,false,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
	m_associatedWin->displayNewMessage("Right click: set opposite corners",ccGLWindow::UPPER_CENTER_MESSAGE,true,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
}

void ccGraphicalSegmentationTool::doSetRectangularSelection()
{
	if (m_rectangularSelection)
		return;

	selectionModelButton->setDefaultAction(actionSetRectangularSelection);

	m_rectangularSelection=true;
	if (m_state != PAUSED)
	{
		pauseSegmentationMode(true);
		pauseSegmentationMode(false);
	}

	m_associatedWin->displayNewMessage(QString(),ccGLWindow::UPPER_CENTER_MESSAGE); //clear the area
	m_associatedWin->displayNewMessage("Segmentation [ON] (rectangular selection)",ccGLWindow::UPPER_CENTER_MESSAGE,false,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
	m_associatedWin->displayNewMessage("Right click: set opposite corners",ccGLWindow::UPPER_CENTER_MESSAGE,true,3600,ccGLWindow::MANUAL_SEGMENTATION_MESSAGE);
}

void ccGraphicalSegmentationTool::doActionUseExistingPolyline()
{
	MainWindow* mainWindow = MainWindow::TheInstance();
	if (mainWindow)
	{
		ccHObject* root = mainWindow->dbRootObject();
		ccHObject::Container polylines;
		if (root)
		{
			root->filterChildren(polylines,true,CC_TYPES::POLY_LINE);
		}

		if (!polylines.empty())
		{
			ccEntityPickerDlg epDlg(polylines,false,0,this);
			if (!epDlg.exec())
				return;

			int index = epDlg.getSelectedIndex();
			assert(index >= 0 && index < static_cast<int>(polylines.size()));
			assert(polylines[index]->isA(CC_TYPES::POLY_LINE));
			ccPolyline* poly = static_cast<ccPolyline*>(polylines[index]);

			//look for an asociated viewport
			ccHObject::Container viewports;
			if (poly->filterChildren(viewports,false,CC_TYPES::VIEWPORT_2D_OBJECT,true) == 1)
			{
				//shall we apply this viewport?
				if (QMessageBox::question(m_associatedWin,"Associated viewport","The selected polyline has an associated viewport: do you want to apply it?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
				{
					m_associatedWin->setViewportParameters(static_cast<cc2DViewportObject*>(viewports.front())->getParameters());
					m_associatedWin->redraw(false);
				}
			}

			CCLib::GenericIndexedCloudPersist* vertices = poly->getAssociatedCloud();
			bool mode3D = !poly->is2DMode();

			//viewing parameters (for conversion from 3D to 2D)
			const double* MM = m_associatedWin->getModelViewMatd(); //viewMat
			const double* MP = m_associatedWin->getProjectionMatd(); //projMat
			const GLdouble half_w = static_cast<GLdouble>(m_associatedWin->width())/2;
			const GLdouble half_h = static_cast<GLdouble>(m_associatedWin->height())/2;
			int VP[4];
			m_associatedWin->getViewportArray(VP);

			//force polygonal selection mode
			doSetPolylineSelection();
			m_segmentationPoly->clear();
			m_polyVertices->clear();
			allowPolylineExport(false);

			//duplicate polyline 'a minima' (only points and indexes + closed state)
			if (	m_polyVertices->reserve(vertices->size())
				&&	m_segmentationPoly->reserve(poly->size()))
			{
				for (unsigned i=0; i<vertices->size(); ++i)
				{
					CCVector3 P = *vertices->getPoint(i);
					if (mode3D)
					{
						GLdouble xp,yp,zp;
						gluProject(P.x,P.y,P.z,MM,MP,VP,&xp,&yp,&zp);

						P.x = static_cast<PointCoordinateType>(xp-half_w);
						P.y = static_cast<PointCoordinateType>(yp-half_h);
						P.z = 0;
					}
					m_polyVertices->addPoint(P);
				}
				for (unsigned j=0; j<poly->size(); ++j)
					m_segmentationPoly->addPointIndex(poly->getPointGlobalIndex(j));
				
				m_segmentationPoly->setClosed(poly->isClosed());
				if (m_segmentationPoly->isClosed())
				{
					//stop
					m_state &= (~RUNNING);
					allowPolylineExport(m_segmentationPoly->size() > 1);
				}

				if (m_associatedWin)
					m_associatedWin->redraw(true, false);
			}
			else
			{
				ccLog::Error("Not enough memory!");
			}
		}
		else
		{
			ccLog::Error("No polyline in DB!");
		}
	}
}

static unsigned s_polylineExportCount = 0;
void ccGraphicalSegmentationTool::doExportSegmentationPolyline()
{
	MainWindow* mainWindow = MainWindow::TheInstance();
	if (mainWindow && m_segmentationPoly)
	{
		bool mode2D = false;
#ifdef ALLOW_2D_OR_3D_EXPORT
		QMessageBox messageBox(0);
		messageBox.setWindowTitle("Choose export type");
		messageBox.setText("Export polyline in:\n - 2D (with coordinates relative to the screen)\n - 3D (with coordinates relative to the segmented entities)");
		QPushButton* button2D = new QPushButton("2D");
		QPushButton* button3D = new QPushButton("3D");
		messageBox.addButton(button2D,QMessageBox::AcceptRole);
		messageBox.addButton(button3D,QMessageBox::AcceptRole);
		messageBox.addButton(QMessageBox::Cancel);
		messageBox.setDefaultButton(button3D);
		messageBox.exec();
		if (messageBox.clickedButton() == messageBox.button(QMessageBox::Cancel))
		{
			//process cancelled by user
			return;
		}
		mode2D = (messageBox.clickedButton() == button2D);
#endif

		ccPolyline* poly = new ccPolyline(*m_segmentationPoly);

		//if the polyline is 2D and we export the polyline in 3D, we must project its vertices
		if (!mode2D)
		{
			//get current display parameters
			const double* MM = m_associatedWin->getModelViewMatd(); //viewMat
			const double* MP = m_associatedWin->getProjectionMatd(); //projMat
			const GLdouble half_w = static_cast<GLdouble>(m_associatedWin->width())/2;
			const GLdouble half_h = static_cast<GLdouble>(m_associatedWin->height())/2;
			int VP[4];
			m_associatedWin->getViewportArray(VP);

			//project the 2D polyline in 3D
			CCLib::GenericIndexedCloudPersist* vertices = poly->getAssociatedCloud();
			ccPointCloud* verticesPC = dynamic_cast<ccPointCloud*>(vertices);
			if (verticesPC)
			{
				for (unsigned i=0; i<vertices->size(); ++i)
				{
					CCVector3* Pscreen = const_cast<CCVector3*>(verticesPC->getPoint(i));
					GLdouble xp,yp,zp;
					gluUnProject(half_w+Pscreen->x,half_h+Pscreen->y,0/*Pscreen->z*/,MM,MP,VP,&xp,&yp,&zp);
					Pscreen->x = static_cast<PointCoordinateType>(xp);
					Pscreen->y = static_cast<PointCoordinateType>(yp);
					Pscreen->z = static_cast<PointCoordinateType>(zp);
				}
				verticesPC->invalidateBoundingBox();
			}
			else
			{
				assert(false);
				ccLog::Warning("[Segmentation] Failed to convert 2D polyline to 3D! (internal inconsistency)");
				mode2D = false;
			}
		}
		
		QString polyName = QString("Segmentation polyline #%1").arg(++s_polylineExportCount);
		poly->setName(polyName);
		poly->setEnabled(false); //we don't want it to appear while the segmentation mode is enabled! (anyway it's 2D only...)
		poly->set2DMode(mode2D);
		poly->setColor(ccColor::yellow); //we use a different color so as to differentiate them from the active polyline!

		//save associated viewport
		cc2DViewportObject* viewportObject = new cc2DViewportObject(polyName + QString(" viewport"));
		viewportObject->setParameters(m_associatedWin->getViewportParameters());
		viewportObject->setDisplay(m_associatedWin);
		poly->addChild(viewportObject);

		mainWindow->addToDB(poly,false,false,false);
		ccLog::Print(QString("[Segmentation] Polyline exported (%1 vertices)").arg(poly->size()));
	}
}

void ccGraphicalSegmentationTool::apply()
{
	m_deleteHiddenParts = false;
	stop(true);
}

void ccGraphicalSegmentationTool::applyAndDelete()
{
	m_deleteHiddenParts = true;
	stop(true);
}

void ccGraphicalSegmentationTool::cancel()
{
	reset();
	m_deleteHiddenParts = false;
	stop(false);
}
