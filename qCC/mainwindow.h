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

#ifndef CC_MAIN_WINDOW_HEADER
#define CC_MAIN_WINDOW_HEADER

//qCC_plugins
#include <ccMainAppInterface.h>

//Qt
#include <QMainWindow>
#include <QString>
#include <QDialog>
#include <QDir>
#include <QActionGroup>

//CCLib
#include <PointProjectionTools.h>
#include <AutoSegmentationTools.h>

//GUI (generated with Qt Designer)
#include <ui_mainWindow.h>

//qCC_db
#include <ccMesh.h>
#include <ccGLMatrix.h>

//qCC_io
#include <FileIOFilter.h>

//internal db
#include "db_tree/ccDBRoot.h"

class QMdiArea;
class QSignalMapper;
class QToolButton;
class QAction;
class QToolBar;
class ccGLWindow;
class ccHObject;
class ccComparisonDlg;
class ccGraphicalSegmentationTool;
class ccSectionExtractionTool;
class ccGraphicalTransformationTool;
class ccClippingBoxTool;
class ccPluginInterface;
class ccStdPluginInterface;
class ccPointPropertiesDlg;
class ccCameraParamEditDlg;
class ccPointListPickingDlg;
class ccPointPairRegistrationDlg;
class ccPrimitiveFactoryDlg;
class ccDrawableObject;
class ccOverlayDialog;
class QMdiSubWindow;
class Mouse3DInput;

//! Main window
class MainWindow : public QMainWindow, public ccMainAppInterface, public Ui::MainWindow
{
	Q_OBJECT

protected:

	//! Default constructor
	MainWindow();

	//! Default desctructor
	virtual ~MainWindow();

public:

	//! Returns the unique instance of this object
	static MainWindow* TheInstance();

	//! Static shortcut to MainWindow::getActiveGLWindow
	static ccGLWindow* GetActiveGLWindow();

	//! Returns a given GL sub-window (determined by its title)
	/** \param title window title
	**/
	static ccGLWindow* GetGLWindow(const QString& title);

	//! Returns all GL sub-windows
	/** \param[in,out] glWindows vector to store all sub-windows
	**/
	static void GetGLWindows(std::vector<ccGLWindow*>& glWindows);

	//! Static shortcut to MainWindow::refreshAll
	static void RefreshAllGLWindow(bool only2D = false);

	//! Static shortcut to MainWindow::updateUI
	static void UpdateUI();

	//! Deletes current main window instance
	static void DestroyInstance();

	//! Returns active GL sub-window (if any)
	virtual ccGLWindow* getActiveGLWindow();

	//! Tries to load several files (and then pushes them into main DB)
	/** \param filenames list of all filenames
		\param fType file type
		\param destWin destination window (0 = active one)
	**/
	virtual void addToDB(	const QStringList& filenames,
							QString fileFilter = QString(),
							ccGLWindow* destWin = 0);

	//inherited from ccMainAppInterface
	virtual void addToDB(	ccHObject* obj,
							bool updateZoom = false,
							bool autoExpandDBTree = true,
							bool checkDimensions = false,
							bool autoRedraw = true);

	virtual void removeFromDB(ccHObject* obj, bool autoDelete = true);
	virtual void setSelectedInDB(ccHObject* obj, bool selected);
	virtual void dispToConsole(QString message, ConsoleMessageLevel level = STD_CONSOLE_MESSAGE);
	virtual void forceConsoleDisplay();
	virtual ccHObject* dbRootObject();
	inline virtual QMainWindow* getMainWindow() { return this; }
	inline virtual const ccHObject::Container& getSelectedEntities() const { return m_selectedEntities; }
	virtual ccUniqueIDGenerator::Shared getUniqueIDGenerator();
	virtual ccColorScalesManager* getColorScalesManager();
	virtual void spawnHistogramDialog(const std::vector<unsigned>& histoValues, double minVal, double maxVal, QString title, QString xAxisLabel);

	//! Returns real 'dbRoot' object
	virtual ccDBRoot* db();

	/*** CCLib "standalone" algorithms ***/
	
	//CCLib algorithms handled by the 'ApplyCCLibAlgortihm' method
	enum CC_LIB_ALGORITHM { CCLIB_ALGO_CURVATURE		= 1,
							CCLIB_ALGO_SF_GRADIENT		= 2,
							CCLIB_ALGO_ROUGHNESS		= 3,
							CCLIB_ALGO_APPROX_DENSITY	= 4,
							CCLIB_ALGO_ACCURATE_DENSITY	= 5,
							CCLIB_SPHERICAL_NEIGHBOURHOOD_EXTRACTION_TEST = 255,
	};

	//! Applies a standard CCLib algorithm (see CC_LIB_ALGORITHM) on a set of entities
	static bool ApplyCCLibAlgortihm(CC_LIB_ALGORITHM algo,
									ccHObject::Container& entities,
									QWidget* parent = 0,
									void** additionalParameters = 0);

	//! Scale matching algorithms
	enum ScaleMatchingAlgorithm { BB_MAX_DIM, BB_VOLUME, PCA_MAX_DIM, ICP_SCALE };

	//! Applies a standard CCLib algorithm (see CC_LIB_ALGORITHM) on a set of entities
	static bool ApplyScaleMatchingAlgortihm(ScaleMatchingAlgorithm algo,
											ccHObject::Container& entities,
											double icpRmsDiff,
											int icpFinalOverlap,
											unsigned refEntityIndex = 0,
											QWidget* parent = 0);

	//! Returns MDI area subwindow corresponding to a given 3D view
	QMdiSubWindow* getMDISubWindow(ccGLWindow* win);

	//! Backup "context" for an object
	/** Used with removeObjectTemporarilyFromDBTree/putObjectBackIntoDBTree.
	**/
	struct ccHObjectContext
	{
		ccHObjectContext() : parent(0), childFlags(0), parentFlags(0) {}
		ccHObject* parent;
		int childFlags;
		int parentFlags;
	};

	//! Removes object temporarily from DB tree
	/** This method must be called before any modification to the db tree
		WARNING: may change 'selectedEntities' container!
	**/
	ccHObjectContext removeObjectTemporarilyFromDBTree(ccHObject* obj);

	//! Adds back object to DB tree
	/** This method should be called once modifications to the db tree are finished
		(see removeObjectTemporarilyFromDBTree).
	**/
	void putObjectBackIntoDBTree(ccHObject* obj, const ccHObjectContext& context);

	//! Shortcut: asks the user to select one cloud
	/** \param defaultCloudEntity a cloud to select by default (optional)
		\param inviteMessage invite message (default is something like 'Please select an entity:') (optional)
		\return the selected cloud (or null if the user cancelled the operation)
	**/
	ccPointCloud* askUserToSelectACloud(ccHObject* defaultCloudEntity = 0, QString inviteMessage = QString());

protected slots:

	//! Creates a new 3D GL sub-window
	ccGLWindow* new3DView();

	//! Zooms in (current 3D view)
	void zoomIn();
	//! Zooms out (current 3D view)
	void zoomOut();

	//! Displays 'about' dialog
	void doActionShawAboutDialog();
	//! Displays 'help' dialog
	void doActionShowHelpDialog();
	//! Displays 'about plugins' dialog
	void doActionShowAboutPluginsDialog();
	//! Displays file open dialog
	void doActionLoadFile();
	//! Displays file save dialog
	void doActionSaveFile();

	//! Clones currently selected entities
	void doActionClone();

	//! Updates entities display target when a gl sub-window is deleted
	/** \param glWindow the window that is going to be delete
	**/
	void prepareWindowDeletion(QObject* glWindow);

	//! Slot called when the exclusive fullscreen mode is toggled on a window
	void onExclusiveFullScreenToggled(bool);

	//inherited from ccMainAppInterface
	virtual void freezeUI(bool state);
	virtual void redrawAll(bool only2D = false);
	virtual void refreshAll(bool only2D = false);
	virtual void enableAll();
	virtual void disableAll();
	virtual void disableAllBut(ccGLWindow* win);
	virtual void updateUI();
	virtual void setFrontView();
	virtual void setBottomView();
	virtual void setTopView();
	virtual void setBackView();
	virtual void setLeftView();
	virtual void setRightView();
	virtual void setIsoView1();
	virtual void setIsoView2();
	virtual void toggleActiveWindowStereoVision(bool);
	virtual void toggleActiveWindowCenteredPerspective();
	virtual void toggleActiveWindowCustomLight();
	virtual void toggleActiveWindowSunLight();
	virtual void toggleActiveWindowViewerBasedPerspective();
	virtual void toggleRotationAboutVertAxis();
	virtual void doActionEnableBubbleViewMode();
	virtual void setGlobalZoom();
	virtual void zoomOnSelectedEntities();
	virtual void setPivotAlwaysOn();
	virtual void setPivotRotationOnly();
	virtual void setPivotOff();
	virtual void setOrthoView();
	virtual void setCenteredPerspectiveView();
	virtual void setViewerPerspectiveView();

	//! Handles new label
	void handleNewLabel(ccHObject*);

	void setActiveSubWindow(QWidget* window);
	void setLightsAndMaterials();
	void showSelectedEntitiesHistogram();
	void testFrameRate();
	void toggleFullScreen(bool state);
	void toggleVisualDebugTraces();
	void toggleExclusiveFullScreen(bool state);
	void update3DViewsMenu();
	void updateMenus();
	void on3DViewActivated(QMdiSubWindow*);
	void updateUIWithSelection();
	void addToDBAuto(QStringList);

	void echoMouseWheelRotate(float);
	void echoCameraDisplaced(float ddx, float ddy);
	void echoBaseViewMatRotation(const ccGLMatrixd& rotMat);
	void echoCameraPosChanged(const CCVector3d&);
	void echoPivotPointChanged(const CCVector3d&);
	void echoPixelSizeChanged(float);

	void toggleSelectedEntitiesActivation();
	void toggleSelectedEntitiesVisibility();
	void toggleSelectedEntitiesNormals();
	void toggleSelectedEntitiesColors();
	void toggleSelectedEntitiesSF();
	void toggleSelectedEntities3DName();
	void toggleSelectedEntitiesMaterials();

	void doActionRenderToFile();

	//menu action
	void doActionSetUniqueColor();
	void doActionColorize();
	void doActionSetColor(bool colorize);
	void doActionSetColorGradient();
	void doActionInterpolateColors();
	void doActionChangeColorLevels();

	void doActionSFGaussianFilter();
	void doActionSFBilateralFilter();
	void doActionSFConvertToRGB();
	void doActionSFConvertToRandomRGB();
	void doActionRenameSF();
	void doActionOpenColorScalesManager();
	void doActionAddIdField();
	void doActionSetSFAsCoord();

	void doComputeDensity();
	void doComputeCurvature();
	void doActionSFGradient();
	void doComputeRoughness();
	void doRemoveDuplicatePoints();
	void doSphericalNeighbourhoodExtractionTest(); //DGM TODO: remove after test
	void doCylindricalNeighbourhoodExtractionTest(); //DGM TODO: remove after test
	void doActionFitPlane();
	void doActionFitSphere();
	void doActionFitFacet();
	void doActionFitQuadric();
	void doShowPrimitiveFactory();

	void doActionComputeNormals();
	void doActionInvertNormals();
	void doActionConvertNormalsToHSV();
	void doActionConvertNormalsToDipDir();
	void doActionComputeOctree();
	void doActionComputeKdTree();
	void doActionApplyTransformation();
	void doActionMerge();
	void doActionRegister();
	void doAction4pcsRegister(); //Aurelien BEY le 13/11/2008
	void doActionSubsample(); //Aurelien BEY le 4/12/2008
	void doActionStatisticalTest();
	void doActionSamplePoints();
	void doActionConvertTextureToColor();
	void doActionLabelConnectedComponents();
	void doActionComputeStatParams();
	void doActionFilterByValue();
	
	// Picking opeations
	void enablePickingOperation(ccGLWindow* win, QString message);
	void cancelPreviousPickingOperation(bool aborted);
	void processPickedPoint(int, unsigned, int, int);

	// For rotation center picking
	void doPickRotationCenter();
	// For leveling
	void doLevel();
	
	void doActionDeleteScalarField();
	void doActionSmoothMeshSF();
	void doActionEnhanceMeshSF();
	void doActionAddConstantSF();
	void doActionScalarFieldArithmetic();
	void doActionScalarFieldFromColor();
	void doActionClearColor();
	void doActionOrientNormalsFM();
	void doActionOrientNormalsMST();
	void doActionClearNormals();
	void doActionResampleWithOctree();
	void doActionComputeMeshAA();
	void doActionComputeMeshLS();
	void doActionComputeDistanceMap();
	void doActionComputeDistToBestFitQuadric3D();
	void doActionMeasureMeshSurface();
	void doActionMeasureMeshVolume();
	void doActionFlagMeshVetices();
	void doActionSmoothMeshLaplacian();
	void doActionSubdivideMesh();
	void doActionComputeCPS();
	void doActionDeleteAllSF();
	void doActionKMeans();
	void doActionFrontPropagation();
	void doActionApplyScale();
	void doActionEditGlobalShiftAndScale();
	void doActionMatchBBCenters();
	void doActionMatchScales();
	void doActionSORFilter();
	void doActionFilterNoise();
	void doActionUnroll();
	void doActionCreateGBLSensor();
	void doActionCreateCameraSensor();
	void doActionModifySensor();
	void doActionProjectUncertainty();
	void doActionCheckPointsInsideFrustrum();
	void doActionComputeDistancesFromSensor();
	void doActionComputeScatteringAngles();
	void doActionSetViewFromSensor();
	void doActionShowDepthBuffer();
	void doActionExportDepthBuffer();
	void doActionComputePointsVisibility();
	void doActionRasterize();
	void doCompute2HalfDimVolume();
	void doConvertPolylinesToMesh();
	void doActionExportCoordToSF();
	void doComputeBestFitBB();
	void doActionCrop();

	void doActionEditCamera();
	void doActionAdjustZoom();
	void doActionSaveViewportAsCamera();
	void doActionResetGUIElementsPos();

	//Shaders & plugins
	void doActionLoadShader();
	void doActionDeleteShader();
	void doEnableGLFilter();
	void doDisableGLFilter();

	void doActionFindBiggestInnerRectangle();

	//Clipping box
	void activateClippingBoxMode();
	void deactivateClippingBoxMode(bool);

	//Graphical transformation
	void activateTranslateRotateMode();
	void deactivateTranslateRotateMode(bool);

	//Graphical segmentation
	void activateSegmentationMode();
	void deactivateSegmentationMode(bool);

	//Section extraction
	void activateSectionExtractionMode();
	void deactivateSectionExtractionMode(bool);

	//Entities comparison
	void doActionCloudCloudDist();
	void doActionCloudMeshDist();
	void deactivateComparisonMode(int);

	//Point picking mechanism
	void activatePointPickingMode();
	void deactivatePointPickingMode(bool);

	//Point list picking mechanism
	void activatePointListPickingMode();
	void deactivatePointListPickingMode(bool);

	//Point-pair registration mechanism
	void activateRegisterPointPairTool();
	void deactivateRegisterPointPairTool(bool);

	//Current active scalar field
	void doActionToggleActiveSFColorScale();
	void doActionShowActiveSFPrevious();
	void doActionShowActiveSFNext();

	//3D mouse
	void on3DMouseMove(std::vector<float>&);
	void on3DMouseKeyUp(int);
	void on3DMouseKeyDown(int);
	void on3DMouseReleased();

	//! Setups 3D mouse (if any)
	void setup3DMouse(bool);

	//! Removes all entiites currently loaded in the DB tree
	void closeAll();

	//! Batch export some pieces of info from a set of selected clouds
	void doActionExportCloudsInfo();

	//! Generates a matrix with the best (registration) RMS for all possible couple among the selected entities
	void doActionComputeBestICPRmsMatrix();

	//! Creates a cloud with the (bounding-box) centers of all selected entities
	void doActionCreateCloudFromEntCenters();

protected:

	//! Apply transformation to the selected entities
	void applyTransformation(const ccGLMatrixd& transMat);

	//! Normals conversion destinations
	enum NORMAL_CONVERSION_DEST	{ HSV_COLORS, DIP_DIR_SFS };
	//! Converts a cloud's normals
	void doActionConvertNormalsTo(NORMAL_CONVERSION_DEST dest);

	//! Removes from a list all elements that are sibling of others
	/** List is updated in place.
	**/
	static void RemoveSiblingsFromCCObjectList(ccHObject::Container& ccObjects);

	//! Returns a default first guess for algorithms kernel size (one cloud)
	static PointCoordinateType GetDefaultCloudKernelSize(ccGenericPointCloud* cloud, unsigned knn = 12);
	//! Returns a default first guess for algorithms kernel size (several clouds)
	static PointCoordinateType GetDefaultCloudKernelSize(const ccHObject::Container& entities, unsigned knn = 12);

	//! Creates point clouds from multiple 'components'
	void createComponentsClouds(ccGenericPointCloud* cloud,
								CCLib::ReferenceCloudContainer& components,
								unsigned minPointPerComponent,
								bool randomColors,
								bool selectComponents,
								bool sortBysize = true);

	//! Saves position and state of all GUI elements
	void saveGUIElementsPos();

	void setOrthoView(ccGLWindow* win);
	void setCenteredPerspectiveView(ccGLWindow* win, bool autoRedraw = true);
	void setViewerPerspectiveView(ccGLWindow* win);

	void closeEvent(QCloseEvent* event);
	void moveEvent(QMoveEvent* event);
	void resizeEvent(QResizeEvent* event);

	void loadPlugins();
	bool dispatchPlugin(QObject* plugin);
	ccPluginInterface* getValidPlugin(QObject* plugin);

	//! Makes the window including an entity zoom on it (helper)
	void zoomOn(ccHObject* object);

	//! Clear property process fork
	/** - prop=0 : COLOR
		- prop=1 : NORMALS
		- prop=2 : SCALAR FIELD
		- prop=3 : ALL SCALAR FIELDS
		\param prop property id
	**/
	void doActionClearProperty(int prop);

	//! Toggles selected entities properties
	/** - prop=0 : VISIBILITY
		- prop=1 : COLOR
		- prop=2 : NORMALS
		- prop=3 : SCALAR FIELD
		- prop=4 : MATERIAL/TEXTURE
		- prop=5 : NAME (IN 3D)
		\param prop property id
	**/
	void toggleSelectedEntitiesProp(int prop);

	//! Active SF action fork
	/** - action=0 : toggle SF color scale
		- action=1 : activate previous SF
		- action=2 : activate next SF
		\param action action id
	**/
	void doApplyActiveSFAction(int action);

	//! Mesh computation fork
	/** \param type triangulation type
	**/
	void doActionComputeMesh(CC_TRIANGULATION_TYPES type);

	//! Apply a specific process to a mesh scalar field
	/** \param process process
	**/
	void doMeshSFAction(ccMesh::MESH_SCALAR_FIELD_PROCESS process);

	//! Computes the orientation of an entity
	/** Either fit a plane or a 'facet' (2D polygon)
	**/
	void doComputePlaneOrientation(bool fitFacet);

	//! Connects all QT actions to slots
	void connectActions();

	//! Enables menu entires based on the current selection
	void enableUIItems(dbTreeSelectionInfo& selInfo);

	//! Expands DB tree for selected items
	void expandDBTreeWithSelection(ccHObject::Container& selection);

	//! Releases any connected 3D mouse (if any)
	void release3DMouse();

	//! Trys to enable (or disable) a 3D mouse device
	/** \param state whether to enable or disable the device
		\param silent whether to issue an error message in case of failure
	**/
	void enable3DMouse(bool state, bool silent);

	//! Updates the view mode pop-menu based for a given window (or an absence of!)
	virtual void updateViewModePopUpMenu(ccGLWindow* win);

	//! Updates the pivot visibility pop-menu based for a given window (or an absence of!)
	virtual void updatePivotVisibilityPopUpMenu(ccGLWindow* win);

	//! Checks whether stereo mode can be stopped (if necessary) or not
	bool checkStereoMode(ccGLWindow* win);

	//DB & DB Tree
	ccDBRoot* m_ccRoot;

	//! Currently selected entities;
	ccHObject::Container m_selectedEntities;

	//! UI frozen state (see freezeUI)
	bool m_uiFrozen;

	//! 3D mouse handler
	Mouse3DInput* m_3dMouseInput;

	//! View mode pop-up menu button
	QToolButton* m_viewModePopupButton;

	//! Pivot visibility pop-up menu button
	QToolButton* m_pivotVisibilityPopupButton;

	/******************************/
	/***        MDI AREA        ***/
	/******************************/

	QMdiArea* m_mdiArea;
	QSignalMapper* m_windowMapper;

	//! CloudCompare MDI area overlay dialogs
	struct ccMDIDialogs
	{
		ccOverlayDialog* dialog;
		Qt::Corner position;

		//! Constructor with dialog and position
		ccMDIDialogs(ccOverlayDialog* dlg, Qt::Corner pos)
			: dialog(dlg)
			, position(pos)
		{}
	};

	//! Replaces an MDI dialog at its right position
	void placeMDIDialog(ccMDIDialogs& mdiDlg);

	//! Registers a MDI area overlay dialog
	void registerMDIDialog(ccOverlayDialog* dlg, Qt::Corner pos);
	//! Unregisters a MDI area overlay dialog
	void unregisterMDIDialog(ccOverlayDialog* dlg);

	//! Automatically updates all registered MDI dialogs placement
	void updateMDIDialogsPlacement();

	//! Registered MDI area overlay dialogs
	std::vector<ccMDIDialogs> m_mdiDialogs;

	/*** dialogs ***/

	//! Camera params dialog
	ccCameraParamEditDlg* m_cpeDlg;
	//! Graphical segmentation dialog
	ccGraphicalSegmentationTool* m_gsTool;
	//! Section extraction dialog
	ccSectionExtractionTool* m_seTool;
	//! Graphical transformation dialog
	ccGraphicalTransformationTool* m_transTool;
	//! Clipping box dialog
	ccClippingBoxTool* m_clipTool;
	//! Cloud comparison dialog
	ccComparisonDlg* m_compDlg;
	//! Point properties mode dialog
	ccPointPropertiesDlg* m_ppDlg;
	//! Point list picking
	ccPointListPickingDlg* m_plpDlg;
	//! Point-pair registration
	ccPointPairRegistrationDlg* m_pprDlg;
	//! Primitive factory dialog
	ccPrimitiveFactoryDlg* m_pfDlg;

	/*** plugins ***/
	QString m_pluginsPath;
	QStringList m_pluginFileNames;
	QList<ccStdPluginInterface*> m_stdPlugins;
	QList<QToolBar*> m_stdPluginsToolbars;
	QActionGroup m_glFilterActions;

};

#endif
