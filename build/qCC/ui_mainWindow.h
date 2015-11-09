/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDockWidget>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <ccDBRoot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionFullScreen;
    QAction *actionDisplayOptions;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionSetUniqueColor;
    QAction *actionSetColorGradient;
    QAction *actionComputeNormals;
    QAction *actionInvertNormals;
    QAction *actionComputeOctree;
    QAction *actionConsole;
    QAction *actionClose3DView;
    QAction *actionCloseAll3DViews;
    QAction *actionTile3DViews;
    QAction *actionCascade3DViews;
    QAction *actionPrevious3DView;
    QAction *actionNext3DView;
    QAction *actionNew3DView;
    QAction *actionClone;
    QAction *actionMerge;
    QAction *actionDelete;
    QAction *actionRegister;
    QAction *actionCloudCloudDist;
    QAction *actionCloudMeshDist;
    QAction *actionStatisticalTest;
    QAction *actionSamplePoints;
    QAction *actionLabelConnectedComponents;
    QAction *actionSegment;
    QAction *actionTranslateRotate;
    QAction *actionShowHistogram;
    QAction *actionComputeStatParams;
    QAction *actionFilterByValue;
    QAction *actionGaussianFilter;
    QAction *actionDeleteScalarField;
    QAction *actionScalarFieldArithmetic;
    QAction *actionColorize;
    QAction *actionSmoothMeshSF;
    QAction *actionEnhanceMeshSF;
    QAction *actionClearColor;
    QAction *actionClearNormals;
    QAction *actionResampleWithOctree;
    QAction *actionComputeMeshAA;
    QAction *actionComputeMeshLS;
    QAction *actionMeasureMeshSurface;
    QAction *actionCPS;
    QAction *actionDeleteAllSF;
    QAction *actionMultiplySF;
    QAction *actionKMeans;
    QAction *actionFrontPropagation;
    QAction *actionApplyScale;
    QAction *actionMatchBBCenters;
    QAction *actionUnroll;
    QAction *actionSFGradient;
    QAction *actionZoomAndCenter;
    QAction *actionSetViewTop;
    QAction *actionSetViewFront;
    QAction *actionSetViewBack;
    QAction *actionSetViewLeft;
    QAction *actionSetViewRight;
    QAction *actionSetViewBottom;
    QAction *actionDisplayMainTools;
    QAction *actionDisplayViewTools;
    QAction *actionDisplayScalarFieldsTools;
    QAction *actionToggleSunLight;
    QAction *actionToggleCustomLight;
    QAction *actionGlobalZoom;
    QAction *actionToggleCenteredPerspective;
    QAction *actionToggleViewerBasedPerspective;
    QAction *actionRefresh;
    QAction *actionTestFrameRate;
    QAction *actionRenderToFile;
    QAction *actionAboutPlugins;
    QAction *actionConvertToRGB;
    QAction *actionShowDepthBuffer;
    QAction *actionExportDepthBuffer;
    QAction *actionModifySensor;
    QAction *actionRasterize;
    QAction *actionAlign;
    QAction *actionSubsample;
    QAction *actionLoadShader;
    QAction *actionNoFilter;
    QAction *actionDeleteShader;
    QAction *actionPointPicking;
    QAction *actionDisplayPluginTools;
    QAction *actionComputeBestFitBB;
    QAction *actionEditCamera;
    QAction *actionPointListPicking;
    QAction *actionCurvature;
    QAction *actionRoughness;
    QAction *actionFitPlane;
    QAction *actionRenameSF;
    QAction *actionFitQuadric;
    QAction *actionSNETest;
    QAction *actionToggleVisibility;
    QAction *actionToggleNormals;
    QAction *actionToggleColors;
    QAction *actionToggleSF;
    QAction *actionApplyTransformation;
    QAction *actionSmoothMeshLaplacian;
    QAction *actionConvertNormalToHSV;
    QAction *actionSaveViewportAsObject;
    QAction *actionPickRotationCenter;
    QAction *actionComputeDistancesFromSensor;
    QAction *actionBilateralFilter;
    QAction *actionComputeScatteringAngles;
    QAction *actionToggleActiveSFColorScale;
    QAction *actionShowActiveSFPrevious;
    QAction *actionShowActiveSFNext;
    QAction *actionPointPairsAlign;
    QAction *actionAddConstantSF;
    QAction *actionExportCoordToSF;
    QAction *actionSubdivideMesh;
    QAction *actionToggleShowName;
    QAction *actionPrimitiveFactory;
    QAction *actionToggleMaterials;
    QAction *actionEnable3DMouse;
    QAction *actionSetOrthoView;
    QAction *actionSetCenteredPerspectiveView;
    QAction *actionSetViewerPerspectiveView;
    QAction *actionSetPivotAlwaysOn;
    QAction *actionSetPivotRotationOnly;
    QAction *actionSetPivotOff;
    QAction *actionSetViewIso1;
    QAction *actionSetViewIso2;
    QAction *actionConvertTextureToColor;
    QAction *actionOpenColorScalesManager;
    QAction *actionCrossSection;
    QAction *actionEditGlobalShiftAndScale;
    QAction *actionScalarFieldFromColor;
    QAction *actionComputeKdTree;
    QAction *actionTest;
    QAction *actionAddIdField;
    QAction *actionFitFacet;
    QAction *actionAdjustZoom;
    QAction *actionSetSFAsCoord;
    QAction *actionCloseAll;
    QAction *actionEditGlobalScale;
    QAction *actionViewFromSensor;
    QAction *actionFindBiggestInnerRectangle;
    QAction *actionCreateGBLSensor;
    QAction *actionCreateCameraSensor;
    QAction *actionCheckPointsInsideFrustrum;
    QAction *actionProjectUncertainty;
    QAction *actionOrientNormalsMST;
    QAction *actionOrientNormalsFM;
    QAction *actionCNETest;
    QAction *actionApproximateDensity;
    QAction *actionComputeDensity;
    QAction *actionRemoveDuplicatePoints;
    QAction *actionCrop;
    QAction *actionConvertNormalToDipDir;
    QAction *actionExportCloudsInfo;
    QAction *actionInterpolateColors;
    QAction *actionDistanceToBestFitQuadric3D;
    QAction *actionDisplayGLFiltersTools;
    QAction *actionChangeColorLevels;
    QAction *actionResetGUIElementsPos;
    QAction *actionConvertToRandomRGB;
    QAction *actionNoiseFilter;
    QAction *actionComputeStatParams2;
    QAction *actionMeasureMeshVolume;
    QAction *actionFlagMeshVetices;
    QAction *actionToggleActivation;
    QAction *actionLockRotationVertAxis;
    QAction *actionCreateCloudFromEntCenters;
    QAction *actionComputeBestICPRmsMatrix;
    QAction *actionEnterBubbleViewMode;
    QAction *actionExtractSections;
    QAction *actionConvertPolylinesToMesh;
    QAction *actionLevel;
    QAction *actionFitSphere;
    QAction *actionMatchScales;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionDistanceMapToMesh;
    QAction *actionSORFilter;
    QAction *actionEnableStereo;
    QAction *actionComputePointsVisibility;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menu3DMouse;
    QMenu *menuDisplay;
    QMenu *menuToolbars;
    QMenu *menuLights;
    QMenu *menuShadersAndFilters;
    QMenu *menuActiveScalarField;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuScalarFields;
    QMenu *menuColors;
    QMenu *menuNormals;
    QMenu *menuOrientNormals;
    QMenu *menuConvert_to;
    QMenu *menuOctree;
    QMenu *menuMesh;
    QMenu *menuMeshScalarField;
    QMenu *menuSensors;
    QMenu *menuGroundBasedLidar;
    QMenu *menuCameraSensor;
    QMenu *menuToggle;
    QMenu *menu3DViews;
    QMenu *menuPlugins;
    QMenu *menuTools;
    QMenu *menuSegmentation;
    QMenu *menuProjection;
    QMenu *menuStatistics;
    QMenu *menuDistances;
    QMenu *menuRegistration;
    QMenu *menuOther;
    QMenu *menuSandBox;
    QMenu *menuFit;
    QMenu *menuClean;
    QDockWidget *DockableDBTree;
    QWidget *dockWidgetContents;
    QVBoxLayout *vboxLayout;
    ccCustomQTreeView *dbTreeView;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QCheckBox *checkBoxCameraLink;
    QStatusBar *statusBar;
    QToolBar *toolBarView;
    QDockWidget *DockableConsole;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *vboxLayout2;
    QListWidget *consoleWidget;
    QToolBar *toolBarMainTools;
    QToolBar *toolBarSFTools;
    QToolBar *toolBarPluginTools;
    QDockWidget *DockableProperties;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *vboxLayout3;
    QTreeView *propertiesTreeView;
    QToolBar *toolBarGLFilters;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setBaseSize(QSize(800, 600));
        MainWindow->setFocusPolicy(Qt::ClickFocus);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Icons/images/icon/cc_icon_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave->setShortcutContext(Qt::ApplicationShortcut);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/ccFullScreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon3);
        actionFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionDisplayOptions = new QAction(MainWindow);
        actionDisplayOptions->setObjectName(QString::fromUtf8("actionDisplayOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/ccSettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplayOptions->setIcon(icon4);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSetUniqueColor = new QAction(MainWindow);
        actionSetUniqueColor->setObjectName(QString::fromUtf8("actionSetUniqueColor"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/typeRgbCcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetUniqueColor->setIcon(icon5);
        actionSetColorGradient = new QAction(MainWindow);
        actionSetColorGradient->setObjectName(QString::fromUtf8("actionSetColorGradient"));
        actionComputeNormals = new QAction(MainWindow);
        actionComputeNormals->setObjectName(QString::fromUtf8("actionComputeNormals"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/typeNormal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeNormals->setIcon(icon6);
        actionInvertNormals = new QAction(MainWindow);
        actionInvertNormals->setObjectName(QString::fromUtf8("actionInvertNormals"));
        actionComputeOctree = new QAction(MainWindow);
        actionComputeOctree->setObjectName(QString::fromUtf8("actionComputeOctree"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/dbOctreeSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeOctree->setIcon(icon7);
        actionConsole = new QAction(MainWindow);
        actionConsole->setObjectName(QString::fromUtf8("actionConsole"));
        actionConsole->setCheckable(true);
        actionConsole->setChecked(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/ccConsole.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConsole->setIcon(icon8);
        actionConsole->setShortcutContext(Qt::ApplicationShortcut);
        actionClose3DView = new QAction(MainWindow);
        actionClose3DView->setObjectName(QString::fromUtf8("actionClose3DView"));
        actionCloseAll3DViews = new QAction(MainWindow);
        actionCloseAll3DViews->setObjectName(QString::fromUtf8("actionCloseAll3DViews"));
        actionTile3DViews = new QAction(MainWindow);
        actionTile3DViews->setObjectName(QString::fromUtf8("actionTile3DViews"));
        actionCascade3DViews = new QAction(MainWindow);
        actionCascade3DViews->setObjectName(QString::fromUtf8("actionCascade3DViews"));
        actionPrevious3DView = new QAction(MainWindow);
        actionPrevious3DView->setObjectName(QString::fromUtf8("actionPrevious3DView"));
        actionNext3DView = new QAction(MainWindow);
        actionNext3DView->setObjectName(QString::fromUtf8("actionNext3DView"));
        actionNew3DView = new QAction(MainWindow);
        actionNew3DView->setObjectName(QString::fromUtf8("actionNew3DView"));
        actionClone = new QAction(MainWindow);
        actionClone->setObjectName(QString::fromUtf8("actionClone"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/ccClone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClone->setIcon(icon9);
        actionMerge = new QAction(MainWindow);
        actionMerge->setObjectName(QString::fromUtf8("actionMerge"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/ccMerge.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMerge->setIcon(icon10);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/CC/images/ccDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon11);
        actionDelete->setShortcutContext(Qt::ApplicationShortcut);
        actionRegister = new QAction(MainWindow);
        actionRegister->setObjectName(QString::fromUtf8("actionRegister"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/CC/images/ccRegister.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRegister->setIcon(icon12);
        actionCloudCloudDist = new QAction(MainWindow);
        actionCloudCloudDist->setObjectName(QString::fromUtf8("actionCloudCloudDist"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/CC/images/ccCloudCloudDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloudCloudDist->setIcon(icon13);
        actionCloudMeshDist = new QAction(MainWindow);
        actionCloudMeshDist->setObjectName(QString::fromUtf8("actionCloudMeshDist"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/CC/images/ccCloudMeshDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloudMeshDist->setIcon(icon14);
        actionStatisticalTest = new QAction(MainWindow);
        actionStatisticalTest->setObjectName(QString::fromUtf8("actionStatisticalTest"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/CC/images/ccStatTest.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStatisticalTest->setIcon(icon15);
        actionSamplePoints = new QAction(MainWindow);
        actionSamplePoints->setObjectName(QString::fromUtf8("actionSamplePoints"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/CC/images/ccSamplePoints.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSamplePoints->setIcon(icon16);
        actionLabelConnectedComponents = new QAction(MainWindow);
        actionLabelConnectedComponents->setObjectName(QString::fromUtf8("actionLabelConnectedComponents"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/CC/images/ccCCExtract.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLabelConnectedComponents->setIcon(icon17);
        actionSegment = new QAction(MainWindow);
        actionSegment->setObjectName(QString::fromUtf8("actionSegment"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/CC/images/ccSegment.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSegment->setIcon(icon18);
        actionTranslateRotate = new QAction(MainWindow);
        actionTranslateRotate->setObjectName(QString::fromUtf8("actionTranslateRotate"));
        actionTranslateRotate->setCheckable(false);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/CC/images/ccInteractiveTransformation.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTranslateRotate->setIcon(icon19);
        actionShowHistogram = new QAction(MainWindow);
        actionShowHistogram->setObjectName(QString::fromUtf8("actionShowHistogram"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/CC/images/ccHistogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowHistogram->setIcon(icon20);
        actionComputeStatParams = new QAction(MainWindow);
        actionComputeStatParams->setObjectName(QString::fromUtf8("actionComputeStatParams"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/CC/images/ccComputeStat.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeStatParams->setIcon(icon21);
        actionFilterByValue = new QAction(MainWindow);
        actionFilterByValue->setObjectName(QString::fromUtf8("actionFilterByValue"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/CC/images/ccFilterByValue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilterByValue->setIcon(icon22);
        actionGaussianFilter = new QAction(MainWindow);
        actionGaussianFilter->setObjectName(QString::fromUtf8("actionGaussianFilter"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/CC/images/ccGaussianFilter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGaussianFilter->setIcon(icon23);
        actionDeleteScalarField = new QAction(MainWindow);
        actionDeleteScalarField->setObjectName(QString::fromUtf8("actionDeleteScalarField"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/CC/images/ccDeleteSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteScalarField->setIcon(icon24);
        actionScalarFieldArithmetic = new QAction(MainWindow);
        actionScalarFieldArithmetic->setObjectName(QString::fromUtf8("actionScalarFieldArithmetic"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/CC/images/ccSfArithmetic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScalarFieldArithmetic->setIcon(icon25);
        actionColorize = new QAction(MainWindow);
        actionColorize->setObjectName(QString::fromUtf8("actionColorize"));
        actionSmoothMeshSF = new QAction(MainWindow);
        actionSmoothMeshSF->setObjectName(QString::fromUtf8("actionSmoothMeshSF"));
        actionEnhanceMeshSF = new QAction(MainWindow);
        actionEnhanceMeshSF->setObjectName(QString::fromUtf8("actionEnhanceMeshSF"));
        actionClearColor = new QAction(MainWindow);
        actionClearColor->setObjectName(QString::fromUtf8("actionClearColor"));
        actionClearColor->setIcon(icon11);
        actionClearNormals = new QAction(MainWindow);
        actionClearNormals->setObjectName(QString::fromUtf8("actionClearNormals"));
        actionClearNormals->setIcon(icon11);
        actionResampleWithOctree = new QAction(MainWindow);
        actionResampleWithOctree->setObjectName(QString::fromUtf8("actionResampleWithOctree"));
        actionComputeMeshAA = new QAction(MainWindow);
        actionComputeMeshAA->setObjectName(QString::fromUtf8("actionComputeMeshAA"));
        actionComputeMeshLS = new QAction(MainWindow);
        actionComputeMeshLS->setObjectName(QString::fromUtf8("actionComputeMeshLS"));
        actionMeasureMeshSurface = new QAction(MainWindow);
        actionMeasureMeshSurface->setObjectName(QString::fromUtf8("actionMeasureMeshSurface"));
        actionCPS = new QAction(MainWindow);
        actionCPS->setObjectName(QString::fromUtf8("actionCPS"));
        actionDeleteAllSF = new QAction(MainWindow);
        actionDeleteAllSF->setObjectName(QString::fromUtf8("actionDeleteAllSF"));
        actionMultiplySF = new QAction(MainWindow);
        actionMultiplySF->setObjectName(QString::fromUtf8("actionMultiplySF"));
        actionKMeans = new QAction(MainWindow);
        actionKMeans->setObjectName(QString::fromUtf8("actionKMeans"));
        actionKMeans->setCheckable(true);
        actionFrontPropagation = new QAction(MainWindow);
        actionFrontPropagation->setObjectName(QString::fromUtf8("actionFrontPropagation"));
        actionFrontPropagation->setEnabled(false);
        actionApplyScale = new QAction(MainWindow);
        actionApplyScale->setObjectName(QString::fromUtf8("actionApplyScale"));
        actionMatchBBCenters = new QAction(MainWindow);
        actionMatchBBCenters->setObjectName(QString::fromUtf8("actionMatchBBCenters"));
        actionUnroll = new QAction(MainWindow);
        actionUnroll->setObjectName(QString::fromUtf8("actionUnroll"));
        actionSFGradient = new QAction(MainWindow);
        actionSFGradient->setObjectName(QString::fromUtf8("actionSFGradient"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/CC/images/ccGradient.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSFGradient->setIcon(icon26);
        actionZoomAndCenter = new QAction(MainWindow);
        actionZoomAndCenter->setObjectName(QString::fromUtf8("actionZoomAndCenter"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/CC/images/ccZoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomAndCenter->setIcon(icon27);
        actionSetViewTop = new QAction(MainWindow);
        actionSetViewTop->setObjectName(QString::fromUtf8("actionSetViewTop"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewTop->setIcon(icon28);
        actionSetViewTop->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewFront = new QAction(MainWindow);
        actionSetViewFront->setObjectName(QString::fromUtf8("actionSetViewFront"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewFront->setIcon(icon29);
        actionSetViewFront->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBack = new QAction(MainWindow);
        actionSetViewBack->setObjectName(QString::fromUtf8("actionSetViewBack"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBack->setIcon(icon30);
        actionSetViewBack->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewLeft = new QAction(MainWindow);
        actionSetViewLeft->setObjectName(QString::fromUtf8("actionSetViewLeft"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewLeft->setIcon(icon31);
        actionSetViewLeft->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewRight = new QAction(MainWindow);
        actionSetViewRight->setObjectName(QString::fromUtf8("actionSetViewRight"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewRight->setIcon(icon32);
        actionSetViewRight->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBottom = new QAction(MainWindow);
        actionSetViewBottom->setObjectName(QString::fromUtf8("actionSetViewBottom"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBottom->setIcon(icon33);
        actionSetViewBottom->setShortcutContext(Qt::ApplicationShortcut);
        actionDisplayMainTools = new QAction(MainWindow);
        actionDisplayMainTools->setObjectName(QString::fromUtf8("actionDisplayMainTools"));
        actionDisplayMainTools->setCheckable(true);
        actionDisplayMainTools->setChecked(true);
        actionDisplayViewTools = new QAction(MainWindow);
        actionDisplayViewTools->setObjectName(QString::fromUtf8("actionDisplayViewTools"));
        actionDisplayViewTools->setCheckable(true);
        actionDisplayViewTools->setChecked(true);
        actionDisplayScalarFieldsTools = new QAction(MainWindow);
        actionDisplayScalarFieldsTools->setObjectName(QString::fromUtf8("actionDisplayScalarFieldsTools"));
        actionDisplayScalarFieldsTools->setCheckable(true);
        actionDisplayScalarFieldsTools->setChecked(true);
        actionToggleSunLight = new QAction(MainWindow);
        actionToggleSunLight->setObjectName(QString::fromUtf8("actionToggleSunLight"));
        actionToggleSunLight->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleCustomLight = new QAction(MainWindow);
        actionToggleCustomLight->setObjectName(QString::fromUtf8("actionToggleCustomLight"));
        actionToggleCustomLight->setShortcutContext(Qt::ApplicationShortcut);
        actionGlobalZoom = new QAction(MainWindow);
        actionGlobalZoom->setObjectName(QString::fromUtf8("actionGlobalZoom"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/CC/images/ccGlobalZoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGlobalZoom->setIcon(icon34);
        actionToggleCenteredPerspective = new QAction(MainWindow);
        actionToggleCenteredPerspective->setObjectName(QString::fromUtf8("actionToggleCenteredPerspective"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/CC/images/ccCenteredPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleCenteredPerspective->setIcon(icon35);
        actionToggleCenteredPerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleViewerBasedPerspective = new QAction(MainWindow);
        actionToggleViewerBasedPerspective->setObjectName(QString::fromUtf8("actionToggleViewerBasedPerspective"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/CC/images/ccViewerBasedPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleViewerBasedPerspective->setIcon(icon36);
        actionToggleViewerBasedPerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon37);
        actionRefresh->setShortcutContext(Qt::ApplicationShortcut);
        actionTestFrameRate = new QAction(MainWindow);
        actionTestFrameRate->setObjectName(QString::fromUtf8("actionTestFrameRate"));
        actionRenderToFile = new QAction(MainWindow);
        actionRenderToFile->setObjectName(QString::fromUtf8("actionRenderToFile"));
        actionAboutPlugins = new QAction(MainWindow);
        actionAboutPlugins->setObjectName(QString::fromUtf8("actionAboutPlugins"));
        actionConvertToRGB = new QAction(MainWindow);
        actionConvertToRGB->setObjectName(QString::fromUtf8("actionConvertToRGB"));
        actionConvertToRGB->setIcon(icon5);
        actionShowDepthBuffer = new QAction(MainWindow);
        actionShowDepthBuffer->setObjectName(QString::fromUtf8("actionShowDepthBuffer"));
        actionExportDepthBuffer = new QAction(MainWindow);
        actionExportDepthBuffer->setObjectName(QString::fromUtf8("actionExportDepthBuffer"));
        actionModifySensor = new QAction(MainWindow);
        actionModifySensor->setObjectName(QString::fromUtf8("actionModifySensor"));
        actionRasterize = new QAction(MainWindow);
        actionRasterize->setObjectName(QString::fromUtf8("actionRasterize"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/CC/images/ccGrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRasterize->setIcon(icon38);
        actionAlign = new QAction(MainWindow);
        actionAlign->setObjectName(QString::fromUtf8("actionAlign"));
        actionSubsample = new QAction(MainWindow);
        actionSubsample->setObjectName(QString::fromUtf8("actionSubsample"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/CC/images/ccSampleCloud.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSubsample->setIcon(icon39);
        actionLoadShader = new QAction(MainWindow);
        actionLoadShader->setObjectName(QString::fromUtf8("actionLoadShader"));
        actionLoadShader->setEnabled(false);
        actionNoFilter = new QAction(MainWindow);
        actionNoFilter->setObjectName(QString::fromUtf8("actionNoFilter"));
        actionDeleteShader = new QAction(MainWindow);
        actionDeleteShader->setObjectName(QString::fromUtf8("actionDeleteShader"));
        actionDeleteShader->setEnabled(false);
        actionPointPicking = new QAction(MainWindow);
        actionPointPicking->setObjectName(QString::fromUtf8("actionPointPicking"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/CC/images/ccPointPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointPicking->setIcon(icon40);
        actionDisplayPluginTools = new QAction(MainWindow);
        actionDisplayPluginTools->setObjectName(QString::fromUtf8("actionDisplayPluginTools"));
        actionDisplayPluginTools->setCheckable(true);
        actionDisplayPluginTools->setChecked(true);
        actionComputeBestFitBB = new QAction(MainWindow);
        actionComputeBestFitBB->setObjectName(QString::fromUtf8("actionComputeBestFitBB"));
        actionEditCamera = new QAction(MainWindow);
        actionEditCamera->setObjectName(QString::fromUtf8("actionEditCamera"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/CC/images/ccCamera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCamera->setIcon(icon41);
        actionPointListPicking = new QAction(MainWindow);
        actionPointListPicking->setObjectName(QString::fromUtf8("actionPointListPicking"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/CC/images/ccPointListPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointListPicking->setIcon(icon42);
        actionCurvature = new QAction(MainWindow);
        actionCurvature->setObjectName(QString::fromUtf8("actionCurvature"));
        actionRoughness = new QAction(MainWindow);
        actionRoughness->setObjectName(QString::fromUtf8("actionRoughness"));
        actionRoughness->setEnabled(false);
        actionFitPlane = new QAction(MainWindow);
        actionFitPlane->setObjectName(QString::fromUtf8("actionFitPlane"));
        actionRenameSF = new QAction(MainWindow);
        actionRenameSF->setObjectName(QString::fromUtf8("actionRenameSF"));
        actionFitQuadric = new QAction(MainWindow);
        actionFitQuadric->setObjectName(QString::fromUtf8("actionFitQuadric"));
        actionSNETest = new QAction(MainWindow);
        actionSNETest->setObjectName(QString::fromUtf8("actionSNETest"));
        actionToggleVisibility = new QAction(MainWindow);
        actionToggleVisibility->setObjectName(QString::fromUtf8("actionToggleVisibility"));
        actionToggleVisibility->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleNormals = new QAction(MainWindow);
        actionToggleNormals->setObjectName(QString::fromUtf8("actionToggleNormals"));
        actionToggleNormals->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleColors = new QAction(MainWindow);
        actionToggleColors->setObjectName(QString::fromUtf8("actionToggleColors"));
        actionToggleColors->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleSF = new QAction(MainWindow);
        actionToggleSF->setObjectName(QString::fromUtf8("actionToggleSF"));
        actionToggleSF->setShortcutContext(Qt::ApplicationShortcut);
        actionApplyTransformation = new QAction(MainWindow);
        actionApplyTransformation->setObjectName(QString::fromUtf8("actionApplyTransformation"));
        actionSmoothMeshLaplacian = new QAction(MainWindow);
        actionSmoothMeshLaplacian->setObjectName(QString::fromUtf8("actionSmoothMeshLaplacian"));
        actionConvertNormalToHSV = new QAction(MainWindow);
        actionConvertNormalToHSV->setObjectName(QString::fromUtf8("actionConvertNormalToHSV"));
        actionSaveViewportAsObject = new QAction(MainWindow);
        actionSaveViewportAsObject->setObjectName(QString::fromUtf8("actionSaveViewportAsObject"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/CC/images/dbViewportSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveViewportAsObject->setIcon(icon43);
        actionSaveViewportAsObject->setShortcutContext(Qt::ApplicationShortcut);
        actionPickRotationCenter = new QAction(MainWindow);
        actionPickRotationCenter->setObjectName(QString::fromUtf8("actionPickRotationCenter"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/CC/images/ccPickCenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickRotationCenter->setIcon(icon44);
        actionComputeDistancesFromSensor = new QAction(MainWindow);
        actionComputeDistancesFromSensor->setObjectName(QString::fromUtf8("actionComputeDistancesFromSensor"));
        actionBilateralFilter = new QAction(MainWindow);
        actionBilateralFilter->setObjectName(QString::fromUtf8("actionBilateralFilter"));
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/CC/images/ccBilateralFilter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBilateralFilter->setIcon(icon45);
        actionComputeScatteringAngles = new QAction(MainWindow);
        actionComputeScatteringAngles->setObjectName(QString::fromUtf8("actionComputeScatteringAngles"));
        actionToggleActiveSFColorScale = new QAction(MainWindow);
        actionToggleActiveSFColorScale->setObjectName(QString::fromUtf8("actionToggleActiveSFColorScale"));
        actionToggleActiveSFColorScale->setShortcutContext(Qt::ApplicationShortcut);
        actionShowActiveSFPrevious = new QAction(MainWindow);
        actionShowActiveSFPrevious->setObjectName(QString::fromUtf8("actionShowActiveSFPrevious"));
        actionShowActiveSFPrevious->setShortcutContext(Qt::ApplicationShortcut);
        actionShowActiveSFNext = new QAction(MainWindow);
        actionShowActiveSFNext->setObjectName(QString::fromUtf8("actionShowActiveSFNext"));
        actionPointPairsAlign = new QAction(MainWindow);
        actionPointPairsAlign->setObjectName(QString::fromUtf8("actionPointPairsAlign"));
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/CC/images/ccAlign.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointPairsAlign->setIcon(icon46);
        actionAddConstantSF = new QAction(MainWindow);
        actionAddConstantSF->setObjectName(QString::fromUtf8("actionAddConstantSF"));
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/CC/images/ccAddConstSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddConstantSF->setIcon(icon47);
        actionExportCoordToSF = new QAction(MainWindow);
        actionExportCoordToSF->setObjectName(QString::fromUtf8("actionExportCoordToSF"));
        actionSubdivideMesh = new QAction(MainWindow);
        actionSubdivideMesh->setObjectName(QString::fromUtf8("actionSubdivideMesh"));
        actionToggleShowName = new QAction(MainWindow);
        actionToggleShowName->setObjectName(QString::fromUtf8("actionToggleShowName"));
        actionToggleShowName->setShortcutContext(Qt::ApplicationShortcut);
        actionPrimitiveFactory = new QAction(MainWindow);
        actionPrimitiveFactory->setObjectName(QString::fromUtf8("actionPrimitiveFactory"));
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/CC/images/dbMiscGeomSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrimitiveFactory->setIcon(icon48);
        actionToggleMaterials = new QAction(MainWindow);
        actionToggleMaterials->setObjectName(QString::fromUtf8("actionToggleMaterials"));
        actionToggleMaterials->setShortcutContext(Qt::ApplicationShortcut);
        actionEnable3DMouse = new QAction(MainWindow);
        actionEnable3DMouse->setObjectName(QString::fromUtf8("actionEnable3DMouse"));
        actionEnable3DMouse->setCheckable(true);
        actionSetOrthoView = new QAction(MainWindow);
        actionSetOrthoView->setObjectName(QString::fromUtf8("actionSetOrthoView"));
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/CC/images/ccOrthoMode32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetOrthoView->setIcon(icon49);
        actionSetCenteredPerspectiveView = new QAction(MainWindow);
        actionSetCenteredPerspectiveView->setObjectName(QString::fromUtf8("actionSetCenteredPerspectiveView"));
        actionSetCenteredPerspectiveView->setIcon(icon35);
        actionSetViewerPerspectiveView = new QAction(MainWindow);
        actionSetViewerPerspectiveView->setObjectName(QString::fromUtf8("actionSetViewerPerspectiveView"));
        actionSetViewerPerspectiveView->setIcon(icon36);
        actionSetPivotAlwaysOn = new QAction(MainWindow);
        actionSetPivotAlwaysOn->setObjectName(QString::fromUtf8("actionSetPivotAlwaysOn"));
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/CC/images/ccPivotOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotAlwaysOn->setIcon(icon50);
        actionSetPivotRotationOnly = new QAction(MainWindow);
        actionSetPivotRotationOnly->setObjectName(QString::fromUtf8("actionSetPivotRotationOnly"));
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/CC/images/ccPivotAuto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotRotationOnly->setIcon(icon51);
        actionSetPivotOff = new QAction(MainWindow);
        actionSetPivotOff->setObjectName(QString::fromUtf8("actionSetPivotOff"));
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/CC/images/ccPivotOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotOff->setIcon(icon52);
        actionSetViewIso1 = new QAction(MainWindow);
        actionSetViewIso1->setObjectName(QString::fromUtf8("actionSetViewIso1"));
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/CC/images/ccViewIso1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso1->setIcon(icon53);
        actionSetViewIso1->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewIso2 = new QAction(MainWindow);
        actionSetViewIso2->setObjectName(QString::fromUtf8("actionSetViewIso2"));
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/CC/images/ccViewIso2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso2->setIcon(icon54);
        actionSetViewIso2->setShortcutContext(Qt::ApplicationShortcut);
        actionConvertTextureToColor = new QAction(MainWindow);
        actionConvertTextureToColor->setObjectName(QString::fromUtf8("actionConvertTextureToColor"));
        actionConvertTextureToColor->setIcon(icon5);
        actionOpenColorScalesManager = new QAction(MainWindow);
        actionOpenColorScalesManager->setObjectName(QString::fromUtf8("actionOpenColorScalesManager"));
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/CC/images/typeSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenColorScalesManager->setIcon(icon55);
        actionOpenColorScalesManager->setShortcutContext(Qt::ApplicationShortcut);
        actionCrossSection = new QAction(MainWindow);
        actionCrossSection->setObjectName(QString::fromUtf8("actionCrossSection"));
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/CC/images/ccClippingBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrossSection->setIcon(icon56);
        actionEditGlobalShiftAndScale = new QAction(MainWindow);
        actionEditGlobalShiftAndScale->setObjectName(QString::fromUtf8("actionEditGlobalShiftAndScale"));
        actionScalarFieldFromColor = new QAction(MainWindow);
        actionScalarFieldFromColor->setObjectName(QString::fromUtf8("actionScalarFieldFromColor"));
        actionComputeKdTree = new QAction(MainWindow);
        actionComputeKdTree->setObjectName(QString::fromUtf8("actionComputeKdTree"));
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        actionAddIdField = new QAction(MainWindow);
        actionAddIdField->setObjectName(QString::fromUtf8("actionAddIdField"));
        actionFitFacet = new QAction(MainWindow);
        actionFitFacet->setObjectName(QString::fromUtf8("actionFitFacet"));
        actionAdjustZoom = new QAction(MainWindow);
        actionAdjustZoom->setObjectName(QString::fromUtf8("actionAdjustZoom"));
        actionSetSFAsCoord = new QAction(MainWindow);
        actionSetSFAsCoord->setObjectName(QString::fromUtf8("actionSetSFAsCoord"));
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QString::fromUtf8("actionCloseAll"));
        actionEditGlobalScale = new QAction(MainWindow);
        actionEditGlobalScale->setObjectName(QString::fromUtf8("actionEditGlobalScale"));
        actionViewFromSensor = new QAction(MainWindow);
        actionViewFromSensor->setObjectName(QString::fromUtf8("actionViewFromSensor"));
        actionViewFromSensor->setIcon(icon43);
        actionFindBiggestInnerRectangle = new QAction(MainWindow);
        actionFindBiggestInnerRectangle->setObjectName(QString::fromUtf8("actionFindBiggestInnerRectangle"));
        actionCreateGBLSensor = new QAction(MainWindow);
        actionCreateGBLSensor->setObjectName(QString::fromUtf8("actionCreateGBLSensor"));
        actionCreateCameraSensor = new QAction(MainWindow);
        actionCreateCameraSensor->setObjectName(QString::fromUtf8("actionCreateCameraSensor"));
        actionCheckPointsInsideFrustrum = new QAction(MainWindow);
        actionCheckPointsInsideFrustrum->setObjectName(QString::fromUtf8("actionCheckPointsInsideFrustrum"));
        actionProjectUncertainty = new QAction(MainWindow);
        actionProjectUncertainty->setObjectName(QString::fromUtf8("actionProjectUncertainty"));
        actionOrientNormalsMST = new QAction(MainWindow);
        actionOrientNormalsMST->setObjectName(QString::fromUtf8("actionOrientNormalsMST"));
        actionOrientNormalsFM = new QAction(MainWindow);
        actionOrientNormalsFM->setObjectName(QString::fromUtf8("actionOrientNormalsFM"));
        actionCNETest = new QAction(MainWindow);
        actionCNETest->setObjectName(QString::fromUtf8("actionCNETest"));
        actionApproximateDensity = new QAction(MainWindow);
        actionApproximateDensity->setObjectName(QString::fromUtf8("actionApproximateDensity"));
        actionComputeDensity = new QAction(MainWindow);
        actionComputeDensity->setObjectName(QString::fromUtf8("actionComputeDensity"));
        actionRemoveDuplicatePoints = new QAction(MainWindow);
        actionRemoveDuplicatePoints->setObjectName(QString::fromUtf8("actionRemoveDuplicatePoints"));
        actionCrop = new QAction(MainWindow);
        actionCrop->setObjectName(QString::fromUtf8("actionCrop"));
        actionConvertNormalToDipDir = new QAction(MainWindow);
        actionConvertNormalToDipDir->setObjectName(QString::fromUtf8("actionConvertNormalToDipDir"));
        actionExportCloudsInfo = new QAction(MainWindow);
        actionExportCloudsInfo->setObjectName(QString::fromUtf8("actionExportCloudsInfo"));
        actionInterpolateColors = new QAction(MainWindow);
        actionInterpolateColors->setObjectName(QString::fromUtf8("actionInterpolateColors"));
        actionDistanceToBestFitQuadric3D = new QAction(MainWindow);
        actionDistanceToBestFitQuadric3D->setObjectName(QString::fromUtf8("actionDistanceToBestFitQuadric3D"));
        actionDisplayGLFiltersTools = new QAction(MainWindow);
        actionDisplayGLFiltersTools->setObjectName(QString::fromUtf8("actionDisplayGLFiltersTools"));
        actionDisplayGLFiltersTools->setCheckable(true);
        actionDisplayGLFiltersTools->setChecked(true);
        actionChangeColorLevels = new QAction(MainWindow);
        actionChangeColorLevels->setObjectName(QString::fromUtf8("actionChangeColorLevels"));
        actionResetGUIElementsPos = new QAction(MainWindow);
        actionResetGUIElementsPos->setObjectName(QString::fromUtf8("actionResetGUIElementsPos"));
        actionConvertToRandomRGB = new QAction(MainWindow);
        actionConvertToRandomRGB->setObjectName(QString::fromUtf8("actionConvertToRandomRGB"));
        actionNoiseFilter = new QAction(MainWindow);
        actionNoiseFilter->setObjectName(QString::fromUtf8("actionNoiseFilter"));
        actionComputeStatParams2 = new QAction(MainWindow);
        actionComputeStatParams2->setObjectName(QString::fromUtf8("actionComputeStatParams2"));
        actionComputeStatParams2->setIcon(icon21);
        actionMeasureMeshVolume = new QAction(MainWindow);
        actionMeasureMeshVolume->setObjectName(QString::fromUtf8("actionMeasureMeshVolume"));
        actionFlagMeshVetices = new QAction(MainWindow);
        actionFlagMeshVetices->setObjectName(QString::fromUtf8("actionFlagMeshVetices"));
        actionToggleActivation = new QAction(MainWindow);
        actionToggleActivation->setObjectName(QString::fromUtf8("actionToggleActivation"));
        actionToggleActivation->setShortcutContext(Qt::ApplicationShortcut);
        actionLockRotationVertAxis = new QAction(MainWindow);
        actionLockRotationVertAxis->setObjectName(QString::fromUtf8("actionLockRotationVertAxis"));
        actionLockRotationVertAxis->setCheckable(true);
        actionLockRotationVertAxis->setShortcutContext(Qt::ApplicationShortcut);
        actionCreateCloudFromEntCenters = new QAction(MainWindow);
        actionCreateCloudFromEntCenters->setObjectName(QString::fromUtf8("actionCreateCloudFromEntCenters"));
        actionComputeBestICPRmsMatrix = new QAction(MainWindow);
        actionComputeBestICPRmsMatrix->setObjectName(QString::fromUtf8("actionComputeBestICPRmsMatrix"));
        actionEnterBubbleViewMode = new QAction(MainWindow);
        actionEnterBubbleViewMode->setObjectName(QString::fromUtf8("actionEnterBubbleViewMode"));
        actionExtractSections = new QAction(MainWindow);
        actionExtractSections->setObjectName(QString::fromUtf8("actionExtractSections"));
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtractSections->setIcon(icon57);
        actionConvertPolylinesToMesh = new QAction(MainWindow);
        actionConvertPolylinesToMesh->setObjectName(QString::fromUtf8("actionConvertPolylinesToMesh"));
        actionLevel = new QAction(MainWindow);
        actionLevel->setObjectName(QString::fromUtf8("actionLevel"));
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/CC/images/ccLevel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLevel->setIcon(icon58);
        actionFitSphere = new QAction(MainWindow);
        actionFitSphere->setObjectName(QString::fromUtf8("actionFitSphere"));
        actionMatchScales = new QAction(MainWindow);
        actionMatchScales->setObjectName(QString::fromUtf8("actionMatchScales"));
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionDistanceMapToMesh = new QAction(MainWindow);
        actionDistanceMapToMesh->setObjectName(QString::fromUtf8("actionDistanceMapToMesh"));
        actionSORFilter = new QAction(MainWindow);
        actionSORFilter->setObjectName(QString::fromUtf8("actionSORFilter"));
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/CC/images/ccSORFilter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSORFilter->setIcon(icon59);
        actionEnableStereo = new QAction(MainWindow);
        actionEnableStereo->setObjectName(QString::fromUtf8("actionEnableStereo"));
        actionEnableStereo->setCheckable(true);
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/CC/images/ccStereo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnableStereo->setIcon(icon60);
        actionComputePointsVisibility = new QAction(MainWindow);
        actionComputePointsVisibility->setObjectName(QString::fromUtf8("actionComputePointsVisibility"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menu3DMouse = new QMenu(menuFile);
        menu3DMouse->setObjectName(QString::fromUtf8("menu3DMouse"));
        QIcon icon61;
        icon61.addFile(QString::fromUtf8(":/CC/images/im3DxLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu3DMouse->setIcon(icon61);
        menuDisplay = new QMenu(menubar);
        menuDisplay->setObjectName(QString::fromUtf8("menuDisplay"));
        menuToolbars = new QMenu(menuDisplay);
        menuToolbars->setObjectName(QString::fromUtf8("menuToolbars"));
        menuLights = new QMenu(menuDisplay);
        menuLights->setObjectName(QString::fromUtf8("menuLights"));
        QIcon icon62;
        icon62.addFile(QString::fromUtf8(":/CC/images/ccSunLight.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLights->setIcon(icon62);
        menuShadersAndFilters = new QMenu(menuDisplay);
        menuShadersAndFilters->setObjectName(QString::fromUtf8("menuShadersAndFilters"));
        menuActiveScalarField = new QMenu(menuDisplay);
        menuActiveScalarField->setObjectName(QString::fromUtf8("menuActiveScalarField"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuScalarFields = new QMenu(menuEdit);
        menuScalarFields->setObjectName(QString::fromUtf8("menuScalarFields"));
        menuColors = new QMenu(menuEdit);
        menuColors->setObjectName(QString::fromUtf8("menuColors"));
        menuNormals = new QMenu(menuEdit);
        menuNormals->setObjectName(QString::fromUtf8("menuNormals"));
        menuOrientNormals = new QMenu(menuNormals);
        menuOrientNormals->setObjectName(QString::fromUtf8("menuOrientNormals"));
        menuConvert_to = new QMenu(menuNormals);
        menuConvert_to->setObjectName(QString::fromUtf8("menuConvert_to"));
        menuOctree = new QMenu(menuEdit);
        menuOctree->setObjectName(QString::fromUtf8("menuOctree"));
        menuMesh = new QMenu(menuEdit);
        menuMesh->setObjectName(QString::fromUtf8("menuMesh"));
        menuMeshScalarField = new QMenu(menuMesh);
        menuMeshScalarField->setObjectName(QString::fromUtf8("menuMeshScalarField"));
        menuSensors = new QMenu(menuEdit);
        menuSensors->setObjectName(QString::fromUtf8("menuSensors"));
        menuGroundBasedLidar = new QMenu(menuSensors);
        menuGroundBasedLidar->setObjectName(QString::fromUtf8("menuGroundBasedLidar"));
        QIcon icon63;
        icon63.addFile(QString::fromUtf8(":/CC/images/dbGBLSensorSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuGroundBasedLidar->setIcon(icon63);
        menuCameraSensor = new QMenu(menuSensors);
        menuCameraSensor->setObjectName(QString::fromUtf8("menuCameraSensor"));
        QIcon icon64;
        icon64.addFile(QString::fromUtf8(":/CC/images/dbCamSensorSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuCameraSensor->setIcon(icon64);
        menuToggle = new QMenu(menuEdit);
        menuToggle->setObjectName(QString::fromUtf8("menuToggle"));
        menu3DViews = new QMenu(menubar);
        menu3DViews->setObjectName(QString::fromUtf8("menu3DViews"));
        menuPlugins = new QMenu(menubar);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        menuPlugins->setEnabled(false);
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuSegmentation = new QMenu(menuTools);
        menuSegmentation->setObjectName(QString::fromUtf8("menuSegmentation"));
        menuProjection = new QMenu(menuTools);
        menuProjection->setObjectName(QString::fromUtf8("menuProjection"));
        menuStatistics = new QMenu(menuTools);
        menuStatistics->setObjectName(QString::fromUtf8("menuStatistics"));
        menuDistances = new QMenu(menuTools);
        menuDistances->setObjectName(QString::fromUtf8("menuDistances"));
        menuRegistration = new QMenu(menuTools);
        menuRegistration->setObjectName(QString::fromUtf8("menuRegistration"));
        menuOther = new QMenu(menuTools);
        menuOther->setObjectName(QString::fromUtf8("menuOther"));
        menuSandBox = new QMenu(menuTools);
        menuSandBox->setObjectName(QString::fromUtf8("menuSandBox"));
        menuFit = new QMenu(menuTools);
        menuFit->setObjectName(QString::fromUtf8("menuFit"));
        menuClean = new QMenu(menuTools);
        menuClean->setObjectName(QString::fromUtf8("menuClean"));
        MainWindow->setMenuBar(menubar);
        DockableDBTree = new QDockWidget(MainWindow);
        DockableDBTree->setObjectName(QString::fromUtf8("DockableDBTree"));
        DockableDBTree->setMinimumSize(QSize(135, 172));
        DockableDBTree->setFloating(false);
        DockableDBTree->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        vboxLayout = new QVBoxLayout(dockWidgetContents);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        dbTreeView = new ccCustomQTreeView(dockWidgetContents);
        dbTreeView->setObjectName(QString::fromUtf8("dbTreeView"));
        dbTreeView->setDragEnabled(true);
        dbTreeView->setDragDropMode(QAbstractItemView::InternalMove);
        dbTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        dbTreeView->setUniformRowHeights(true);

        vboxLayout->addWidget(dbTreeView);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 3, 0, 3);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        checkBoxCameraLink = new QCheckBox(groupBox);
        checkBoxCameraLink->setObjectName(QString::fromUtf8("checkBoxCameraLink"));

        hboxLayout->addWidget(checkBoxCameraLink);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(groupBox);

        DockableDBTree->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), DockableDBTree);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBarView = new QToolBar(MainWindow);
        toolBarView->setObjectName(QString::fromUtf8("toolBarView"));
        QIcon icon65;
        icon65.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        toolBarView->setWindowIcon(icon65);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBarView);
        DockableConsole = new QDockWidget(MainWindow);
        DockableConsole->setObjectName(QString::fromUtf8("DockableConsole"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DockableConsole->sizePolicy().hasHeightForWidth());
        DockableConsole->setSizePolicy(sizePolicy1);
        DockableConsole->setMinimumSize(QSize(91, 128));
        DockableConsole->setMaximumSize(QSize(524287, 524287));
        DockableConsole->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
        DockableConsole->setAllowedAreas(Qt::BottomDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        vboxLayout2 = new QVBoxLayout(dockWidgetContents_2);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        consoleWidget = new QListWidget(dockWidgetContents_2);
        consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(consoleWidget->sizePolicy().hasHeightForWidth());
        consoleWidget->setSizePolicy(sizePolicy2);
        consoleWidget->setMinimumSize(QSize(0, 80));
        consoleWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        consoleWidget->setProperty("showDropIndicator", QVariant(false));
        consoleWidget->setAlternatingRowColors(true);
        consoleWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        vboxLayout2->addWidget(consoleWidget);

        DockableConsole->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), DockableConsole);
        toolBarMainTools = new QToolBar(MainWindow);
        toolBarMainTools->setObjectName(QString::fromUtf8("toolBarMainTools"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarMainTools);
        toolBarSFTools = new QToolBar(MainWindow);
        toolBarSFTools->setObjectName(QString::fromUtf8("toolBarSFTools"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarSFTools);
        toolBarPluginTools = new QToolBar(MainWindow);
        toolBarPluginTools->setObjectName(QString::fromUtf8("toolBarPluginTools"));
        toolBarPluginTools->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarPluginTools);
        DockableProperties = new QDockWidget(MainWindow);
        DockableProperties->setObjectName(QString::fromUtf8("DockableProperties"));
        DockableProperties->setMinimumSize(QSize(109, 135));
        DockableProperties->setFloating(false);
        DockableProperties->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        vboxLayout3 = new QVBoxLayout(dockWidgetContents_4);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        propertiesTreeView = new QTreeView(dockWidgetContents_4);
        propertiesTreeView->setObjectName(QString::fromUtf8("propertiesTreeView"));
        propertiesTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        propertiesTreeView->setProperty("showDropIndicator", QVariant(false));
        propertiesTreeView->setAlternatingRowColors(true);
        propertiesTreeView->setSelectionMode(QAbstractItemView::NoSelection);
        propertiesTreeView->setRootIsDecorated(false);
        propertiesTreeView->setItemsExpandable(false);
        propertiesTreeView->setAllColumnsShowFocus(true);
        propertiesTreeView->setExpandsOnDoubleClick(false);

        vboxLayout3->addWidget(propertiesTreeView);

        DockableProperties->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), DockableProperties);
        toolBarGLFilters = new QToolBar(MainWindow);
        toolBarGLFilters->setObjectName(QString::fromUtf8("toolBarGLFilters"));
        toolBarGLFilters->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarGLFilters);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuDisplay->menuAction());
        menubar->addAction(menuPlugins->menuAction());
        menubar->addAction(menu3DViews->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionPrimitiveFactory);
        menuFile->addSeparator();
        menuFile->addAction(menu3DMouse->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionCloseAll);
        menuFile->addAction(actionQuit);
        menu3DMouse->addAction(actionEnable3DMouse);
        menuDisplay->addAction(actionFullScreen);
        menuDisplay->addAction(actionRefresh);
        menuDisplay->addAction(actionToggleCenteredPerspective);
        menuDisplay->addAction(actionToggleViewerBasedPerspective);
        menuDisplay->addAction(actionLockRotationVertAxis);
        menuDisplay->addAction(actionEnterBubbleViewMode);
        menuDisplay->addSeparator();
        menuDisplay->addAction(actionRenderToFile);
        menuDisplay->addAction(actionDisplayOptions);
        menuDisplay->addAction(actionEditCamera);
        menuDisplay->addAction(actionSaveViewportAsObject);
        menuDisplay->addAction(actionAdjustZoom);
        menuDisplay->addAction(actionTestFrameRate);
        menuDisplay->addSeparator();
        menuDisplay->addAction(menuLights->menuAction());
        menuDisplay->addAction(menuShadersAndFilters->menuAction());
        menuDisplay->addAction(menuActiveScalarField->menuAction());
        menuDisplay->addSeparator();
        menuDisplay->addAction(actionConsole);
        menuDisplay->addAction(menuToolbars->menuAction());
        menuDisplay->addAction(actionResetGUIElementsPos);
        menuToolbars->addAction(actionDisplayMainTools);
        menuToolbars->addAction(actionDisplayScalarFieldsTools);
        menuToolbars->addAction(actionDisplayViewTools);
        menuToolbars->addAction(actionDisplayPluginTools);
        menuToolbars->addAction(actionDisplayGLFiltersTools);
        menuLights->addAction(actionToggleSunLight);
        menuLights->addAction(actionToggleCustomLight);
        menuShadersAndFilters->addAction(actionLoadShader);
        menuShadersAndFilters->addAction(actionDeleteShader);
        menuShadersAndFilters->addSeparator();
        menuShadersAndFilters->addAction(actionNoFilter);
        menuActiveScalarField->addAction(actionToggleActiveSFColorScale);
        menuActiveScalarField->addAction(actionShowActiveSFPrevious);
        menuActiveScalarField->addAction(actionShowActiveSFNext);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutPlugins);
        menuEdit->addAction(menuColors->menuAction());
        menuEdit->addAction(menuNormals->menuAction());
        menuEdit->addAction(menuOctree->menuAction());
        menuEdit->addAction(menuMesh->menuAction());
        menuEdit->addAction(menuSensors->menuAction());
        menuEdit->addAction(menuScalarFields->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionClone);
        menuEdit->addAction(actionMerge);
        menuEdit->addAction(actionSubsample);
        menuEdit->addAction(actionApplyTransformation);
        menuEdit->addAction(actionApplyScale);
        menuEdit->addSeparator();
        menuEdit->addAction(actionTranslateRotate);
        menuEdit->addAction(actionSegment);
        menuEdit->addAction(actionCrop);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditGlobalShiftAndScale);
        menuEdit->addSeparator();
        menuEdit->addAction(menuToggle->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete);
        menuScalarFields->addAction(actionShowHistogram);
        menuScalarFields->addAction(actionComputeStatParams);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionSFGradient);
        menuScalarFields->addAction(actionGaussianFilter);
        menuScalarFields->addAction(actionBilateralFilter);
        menuScalarFields->addAction(actionFilterByValue);
        menuScalarFields->addAction(actionConvertToRGB);
        menuScalarFields->addAction(actionConvertToRandomRGB);
        menuScalarFields->addAction(actionRenameSF);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionAddConstantSF);
        menuScalarFields->addAction(actionAddIdField);
        menuScalarFields->addAction(actionExportCoordToSF);
        menuScalarFields->addAction(actionSetSFAsCoord);
        menuScalarFields->addAction(actionScalarFieldArithmetic);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionOpenColorScalesManager);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionDeleteScalarField);
        menuScalarFields->addAction(actionDeleteAllSF);
        menuScalarFields->addSeparator();
        menuColors->addAction(actionSetUniqueColor);
        menuColors->addAction(actionColorize);
        menuColors->addAction(actionChangeColorLevels);
        menuColors->addAction(actionSetColorGradient);
        menuColors->addAction(actionScalarFieldFromColor);
        menuColors->addAction(actionInterpolateColors);
        menuColors->addSeparator();
        menuColors->addAction(actionClearColor);
        menuNormals->addAction(actionComputeNormals);
        menuNormals->addAction(actionInvertNormals);
        menuNormals->addAction(menuOrientNormals->menuAction());
        menuNormals->addAction(menuConvert_to->menuAction());
        menuNormals->addSeparator();
        menuNormals->addAction(actionClearNormals);
        menuOrientNormals->addAction(actionOrientNormalsMST);
        menuOrientNormals->addAction(actionOrientNormalsFM);
        menuConvert_to->addAction(actionConvertNormalToHSV);
        menuConvert_to->addAction(actionConvertNormalToDipDir);
        menuOctree->addAction(actionComputeOctree);
        menuOctree->addSeparator();
        menuOctree->addAction(actionResampleWithOctree);
        menuMesh->addAction(actionComputeMeshAA);
        menuMesh->addAction(actionComputeMeshLS);
        menuMesh->addSeparator();
        menuMesh->addAction(actionConvertTextureToColor);
        menuMesh->addAction(actionSamplePoints);
        menuMesh->addAction(actionSmoothMeshLaplacian);
        menuMesh->addAction(actionSubdivideMesh);
        menuMesh->addSeparator();
        menuMesh->addAction(actionMeasureMeshSurface);
        menuMesh->addAction(actionMeasureMeshVolume);
        menuMesh->addAction(actionFlagMeshVetices);
        menuMesh->addSeparator();
        menuMesh->addAction(menuMeshScalarField->menuAction());
        menuMeshScalarField->addAction(actionSmoothMeshSF);
        menuMeshScalarField->addAction(actionEnhanceMeshSF);
        menuSensors->addAction(actionModifySensor);
        menuSensors->addSeparator();
        menuSensors->addAction(menuGroundBasedLidar->menuAction());
        menuSensors->addAction(menuCameraSensor->menuAction());
        menuSensors->addSeparator();
        menuSensors->addAction(actionViewFromSensor);
        menuSensors->addAction(actionComputeDistancesFromSensor);
        menuSensors->addAction(actionComputeScatteringAngles);
        menuGroundBasedLidar->addAction(actionCreateGBLSensor);
        menuGroundBasedLidar->addSeparator();
        menuGroundBasedLidar->addAction(actionShowDepthBuffer);
        menuGroundBasedLidar->addAction(actionExportDepthBuffer);
        menuGroundBasedLidar->addAction(actionComputePointsVisibility);
        menuCameraSensor->addAction(actionCreateCameraSensor);
        menuCameraSensor->addSeparator();
        menuCameraSensor->addAction(actionProjectUncertainty);
        menuCameraSensor->addAction(actionCheckPointsInsideFrustrum);
        menuToggle->addAction(actionToggleActivation);
        menuToggle->addAction(actionToggleVisibility);
        menuToggle->addAction(actionToggleColors);
        menuToggle->addAction(actionToggleNormals);
        menuToggle->addAction(actionToggleSF);
        menuToggle->addAction(actionToggleMaterials);
        menuToggle->addAction(actionToggleShowName);
        menu3DViews->addAction(actionNew3DView);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionZoomIn);
        menu3DViews->addAction(actionZoomOut);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionClose3DView);
        menu3DViews->addAction(actionCloseAll3DViews);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionTile3DViews);
        menu3DViews->addAction(actionCascade3DViews);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionNext3DView);
        menu3DViews->addAction(actionPrevious3DView);
        menuTools->addAction(menuClean->menuAction());
        menuTools->addAction(menuProjection->menuAction());
        menuTools->addAction(menuRegistration->menuAction());
        menuTools->addAction(menuDistances->menuAction());
        menuTools->addAction(menuStatistics->menuAction());
        menuTools->addAction(menuSegmentation->menuAction());
        menuTools->addAction(menuFit->menuAction());
        menuTools->addAction(menuOther->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(actionLevel);
        menuTools->addAction(actionPointPicking);
        menuTools->addAction(actionPointListPicking);
        menuTools->addSeparator();
        menuTools->addAction(menuSandBox->menuAction());
        menuSegmentation->addAction(actionLabelConnectedComponents);
        menuSegmentation->addAction(actionCrossSection);
        menuSegmentation->addAction(actionExtractSections);
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(actionKMeans);
        menuSegmentation->addAction(actionFrontPropagation);
        menuProjection->addAction(actionUnroll);
        menuProjection->addAction(actionRasterize);
        menuProjection->addAction(actionConvertPolylinesToMesh);
        menuProjection->addAction(actionExportCoordToSF);
        menuStatistics->addAction(actionStatisticalTest);
        menuStatistics->addAction(actionComputeStatParams2);
        menuDistances->addAction(actionCloudCloudDist);
        menuDistances->addAction(actionCloudMeshDist);
        menuDistances->addAction(actionCPS);
        menuRegistration->addAction(actionMatchBBCenters);
        menuRegistration->addAction(actionMatchScales);
        menuRegistration->addAction(actionPointPairsAlign);
        menuRegistration->addAction(actionRegister);
        menuOther->addAction(actionComputeDensity);
        menuOther->addAction(actionCurvature);
        menuOther->addAction(actionRoughness);
        menuOther->addAction(actionRemoveDuplicatePoints);
        menuSandBox->addAction(actionComputeKdTree);
        menuSandBox->addSeparator();
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionComputeBestFitBB);
        menuSandBox->addAction(actionDistanceToBestFitQuadric3D);
        menuSandBox->addAction(actionDistanceMapToMesh);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionAlign);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionSNETest);
        menuSandBox->addAction(actionCNETest);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionFindBiggestInnerRectangle);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionExportCloudsInfo);
        menuSandBox->addAction(actionCreateCloudFromEntCenters);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionComputeBestICPRmsMatrix);
        menuFit->addAction(actionFitPlane);
        menuFit->addAction(actionFitSphere);
        menuFit->addAction(actionFitFacet);
        menuFit->addAction(actionFitQuadric);
        menuClean->addAction(actionSORFilter);
        menuClean->addAction(actionNoiseFilter);
        toolBarView->addAction(actionDisplayOptions);
        toolBarView->addAction(actionEditCamera);
        toolBarView->addAction(actionGlobalZoom);
        toolBarView->addAction(actionPickRotationCenter);
        toolBarView->addAction(actionLevel);
        toolBarView->addAction(actionZoomAndCenter);
        toolBarView->addAction(actionSetViewTop);
        toolBarView->addAction(actionSetViewFront);
        toolBarView->addAction(actionSetViewLeft);
        toolBarView->addAction(actionSetViewBack);
        toolBarView->addAction(actionSetViewRight);
        toolBarView->addAction(actionSetViewBottom);
        toolBarView->addAction(actionSetViewIso1);
        toolBarView->addAction(actionSetViewIso2);
        toolBarView->addAction(actionEnableStereo);
        toolBarMainTools->addAction(actionOpen);
        toolBarMainTools->addAction(actionSave);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionPointPicking);
        toolBarMainTools->addAction(actionPointListPicking);
        toolBarMainTools->addAction(actionClone);
        toolBarMainTools->addAction(actionMerge);
        toolBarMainTools->addAction(actionDelete);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionPointPairsAlign);
        toolBarMainTools->addAction(actionRegister);
        toolBarMainTools->addAction(actionSubsample);
        toolBarMainTools->addAction(actionSamplePoints);
        toolBarMainTools->addAction(actionCloudCloudDist);
        toolBarMainTools->addAction(actionCloudMeshDist);
        toolBarMainTools->addAction(actionLabelConnectedComponents);
        toolBarMainTools->addAction(actionPrimitiveFactory);
        toolBarMainTools->addAction(actionRasterize);
        toolBarMainTools->addAction(actionSORFilter);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionSegment);
        toolBarMainTools->addAction(actionTranslateRotate);
        toolBarMainTools->addAction(actionCrossSection);
        toolBarMainTools->addAction(actionExtractSections);
        toolBarSFTools->addAction(actionShowHistogram);
        toolBarSFTools->addAction(actionComputeStatParams);
        toolBarSFTools->addAction(actionFilterByValue);
        toolBarSFTools->addAction(actionDeleteScalarField);
        toolBarSFTools->addAction(actionAddConstantSF);
        toolBarSFTools->addAction(actionScalarFieldArithmetic);
        toolBarSFTools->addAction(actionOpenColorScalesManager);
        toolBarGLFilters->addAction(actionNoFilter);
        toolBarGLFilters->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionConsole, SIGNAL(toggled(bool)), DockableConsole, SLOT(setVisible(bool)));
        QObject::connect(DockableConsole, SIGNAL(visibilityChanged(bool)), actionConsole, SLOT(setChecked(bool)));
        QObject::connect(actionDisplayMainTools, SIGNAL(toggled(bool)), toolBarMainTools, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayScalarFieldsTools, SIGNAL(toggled(bool)), toolBarSFTools, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayViewTools, SIGNAL(toggled(bool)), toolBarView, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayPluginTools, SIGNAL(toggled(bool)), toolBarPluginTools, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayGLFiltersTools, SIGNAL(toggled(bool)), toolBarGLFilters, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CloudCompare", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setIconText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save current entity", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("MainWindow", "Save current entity", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionQuit->setStatusTip(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionFullScreen->setText(QApplication::translate("MainWindow", "&Full screen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFullScreen->setToolTip(QApplication::translate("MainWindow", "Switch to full screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFullScreen->setStatusTip(QApplication::translate("MainWindow", "Switch to full screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionFullScreen->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionFullScreen->setShortcut(QApplication::translate("MainWindow", "F11", 0, QApplication::UnicodeUTF8));
        actionDisplayOptions->setText(QApplication::translate("MainWindow", "Display settings", 0, QApplication::UnicodeUTF8));
        actionDisplayOptions->setIconText(QApplication::translate("MainWindow", "Set Lights && Materials", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisplayOptions->setToolTip(QApplication::translate("MainWindow", "Change lighting and default materials parameters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDisplayOptions->setStatusTip(QApplication::translate("MainWindow", "Change lighting and default materials parameters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionHelp->setText(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionHelp->setStatusTip(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionHelp->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About ...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionAbout->setStatusTip(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetUniqueColor->setText(QApplication::translate("MainWindow", "Set unique", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetUniqueColor->setToolTip(QApplication::translate("MainWindow", "Set a unique color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetUniqueColor->setStatusTip(QApplication::translate("MainWindow", "Set a unique color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetUniqueColor->setShortcut(QApplication::translate("MainWindow", "Alt+C", 0, QApplication::UnicodeUTF8));
        actionSetColorGradient->setText(QApplication::translate("MainWindow", "Height Ramp", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetColorGradient->setToolTip(QApplication::translate("MainWindow", "Apply a color ramp along X, Y or Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetColorGradient->setStatusTip(QApplication::translate("MainWindow", "Apply a color ramp along X, Y or Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionComputeNormals->setText(QApplication::translate("MainWindow", "Compute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeNormals->setToolTip(QApplication::translate("MainWindow", "Compute unsigned normals (least squares approx.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeNormals->setStatusTip(QApplication::translate("MainWindow", "Compute unsigned normals (least squares approx.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionInvertNormals->setText(QApplication::translate("MainWindow", "Invert", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInvertNormals->setToolTip(QApplication::translate("MainWindow", "Invert normals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionInvertNormals->setStatusTip(QApplication::translate("MainWindow", "Invert normals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionComputeOctree->setText(QApplication::translate("MainWindow", "Compute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeOctree->setToolTip(QApplication::translate("MainWindow", "Compute octree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeOctree->setStatusTip(QApplication::translate("MainWindow", "Compute octree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionConsole->setText(QApplication::translate("MainWindow", "Console", 0, QApplication::UnicodeUTF8));
        actionConsole->setShortcut(QApplication::translate("MainWindow", "F8", 0, QApplication::UnicodeUTF8));
        actionClose3DView->setText(QApplication::translate("MainWindow", "Cl&ose", 0, QApplication::UnicodeUTF8));
        actionClose3DView->setShortcut(QApplication::translate("MainWindow", "Ctrl+F4", 0, QApplication::UnicodeUTF8));
        actionCloseAll3DViews->setText(QApplication::translate("MainWindow", "Close &All", 0, QApplication::UnicodeUTF8));
        actionTile3DViews->setText(QApplication::translate("MainWindow", "&Tile", 0, QApplication::UnicodeUTF8));
        actionCascade3DViews->setText(QApplication::translate("MainWindow", "&Cascade", 0, QApplication::UnicodeUTF8));
        actionPrevious3DView->setText(QApplication::translate("MainWindow", "Pre&vious", 0, QApplication::UnicodeUTF8));
        actionNext3DView->setText(QApplication::translate("MainWindow", "Ne&xt", 0, QApplication::UnicodeUTF8));
        actionNew3DView->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionNew3DView->setShortcut(QApplication::translate("MainWindow", "Ctrl+F3", 0, QApplication::UnicodeUTF8));
        actionClone->setText(QApplication::translate("MainWindow", "Clone", 0, QApplication::UnicodeUTF8));
        actionMerge->setText(QApplication::translate("MainWindow", "Merge", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMerge->setToolTip(QApplication::translate("MainWindow", "Merge multiple clouds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Del", 0, QApplication::UnicodeUTF8));
        actionRegister->setText(QApplication::translate("MainWindow", "Fine registration (ICP)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegister->setToolTip(QApplication::translate("MainWindow", "Finely registers already (roughly) aligned entities (clouds or meshes)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRegister->setStatusTip(QApplication::translate("MainWindow", "Finely registers already (roughly) aligned entities (clouds or meshes)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionCloudCloudDist->setText(QApplication::translate("MainWindow", "Cloud/Cloud Dist.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCloudCloudDist->setToolTip(QApplication::translate("MainWindow", "Compute cloud/cloud distance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCloudCloudDist->setStatusTip(QApplication::translate("MainWindow", "Compute cloud/cloud distance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionCloudMeshDist->setText(QApplication::translate("MainWindow", "Cloud/Mesh Dist", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCloudMeshDist->setToolTip(QApplication::translate("MainWindow", "Compute cloud/mesh distance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCloudMeshDist->setStatusTip(QApplication::translate("MainWindow", "Compute cloud/mesh distance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionStatisticalTest->setText(QApplication::translate("MainWindow", "Local Statistical test", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStatisticalTest->setToolTip(QApplication::translate("MainWindow", "Apply a local statistical test to separate noise from true differences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionStatisticalTest->setStatusTip(QApplication::translate("MainWindow", "Apply a local statistical test to separate noise from true differences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSamplePoints->setText(QApplication::translate("MainWindow", "Sample Points", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSamplePoints->setToolTip(QApplication::translate("MainWindow", "Sample points on a mesh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSamplePoints->setStatusTip(QApplication::translate("MainWindow", "Sample points on a mesh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionLabelConnectedComponents->setText(QApplication::translate("MainWindow", "Label Connected Comp.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLabelConnectedComponents->setToolTip(QApplication::translate("MainWindow", "Label connected components", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLabelConnectedComponents->setStatusTip(QApplication::translate("MainWindow", "Label connected components", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSegment->setText(QApplication::translate("MainWindow", "Segment", 0, QApplication::UnicodeUTF8));
        actionTranslateRotate->setText(QApplication::translate("MainWindow", "Translate/rotate", 0, QApplication::UnicodeUTF8));
        actionShowHistogram->setText(QApplication::translate("MainWindow", "Show histogram", 0, QApplication::UnicodeUTF8));
        actionComputeStatParams->setText(QApplication::translate("MainWindow", "Compute stat. params", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeStatParams->setToolTip(QApplication::translate("MainWindow", "Fits a statistical model on the active scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeStatParams->setStatusTip(QApplication::translate("MainWindow", "Fits a statistical model on the active scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionFilterByValue->setText(QApplication::translate("MainWindow", "Filter By Value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFilterByValue->setToolTip(QApplication::translate("MainWindow", "Filter points by value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFilterByValue->setStatusTip(QApplication::translate("MainWindow", "Filter points by value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionGaussianFilter->setText(QApplication::translate("MainWindow", "Gaussian filter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGaussianFilter->setToolTip(QApplication::translate("MainWindow", "Compute gaussian filter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionGaussianFilter->setStatusTip(QApplication::translate("MainWindow", "Compute gaussian filter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDeleteScalarField->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionDeleteScalarField->setIconText(QApplication::translate("MainWindow", "Delete Scalar Field", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDeleteScalarField->setToolTip(QApplication::translate("MainWindow", "Delete current scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDeleteScalarField->setStatusTip(QApplication::translate("MainWindow", "Delete current scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionScalarFieldArithmetic->setText(QApplication::translate("MainWindow", "Arithmetic", 0, QApplication::UnicodeUTF8));
        actionScalarFieldArithmetic->setIconText(QApplication::translate("MainWindow", "SF arithmetic", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScalarFieldArithmetic->setToolTip(QApplication::translate("MainWindow", "Add, substract, multiply or divide two scalar fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionScalarFieldArithmetic->setStatusTip(QApplication::translate("MainWindow", "Add, substract, multiply or divide two scalar fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionColorize->setText(QApplication::translate("MainWindow", "Colorize", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColorize->setToolTip(QApplication::translate("MainWindow", "Colorize entity (lightness values are unchanged)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionColorize->setStatusTip(QApplication::translate("MainWindow", "Colorize entity (lightness values are unchanged)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSmoothMeshSF->setText(QApplication::translate("MainWindow", "Smooth", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSmoothMeshSF->setToolTip(QApplication::translate("MainWindow", "Smooth mesh scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSmoothMeshSF->setStatusTip(QApplication::translate("MainWindow", "Smooth mesh scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionEnhanceMeshSF->setText(QApplication::translate("MainWindow", "Enhance", 0, QApplication::UnicodeUTF8));
        actionEnhanceMeshSF->setIconText(QApplication::translate("MainWindow", "Enhance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEnhanceMeshSF->setToolTip(QApplication::translate("MainWindow", "Enhance Scalar Field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionEnhanceMeshSF->setStatusTip(QApplication::translate("MainWindow", "Enhance Scalar Field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClearColor->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClearColor->setToolTip(QApplication::translate("MainWindow", "Clear colors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionClearColor->setStatusTip(QApplication::translate("MainWindow", "Clear colors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClearNormals->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        actionClearNormals->setIconText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClearNormals->setToolTip(QApplication::translate("MainWindow", "Delete normals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionClearNormals->setStatusTip(QApplication::translate("MainWindow", "Delete normals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionResampleWithOctree->setText(QApplication::translate("MainWindow", "Resample", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionResampleWithOctree->setToolTip(QApplication::translate("MainWindow", "Resample entity with octree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionResampleWithOctree->setStatusTip(QApplication::translate("MainWindow", "Resample entity with octree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionComputeMeshAA->setText(QApplication::translate("MainWindow", "Delaunay 2.5D (XY plane)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeMeshAA->setToolTip(QApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the XY plane", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeMeshAA->setStatusTip(QApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the XY plane", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionComputeMeshLS->setText(QApplication::translate("MainWindow", "Delaunay 2.5D (best fitting plane)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeMeshLS->setToolTip(QApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the (least squares) best fitting plane", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeMeshLS->setStatusTip(QApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the (least squares) best fitting plane", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionMeasureMeshSurface->setText(QApplication::translate("MainWindow", "Measure surface", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMeasureMeshSurface->setToolTip(QApplication::translate("MainWindow", "Measure mesh surface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMeasureMeshSurface->setStatusTip(QApplication::translate("MainWindow", "Measure mesh surface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionCPS->setText(QApplication::translate("MainWindow", "Closest Point Set", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCPS->setToolTip(QApplication::translate("MainWindow", "Compute closest point set", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCPS->setStatusTip(QApplication::translate("MainWindow", "Compute closest point set", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDeleteAllSF->setText(QApplication::translate("MainWindow", "Delete all (!)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDeleteAllSF->setToolTip(QApplication::translate("MainWindow", "Delete all scalar fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDeleteAllSF->setStatusTip(QApplication::translate("MainWindow", "Delete all scalar fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionMultiplySF->setText(QApplication::translate("MainWindow", "Multiply", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMultiplySF->setToolTip(QApplication::translate("MainWindow", "Multiply scalar field by a constant", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMultiplySF->setStatusTip(QApplication::translate("MainWindow", "Multiply scalar field by a constant", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionKMeans->setText(QApplication::translate("MainWindow", "K-Means", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionKMeans->setToolTip(QApplication::translate("MainWindow", "classify point (K-Means applied on a scalar field)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionKMeans->setStatusTip(QApplication::translate("MainWindow", "classify point (K-Means applied on a scalar field)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionFrontPropagation->setText(QApplication::translate("MainWindow", "Front propagation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFrontPropagation->setToolTip(QApplication::translate("MainWindow", "Classify points by propagating a front on a scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFrontPropagation->setStatusTip(QApplication::translate("MainWindow", "Classify points by propagating a front on a scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionApplyScale->setText(QApplication::translate("MainWindow", "Multiply/Scale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionApplyScale->setToolTip(QApplication::translate("MainWindow", "Multiply coordinates (separately)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionApplyScale->setStatusTip(QApplication::translate("MainWindow", "Multiply coordinates (separately)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionMatchBBCenters->setText(QApplication::translate("MainWindow", "Match bounding-box centers", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMatchBBCenters->setToolTip(QApplication::translate("MainWindow", "Synchronize selected entities bbox centers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMatchBBCenters->setStatusTip(QApplication::translate("MainWindow", "Synchronize selected entities bbox centers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionUnroll->setText(QApplication::translate("MainWindow", "Unroll", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUnroll->setToolTip(QApplication::translate("MainWindow", "Unroll entity on a cylinder or a cone", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionUnroll->setStatusTip(QApplication::translate("MainWindow", "Unroll entity on a cylinder or a cone", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSFGradient->setText(QApplication::translate("MainWindow", "Gradient", 0, QApplication::UnicodeUTF8));
        actionZoomAndCenter->setText(QApplication::translate("MainWindow", "Zoom & Center", 0, QApplication::UnicodeUTF8));
        actionZoomAndCenter->setIconText(QApplication::translate("MainWindow", "ZoomCenter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomAndCenter->setToolTip(QApplication::translate("MainWindow", "Zoom and center on selected entities (Z)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionZoomAndCenter->setStatusTip(QApplication::translate("MainWindow", "Zoom and center on selected entities (Z)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionZoomAndCenter->setShortcut(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        actionSetViewTop->setText(QApplication::translate("MainWindow", "Top View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewTop->setToolTip(QApplication::translate("MainWindow", "Set top view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewTop->setStatusTip(QApplication::translate("MainWindow", "Set top view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewTop->setShortcut(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        actionSetViewFront->setText(QApplication::translate("MainWindow", "Front View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewFront->setToolTip(QApplication::translate("MainWindow", "Set front view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewFront->setStatusTip(QApplication::translate("MainWindow", "Set front view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewFront->setShortcut(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        actionSetViewBack->setText(QApplication::translate("MainWindow", "Back View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewBack->setToolTip(QApplication::translate("MainWindow", "Set back view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewBack->setStatusTip(QApplication::translate("MainWindow", "Set back view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewBack->setShortcut(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        actionSetViewLeft->setText(QApplication::translate("MainWindow", "Left Side View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewLeft->setToolTip(QApplication::translate("MainWindow", "Set left side view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewLeft->setStatusTip(QApplication::translate("MainWindow", "Set left side view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewLeft->setShortcut(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        actionSetViewRight->setText(QApplication::translate("MainWindow", "Right Side View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewRight->setToolTip(QApplication::translate("MainWindow", "Set right side view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewRight->setStatusTip(QApplication::translate("MainWindow", "Set right side view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewRight->setShortcut(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        actionSetViewBottom->setText(QApplication::translate("MainWindow", "Bottom View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewBottom->setToolTip(QApplication::translate("MainWindow", "Set bottom view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewBottom->setStatusTip(QApplication::translate("MainWindow", "Set bottom view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewBottom->setShortcut(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        actionDisplayMainTools->setText(QApplication::translate("MainWindow", "Main", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisplayMainTools->setToolTip(QApplication::translate("MainWindow", "Show/hide main toolbar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDisplayMainTools->setStatusTip(QApplication::translate("MainWindow", "Show/hide main toolbar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDisplayViewTools->setText(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisplayViewTools->setToolTip(QApplication::translate("MainWindow", "Show/hide view toolbar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDisplayViewTools->setStatusTip(QApplication::translate("MainWindow", "Show/hide view toolbar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDisplayViewTools->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionDisplayScalarFieldsTools->setText(QApplication::translate("MainWindow", "Scalar fields", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisplayScalarFieldsTools->setToolTip(QApplication::translate("MainWindow", "Show/hide scalar fields toolbar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDisplayScalarFieldsTools->setStatusTip(QApplication::translate("MainWindow", "Show/hide scalar fields toolbar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionToggleSunLight->setText(QApplication::translate("MainWindow", "Toggle Sun Light", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleSunLight->setToolTip(QApplication::translate("MainWindow", "Toggle sun light (active window)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionToggleSunLight->setStatusTip(QApplication::translate("MainWindow", "Toggle sun light (active window)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionToggleSunLight->setShortcut(QApplication::translate("MainWindow", "F6", 0, QApplication::UnicodeUTF8));
        actionToggleCustomLight->setText(QApplication::translate("MainWindow", "Toggle Custom Light", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleCustomLight->setToolTip(QApplication::translate("MainWindow", "Toggle custom light (active window)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionToggleCustomLight->setStatusTip(QApplication::translate("MainWindow", "Toggle custom light (active window)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionToggleCustomLight->setShortcut(QApplication::translate("MainWindow", "F7", 0, QApplication::UnicodeUTF8));
        actionGlobalZoom->setText(QApplication::translate("MainWindow", "Global Zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionGlobalZoom->setStatusTip(QApplication::translate("MainWindow", "Global Zoom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionToggleCenteredPerspective->setText(QApplication::translate("MainWindow", "Toggle Centered Perspective", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleCenteredPerspective->setToolTip(QApplication::translate("MainWindow", "Toggle perspective view (centered on objects) in current window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionToggleCenteredPerspective->setStatusTip(QApplication::translate("MainWindow", "Toggle perspective view (centered on objects) in current window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionToggleCenteredPerspective->setShortcut(QApplication::translate("MainWindow", "F3", 0, QApplication::UnicodeUTF8));
        actionToggleViewerBasedPerspective->setText(QApplication::translate("MainWindow", "Toggle Viewer Based Perspective", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleViewerBasedPerspective->setToolTip(QApplication::translate("MainWindow", "Toggle perspective view (centered on viewer) in current window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionToggleViewerBasedPerspective->setStatusTip(QApplication::translate("MainWindow", "Toggle perspective view (centered on viewer) in current window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionToggleViewerBasedPerspective->setShortcut(QApplication::translate("MainWindow", "F4", 0, QApplication::UnicodeUTF8));
        actionRefresh->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
        actionRefresh->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionTestFrameRate->setText(QApplication::translate("MainWindow", "Test Frame Rate", 0, QApplication::UnicodeUTF8));
        actionRenderToFile->setText(QApplication::translate("MainWindow", "Render to File", 0, QApplication::UnicodeUTF8));
        actionAboutPlugins->setText(QApplication::translate("MainWindow", "About Plugins ...", 0, QApplication::UnicodeUTF8));
        actionConvertToRGB->setText(QApplication::translate("MainWindow", "Convert to RGB", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConvertToRGB->setToolTip(QApplication::translate("MainWindow", "Convert current scalar field to RGB colors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowDepthBuffer->setText(QApplication::translate("MainWindow", "Create/show depth buffer", 0, QApplication::UnicodeUTF8));
        actionExportDepthBuffer->setText(QApplication::translate("MainWindow", "Export depth buffer", 0, QApplication::UnicodeUTF8));
        actionModifySensor->setText(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        actionRasterize->setText(QApplication::translate("MainWindow", "Rasterize (and contour plot)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRasterize->setToolTip(QApplication::translate("MainWindow", "Convert a cloud to 2D raster (and optionally generate the contour plot)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlign->setText(QApplication::translate("MainWindow", "Auto align clouds", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlign->setToolTip(QApplication::translate("MainWindow", "Tries to automatically register (roughly) two points clouds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAlign->setStatusTip(QApplication::translate("MainWindow", "Tries to automatically register (roughly) two points clouds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSubsample->setText(QApplication::translate("MainWindow", "Subsample", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSubsample->setToolTip(QApplication::translate("MainWindow", "Subsample a point cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSubsample->setStatusTip(QApplication::translate("MainWindow", "Subsample a point cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionLoadShader->setText(QApplication::translate("MainWindow", "Load shader", 0, QApplication::UnicodeUTF8));
        actionNoFilter->setText(QApplication::translate("MainWindow", "Remove filter", 0, QApplication::UnicodeUTF8));
        actionDeleteShader->setText(QApplication::translate("MainWindow", "Delete shader", 0, QApplication::UnicodeUTF8));
        actionPointPicking->setText(QApplication::translate("MainWindow", "Point picking", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPointPicking->setToolTip(QApplication::translate("MainWindow", "Point picking (point information, distance between 2 points, angles between 3 points, etc.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPointPicking->setStatusTip(QApplication::translate("MainWindow", "Point picking (point information, distance between 2 points, angles between 3 points, etc.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDisplayPluginTools->setText(QApplication::translate("MainWindow", "Plugins", 0, QApplication::UnicodeUTF8));
        actionComputeBestFitBB->setText(QApplication::translate("MainWindow", "Bounding box P.C.A. fit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeBestFitBB->setToolTip(QApplication::translate("MainWindow", "Makes BB fit principal components (rotates entity!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeBestFitBB->setStatusTip(QApplication::translate("MainWindow", "Makes BB fit principal components (rotates entity!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionEditCamera->setText(QApplication::translate("MainWindow", "Camera settings", 0, QApplication::UnicodeUTF8));
        actionPointListPicking->setText(QApplication::translate("MainWindow", "Point list picking", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPointListPicking->setStatusTip(QApplication::translate("MainWindow", "Pick several points (and export them to ASCII file, a new cloud, etc.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPointListPicking->setWhatsThis(QApplication::translate("MainWindow", "Pick several points (and export them to ASCII file, a new cloud, etc.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionCurvature->setText(QApplication::translate("MainWindow", "Curvature", 0, QApplication::UnicodeUTF8));
        actionRoughness->setText(QApplication::translate("MainWindow", "Roughness", 0, QApplication::UnicodeUTF8));
        actionFitPlane->setText(QApplication::translate("MainWindow", "Plane", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFitPlane->setToolTip(QApplication::translate("MainWindow", "Compute plane orientation (normal, srtike, dip)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRenameSF->setText(QApplication::translate("MainWindow", "Rename", 0, QApplication::UnicodeUTF8));
        actionFitQuadric->setText(QApplication::translate("MainWindow", "2.5D quadric", 0, QApplication::UnicodeUTF8));
        actionSNETest->setText(QApplication::translate("MainWindow", "SNE test", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSNETest->setToolTip(QApplication::translate("MainWindow", "Spherical Neighbourhood Extraction test", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSNETest->setStatusTip(QApplication::translate("MainWindow", "Spherical Neighbourhood Extraction test", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionToggleVisibility->setText(QApplication::translate("MainWindow", "Visibility", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleVisibility->setToolTip(QApplication::translate("MainWindow", "Toggle selected entities visibility (recursive)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleVisibility->setShortcut(QApplication::translate("MainWindow", "V", 0, QApplication::UnicodeUTF8));
        actionToggleNormals->setText(QApplication::translate("MainWindow", "Normals", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleNormals->setToolTip(QApplication::translate("MainWindow", "Toggle selected entities normals (recursive)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleNormals->setShortcut(QApplication::translate("MainWindow", "N", 0, QApplication::UnicodeUTF8));
        actionToggleColors->setText(QApplication::translate("MainWindow", "Colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleColors->setToolTip(QApplication::translate("MainWindow", "Toggle selected entities colors (recursive)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleColors->setShortcut(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        actionToggleSF->setText(QApplication::translate("MainWindow", "SF", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleSF->setToolTip(QApplication::translate("MainWindow", "Toggle selected entities SF (recursive)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleSF->setShortcut(QApplication::translate("MainWindow", "S", 0, QApplication::UnicodeUTF8));
        actionApplyTransformation->setText(QApplication::translate("MainWindow", "Apply transformation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionApplyTransformation->setToolTip(QApplication::translate("MainWindow", "Apply rotation and/or translation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSmoothMeshLaplacian->setText(QApplication::translate("MainWindow", "Smooth (Laplacian)", 0, QApplication::UnicodeUTF8));
        actionConvertNormalToHSV->setText(QApplication::translate("MainWindow", "HSV colors", 0, QApplication::UnicodeUTF8));
        actionSaveViewportAsObject->setText(QApplication::translate("MainWindow", "Save viewport as object", 0, QApplication::UnicodeUTF8));
        actionSaveViewportAsObject->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionPickRotationCenter->setText(QApplication::translate("MainWindow", "Pick rotation center", 0, QApplication::UnicodeUTF8));
        actionComputeDistancesFromSensor->setText(QApplication::translate("MainWindow", "Compute Ranges", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeDistancesFromSensor->setToolTip(QApplication::translate("MainWindow", "Compute ranges from sensor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBilateralFilter->setText(QApplication::translate("MainWindow", "Bilateral filter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBilateralFilter->setToolTip(QApplication::translate("MainWindow", "Compute bilateral filter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionComputeScatteringAngles->setText(QApplication::translate("MainWindow", "Compute Scattering Angles", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeScatteringAngles->setToolTip(QApplication::translate("MainWindow", "Compute laser beam scattering angle for a cloud with normals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleActiveSFColorScale->setText(QApplication::translate("MainWindow", "Toggle color scale", 0, QApplication::UnicodeUTF8));
        actionToggleActiveSFColorScale->setIconText(QApplication::translate("MainWindow", "Toggle active scalar field color scale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleActiveSFColorScale->setToolTip(QApplication::translate("MainWindow", "Toggle active scalar field color scale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleActiveSFColorScale->setShortcut(QApplication::translate("MainWindow", "Shift+C", 0, QApplication::UnicodeUTF8));
        actionShowActiveSFPrevious->setText(QApplication::translate("MainWindow", "Show previous SF", 0, QApplication::UnicodeUTF8));
        actionShowActiveSFPrevious->setIconText(QApplication::translate("MainWindow", "Show previous scalar field for active entity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowActiveSFPrevious->setToolTip(QApplication::translate("MainWindow", "Show previous scalar field for active entity", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowActiveSFPrevious->setShortcut(QApplication::translate("MainWindow", "Shift+Up", 0, QApplication::UnicodeUTF8));
        actionShowActiveSFNext->setText(QApplication::translate("MainWindow", "Show next SF", 0, QApplication::UnicodeUTF8));
        actionShowActiveSFNext->setIconText(QApplication::translate("MainWindow", "Show next scalar field for active entity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowActiveSFNext->setToolTip(QApplication::translate("MainWindow", "Show next scalar field for active entity", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowActiveSFNext->setShortcut(QApplication::translate("MainWindow", "Shift+Down", 0, QApplication::UnicodeUTF8));
        actionPointPairsAlign->setText(QApplication::translate("MainWindow", "Align (point pairs picking)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPointPairsAlign->setToolTip(QApplication::translate("MainWindow", "Aligns two clouds by picking (at least 4) equivalent point pairs", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPointPairsAlign->setStatusTip(QApplication::translate("MainWindow", "Aligns two clouds by picking (at least 4) equivalent point pairs", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionAddConstantSF->setText(QApplication::translate("MainWindow", "Add constant SF", 0, QApplication::UnicodeUTF8));
        actionExportCoordToSF->setText(QApplication::translate("MainWindow", "Export coordinate(s) to SF(s)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExportCoordToSF->setToolTip(QApplication::translate("MainWindow", "Export X, Y and/or Z coordinates to scalar field(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSubdivideMesh->setText(QApplication::translate("MainWindow", "Subdivide", 0, QApplication::UnicodeUTF8));
        actionToggleShowName->setText(QApplication::translate("MainWindow", "3D name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleShowName->setToolTip(QApplication::translate("MainWindow", "Toggle selected entities 3D name display (recursive)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleShowName->setShortcut(QApplication::translate("MainWindow", "D", 0, QApplication::UnicodeUTF8));
        actionPrimitiveFactory->setText(QApplication::translate("MainWindow", "Primitive factory", 0, QApplication::UnicodeUTF8));
        actionToggleMaterials->setText(QApplication::translate("MainWindow", "Materials/textures", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleMaterials->setToolTip(QApplication::translate("MainWindow", "Toggle selected entities materials/textures (recursive)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleMaterials->setShortcut(QApplication::translate("MainWindow", "M", 0, QApplication::UnicodeUTF8));
        actionEnable3DMouse->setText(QApplication::translate("MainWindow", "Enable", 0, QApplication::UnicodeUTF8));
        actionSetOrthoView->setText(QApplication::translate("MainWindow", "Orthographic projection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetOrthoView->setToolTip(QApplication::translate("MainWindow", "Set orthographic projection for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetOrthoView->setStatusTip(QApplication::translate("MainWindow", "Set orthographic projection for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetCenteredPerspectiveView->setText(QApplication::translate("MainWindow", "Object-centered perspective", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetCenteredPerspectiveView->setToolTip(QApplication::translate("MainWindow", "Set object-centered perspective for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetCenteredPerspectiveView->setStatusTip(QApplication::translate("MainWindow", "Set object-centered perspective for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewerPerspectiveView->setText(QApplication::translate("MainWindow", "Viewer-based perspective", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewerPerspectiveView->setToolTip(QApplication::translate("MainWindow", "Set viewer-based perspective for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewerPerspectiveView->setStatusTip(QApplication::translate("MainWindow", "Set viewer-based perspectivefor current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetPivotAlwaysOn->setText(QApplication::translate("MainWindow", "Always visible", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetPivotAlwaysOn->setToolTip(QApplication::translate("MainWindow", "Pivot always visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotAlwaysOn->setStatusTip(QApplication::translate("MainWindow", "Pivot always visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetPivotRotationOnly->setText(QApplication::translate("MainWindow", "Rotation only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetPivotRotationOnly->setToolTip(QApplication::translate("MainWindow", "Pivot visible when rotating", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotRotationOnly->setStatusTip(QApplication::translate("MainWindow", "Pivot visible when rotating", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetPivotOff->setText(QApplication::translate("MainWindow", "Never visible", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetPivotOff->setToolTip(QApplication::translate("MainWindow", "Pivot never visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotOff->setStatusTip(QApplication::translate("MainWindow", "Pivot never visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewIso1->setText(QApplication::translate("MainWindow", "Iso 1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewIso1->setToolTip(QApplication::translate("MainWindow", "Set view to 'front' isometric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewIso1->setStatusTip(QApplication::translate("MainWindow", "Set view to 'front' isometric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewIso1->setShortcut(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        actionSetViewIso2->setText(QApplication::translate("MainWindow", "Iso 2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewIso2->setToolTip(QApplication::translate("MainWindow", "Set view to 'back' isometric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewIso2->setStatusTip(QApplication::translate("MainWindow", "Set view to 'back' isometric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewIso2->setShortcut(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        actionConvertTextureToColor->setText(QApplication::translate("MainWindow", "Convert texture/material to RGB", 0, QApplication::UnicodeUTF8));
        actionOpenColorScalesManager->setText(QApplication::translate("MainWindow", "Color Scales Manager", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpenColorScalesManager->setToolTip(QApplication::translate("MainWindow", "Open Color Scales Manager dialog", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCrossSection->setText(QApplication::translate("MainWindow", "Cross Section", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionCrossSection->setStatusTip(QApplication::translate("MainWindow", "Cross Section", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionEditGlobalShiftAndScale->setText(QApplication::translate("MainWindow", "Edit global shift and scale", 0, QApplication::UnicodeUTF8));
        actionScalarFieldFromColor->setText(QApplication::translate("MainWindow", "Convert to Scalar field", 0, QApplication::UnicodeUTF8));
        actionComputeKdTree->setText(QApplication::translate("MainWindow", "Compute Kd-tree", 0, QApplication::UnicodeUTF8));
        actionTest->setText(QApplication::translate("MainWindow", "test", 0, QApplication::UnicodeUTF8));
        actionAddIdField->setText(QApplication::translate("MainWindow", "Add point indexes as SF", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddIdField->setToolTip(QApplication::translate("MainWindow", "Adds a scalar field with ordered integers for each point in the cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFitFacet->setText(QApplication::translate("MainWindow", "2D polygon (facet)", 0, QApplication::UnicodeUTF8));
        actionAdjustZoom->setText(QApplication::translate("MainWindow", "Adjust zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdjustZoom->setToolTip(QApplication::translate("MainWindow", "Adjusts zoom with a given pixel/unit ratio (orthographic projection only)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetSFAsCoord->setText(QApplication::translate("MainWindow", "Set SF as coordinate(s)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetSFAsCoord->setToolTip(QApplication::translate("MainWindow", "Set SF as coordinate(s) (X, Y or Z)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCloseAll->setText(QApplication::translate("MainWindow", "Close all", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCloseAll->setToolTip(QApplication::translate("MainWindow", "Remove all entiites currently loaded in the DB tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEditGlobalScale->setText(QApplication::translate("MainWindow", "Edit global scale", 0, QApplication::UnicodeUTF8));
        actionViewFromSensor->setText(QApplication::translate("MainWindow", "View from sensor", 0, QApplication::UnicodeUTF8));
        actionFindBiggestInnerRectangle->setText(QApplication::translate("MainWindow", "Find biggest inner rectangle (2D)", 0, QApplication::UnicodeUTF8));
        actionCreateGBLSensor->setText(QApplication::translate("MainWindow", "Create", 0, QApplication::UnicodeUTF8));
        actionCreateCameraSensor->setText(QApplication::translate("MainWindow", "Create", 0, QApplication::UnicodeUTF8));
        actionCheckPointsInsideFrustrum->setText(QApplication::translate("MainWindow", "Compute points visibility (with octree)", 0, QApplication::UnicodeUTF8));
        actionProjectUncertainty->setText(QApplication::translate("MainWindow", "Project Uncertainty", 0, QApplication::UnicodeUTF8));
        actionOrientNormalsMST->setText(QApplication::translate("MainWindow", "With Minimum Spanning Tree", 0, QApplication::UnicodeUTF8));
        actionOrientNormalsFM->setText(QApplication::translate("MainWindow", "With Fast Marching", 0, QApplication::UnicodeUTF8));
        actionCNETest->setText(QApplication::translate("MainWindow", "CNE test", 0, QApplication::UnicodeUTF8));
        actionCNETest->setIconText(QApplication::translate("MainWindow", "Cylindrical Neighbourhood Extraction test", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCNETest->setToolTip(QApplication::translate("MainWindow", "Cylindrical Neighbourhood Extraction test", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionApproximateDensity->setText(QApplication::translate("MainWindow", "Approximate (dist. to nearest neighbor)", 0, QApplication::UnicodeUTF8));
        actionComputeDensity->setText(QApplication::translate("MainWindow", "Density", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeDensity->setToolTip(QApplication::translate("MainWindow", "Compute density", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRemoveDuplicatePoints->setText(QApplication::translate("MainWindow", "Remove duplicate points", 0, QApplication::UnicodeUTF8));
        actionCrop->setText(QApplication::translate("MainWindow", "Crop", 0, QApplication::UnicodeUTF8));
        actionConvertNormalToDipDir->setText(QApplication::translate("MainWindow", "Dip/Dip direction SFs", 0, QApplication::UnicodeUTF8));
        actionExportCloudsInfo->setText(QApplication::translate("MainWindow", "Export cloud(s) info", 0, QApplication::UnicodeUTF8));
        actionInterpolateColors->setText(QApplication::translate("MainWindow", "Interpolate from another entity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInterpolateColors->setToolTip(QApplication::translate("MainWindow", "Interpolate colors from another entity (cloud or mesh) - color is taken from the nearest neighbor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDistanceToBestFitQuadric3D->setText(QApplication::translate("MainWindow", "Distance map to best-fit 3D quadric", 0, QApplication::UnicodeUTF8));
        actionDisplayGLFiltersTools->setText(QApplication::translate("MainWindow", "GL filters", 0, QApplication::UnicodeUTF8));
        actionChangeColorLevels->setText(QApplication::translate("MainWindow", "Levels", 0, QApplication::UnicodeUTF8));
        actionResetGUIElementsPos->setText(QApplication::translate("MainWindow", "Reset all GUI elements positions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionResetGUIElementsPos->setToolTip(QApplication::translate("MainWindow", "Reset all GUI elements positions (after restart)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionConvertToRandomRGB->setText(QApplication::translate("MainWindow", "Convert to random RGB", 0, QApplication::UnicodeUTF8));
        actionNoiseFilter->setText(QApplication::translate("MainWindow", "Noise filter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNoiseFilter->setToolTip(QApplication::translate("MainWindow", "Noise filter (remove the points far from the - approximate - local surface)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionComputeStatParams2->setText(QApplication::translate("MainWindow", "Compute stat. params (active SF)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeStatParams2->setToolTip(QApplication::translate("MainWindow", "Fits a statistical model on the active scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeStatParams2->setStatusTip(QApplication::translate("MainWindow", "Fits a statistical model on the active scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionMeasureMeshVolume->setText(QApplication::translate("MainWindow", "Measure volume", 0, QApplication::UnicodeUTF8));
        actionFlagMeshVetices->setText(QApplication::translate("MainWindow", "Flag vertices by type", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFlagMeshVetices->setToolTip(QApplication::translate("MainWindow", "Flag vertices by type: normal (0), border (1), non manifold (2)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleActivation->setText(QApplication::translate("MainWindow", "Activation (not recursive)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleActivation->setToolTip(QApplication::translate("MainWindow", "Enable/disable selected entities (not recursive)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleActivation->setShortcut(QApplication::translate("MainWindow", "A", 0, QApplication::UnicodeUTF8));
        actionLockRotationVertAxis->setText(QApplication::translate("MainWindow", "Lock rotation about vert. axis", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLockRotationVertAxis->setToolTip(QApplication::translate("MainWindow", "Lock manual rotation about the vertical (screen) axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLockRotationVertAxis->setShortcut(QApplication::translate("MainWindow", "L", 0, QApplication::UnicodeUTF8));
        actionCreateCloudFromEntCenters->setText(QApplication::translate("MainWindow", "Create cloud from selected entities centers", 0, QApplication::UnicodeUTF8));
        actionComputeBestICPRmsMatrix->setText(QApplication::translate("MainWindow", "Compute best registration RMS matrix", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeBestICPRmsMatrix->setToolTip(QApplication::translate("MainWindow", "Computes the best registration between all couples among multiple entities and save the resulting RMS in a matrix (CSV) file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEnterBubbleViewMode->setText(QApplication::translate("MainWindow", "Enter bubble-view mode", 0, QApplication::UnicodeUTF8));
        actionEnterBubbleViewMode->setShortcut(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
        actionExtractSections->setText(QApplication::translate("MainWindow", "Extract sections", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExtractSections->setToolTip(QApplication::translate("MainWindow", "Extract cloud sections along polylines", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionConvertPolylinesToMesh->setText(QApplication::translate("MainWindow", "Contour plot (polylines) to mesh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConvertPolylinesToMesh->setToolTip(QApplication::translate("MainWindow", "Contour plot (set of polylines) to a 2.5D mesh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLevel->setText(QApplication::translate("MainWindow", "Level", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLevel->setToolTip(QApplication::translate("MainWindow", "Pick three points to make a cloud or mesh 'level'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFitSphere->setText(QApplication::translate("MainWindow", "Sphere", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFitSphere->setToolTip(QApplication::translate("MainWindow", "Fits a sphere on the selected cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMatchScales->setText(QApplication::translate("MainWindow", "Match scales", 0, QApplication::UnicodeUTF8));
        actionZoomIn->setText(QApplication::translate("MainWindow", "Zoom in", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("MainWindow", "Zoom in (current 3D view)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setShortcut(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        actionZoomOut->setText(QApplication::translate("MainWindow", "Zoom out", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("MainWindow", "Zoom out (current 3D view)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setShortcut(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        actionDistanceMapToMesh->setText(QApplication::translate("MainWindow", "Distance map to mesh", 0, QApplication::UnicodeUTF8));
        actionSORFilter->setText(QApplication::translate("MainWindow", "SOR filter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSORFilter->setToolTip(QApplication::translate("MainWindow", "Statistical Outlier Filter (remove the points far from their neighbors)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEnableStereo->setText(QApplication::translate("MainWindow", "actionEnableStereo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEnableStereo->setToolTip(QApplication::translate("MainWindow", "Enable stereo mode (with red-blue or red-cyan glasses)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEnableStereo->setShortcut(QApplication::translate("MainWindow", "F10", 0, QApplication::UnicodeUTF8));
        actionComputePointsVisibility->setText(QApplication::translate("MainWindow", "Compute points visibility (with depth buffer)", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu3DMouse->setTitle(QApplication::translate("MainWindow", "3D mouse", 0, QApplication::UnicodeUTF8));
        menuDisplay->setTitle(QApplication::translate("MainWindow", "&Display", 0, QApplication::UnicodeUTF8));
        menuToolbars->setTitle(QApplication::translate("MainWindow", "Toolbars", 0, QApplication::UnicodeUTF8));
        menuLights->setTitle(QApplication::translate("MainWindow", "Lights", 0, QApplication::UnicodeUTF8));
        menuShadersAndFilters->setTitle(QApplication::translate("MainWindow", "Shaders && filters", 0, QApplication::UnicodeUTF8));
        menuActiveScalarField->setTitle(QApplication::translate("MainWindow", "Active scalar field", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuScalarFields->setTitle(QApplication::translate("MainWindow", "Scalar fields", 0, QApplication::UnicodeUTF8));
        menuColors->setTitle(QApplication::translate("MainWindow", "Colors", 0, QApplication::UnicodeUTF8));
        menuNormals->setTitle(QApplication::translate("MainWindow", "Normals", 0, QApplication::UnicodeUTF8));
        menuOrientNormals->setTitle(QApplication::translate("MainWindow", "Orient normals", 0, QApplication::UnicodeUTF8));
        menuConvert_to->setTitle(QApplication::translate("MainWindow", "Convert to", 0, QApplication::UnicodeUTF8));
        menuOctree->setTitle(QApplication::translate("MainWindow", "Octree", 0, QApplication::UnicodeUTF8));
        menuMesh->setTitle(QApplication::translate("MainWindow", "Mesh", 0, QApplication::UnicodeUTF8));
        menuMeshScalarField->setTitle(QApplication::translate("MainWindow", "Scalar Field", 0, QApplication::UnicodeUTF8));
        menuSensors->setTitle(QApplication::translate("MainWindow", "Sensors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        menuGroundBasedLidar->setToolTip(QApplication::translate("MainWindow", "Terrestrial Laser Sensor = Ground Based Lidar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menuGroundBasedLidar->setTitle(QApplication::translate("MainWindow", "TLS/GBL", 0, QApplication::UnicodeUTF8));
        menuCameraSensor->setTitle(QApplication::translate("MainWindow", "Camera", 0, QApplication::UnicodeUTF8));
        menuToggle->setTitle(QApplication::translate("MainWindow", "Toggle (recursive)", 0, QApplication::UnicodeUTF8));
        menu3DViews->setTitle(QApplication::translate("MainWindow", "3D &Views", 0, QApplication::UnicodeUTF8));
        menuPlugins->setTitle(QApplication::translate("MainWindow", "Plugins", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuSegmentation->setTitle(QApplication::translate("MainWindow", "Segmentation", 0, QApplication::UnicodeUTF8));
        menuProjection->setTitle(QApplication::translate("MainWindow", "Projection", 0, QApplication::UnicodeUTF8));
        menuStatistics->setTitle(QApplication::translate("MainWindow", "Statistics", 0, QApplication::UnicodeUTF8));
        menuDistances->setTitle(QApplication::translate("MainWindow", "Distances", 0, QApplication::UnicodeUTF8));
        menuRegistration->setTitle(QApplication::translate("MainWindow", "Registration", 0, QApplication::UnicodeUTF8));
        menuOther->setTitle(QApplication::translate("MainWindow", "Other", 0, QApplication::UnicodeUTF8));
        menuSandBox->setTitle(QApplication::translate("MainWindow", "Sand box (research)", 0, QApplication::UnicodeUTF8));
        menuFit->setTitle(QApplication::translate("MainWindow", "Fit", 0, QApplication::UnicodeUTF8));
        menuClean->setTitle(QApplication::translate("MainWindow", "Clean", 0, QApplication::UnicodeUTF8));
        DockableDBTree->setWindowTitle(QApplication::translate("MainWindow", "DB Tree", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxCameraLink->setToolTip(QApplication::translate("MainWindow", "Link all 3D views cameras", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxCameraLink->setText(QApplication::translate("MainWindow", "Camera Link", 0, QApplication::UnicodeUTF8));
        toolBarView->setWindowTitle(QApplication::translate("MainWindow", "Viewing tools", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolBarView->setToolTip(QApplication::translate("MainWindow", "Viewing tools", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DockableConsole->setWindowTitle(QApplication::translate("MainWindow", "Console", 0, QApplication::UnicodeUTF8));
        toolBarMainTools->setWindowTitle(QApplication::translate("MainWindow", "Main tools", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolBarMainTools->setToolTip(QApplication::translate("MainWindow", "Main tools", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolBarSFTools->setWindowTitle(QApplication::translate("MainWindow", "Scalar field tools", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolBarSFTools->setToolTip(QApplication::translate("MainWindow", "Scalar field tools", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolBarPluginTools->setWindowTitle(QApplication::translate("MainWindow", "Plugins", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolBarPluginTools->setToolTip(QApplication::translate("MainWindow", "Plugins", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DockableProperties->setWindowTitle(QApplication::translate("MainWindow", "Properties", 0, QApplication::UnicodeUTF8));
        toolBarGLFilters->setWindowTitle(QApplication::translate("MainWindow", "GL filters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolBarGLFilters->setToolTip(QApplication::translate("MainWindow", "GL filters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
