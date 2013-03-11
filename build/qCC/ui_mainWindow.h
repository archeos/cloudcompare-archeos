/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
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
    QAction *actionFuse;
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
    QAction *actionResolveNormalsDirection;
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
    QAction *actionMultiply;
    QAction *actionSynchronize;
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
    QAction *actionProjectSensor;
    QAction *actionShowDepthBuffer;
    QAction *actionExportDepthBuffer;
    QAction *actionModifySensor;
    QAction *actionHeightGridGeneration;
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
    QAction *actionDensity;
    QAction *actionCurvature;
    QAction *actionRoughness;
    QAction *actionPlaneOrientation;
    QAction *actionRenameSF;
    QAction *actionMeshBestFittingQuadric;
    QAction *actionSNETest;
    QAction *actionToggleVisibility;
    QAction *actionToggleNormals;
    QAction *actionToggleColors;
    QAction *actionToggleSF;
    QAction *actionApplyTransformation;
    QAction *actionSmoothMesh_Laplacian;
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
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_File;
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
    QMenu *menuOctree;
    QMenu *menuMesh;
    QMenu *menuMeshScalarField;
    QMenu *menuSensors;
    QMenu *menuGroundBasedLidar;
    QMenu *menuBoundingBox;
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
        MainWindow->resize(1030, 649);
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
        icon1.addFile(QString::fromUtf8(":/CC/Menu/images/menu/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/Menu/images/menu/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave->setShortcutContext(Qt::ApplicationShortcut);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/Menu/images/menu/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon3);
        actionFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionDisplayOptions = new QAction(MainWindow);
        actionDisplayOptions->setObjectName(QString::fromUtf8("actionDisplayOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplayOptions->setIcon(icon4);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSetUniqueColor = new QAction(MainWindow);
        actionSetUniqueColor->setObjectName(QString::fromUtf8("actionSetUniqueColor"));
        actionSetColorGradient = new QAction(MainWindow);
        actionSetColorGradient->setObjectName(QString::fromUtf8("actionSetColorGradient"));
        actionComputeNormals = new QAction(MainWindow);
        actionComputeNormals->setObjectName(QString::fromUtf8("actionComputeNormals"));
        actionInvertNormals = new QAction(MainWindow);
        actionInvertNormals->setObjectName(QString::fromUtf8("actionInvertNormals"));
        actionComputeOctree = new QAction(MainWindow);
        actionComputeOctree->setObjectName(QString::fromUtf8("actionComputeOctree"));
        actionConsole = new QAction(MainWindow);
        actionConsole->setObjectName(QString::fromUtf8("actionConsole"));
        actionConsole->setCheckable(true);
        actionConsole->setChecked(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/Menu/images/menu/console.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConsole->setIcon(icon5);
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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_cloneIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClone->setIcon(icon6);
        actionFuse = new QAction(MainWindow);
        actionFuse->setObjectName(QString::fromUtf8("actionFuse"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_fuseIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFuse->setIcon(icon7);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/Menu/images/menu/trashSmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon8);
        actionDelete->setShortcutContext(Qt::ApplicationShortcut);
        actionRegister = new QAction(MainWindow);
        actionRegister->setObjectName(QString::fromUtf8("actionRegister"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_registerIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRegister->setIcon(icon9);
        actionCloudCloudDist = new QAction(MainWindow);
        actionCloudCloudDist->setObjectName(QString::fromUtf8("actionCloudCloudDist"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_compareCCIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloudCloudDist->setIcon(icon10);
        actionCloudMeshDist = new QAction(MainWindow);
        actionCloudMeshDist->setObjectName(QString::fromUtf8("actionCloudMeshDist"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_compareCMIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloudMeshDist->setIcon(icon11);
        actionStatisticalTest = new QAction(MainWindow);
        actionStatisticalTest->setObjectName(QString::fromUtf8("actionStatisticalTest"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_statTestIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStatisticalTest->setIcon(icon12);
        actionSamplePoints = new QAction(MainWindow);
        actionSamplePoints->setObjectName(QString::fromUtf8("actionSamplePoints"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_samplePointsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSamplePoints->setIcon(icon13);
        actionLabelConnectedComponents = new QAction(MainWindow);
        actionLabelConnectedComponents->setObjectName(QString::fromUtf8("actionLabelConnectedComponents"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ccExtractIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLabelConnectedComponents->setIcon(icon14);
        actionSegment = new QAction(MainWindow);
        actionSegment->setObjectName(QString::fromUtf8("actionSegment"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_segmentIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSegment->setIcon(icon15);
        actionTranslateRotate = new QAction(MainWindow);
        actionTranslateRotate->setObjectName(QString::fromUtf8("actionTranslateRotate"));
        actionTranslateRotate->setCheckable(false);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_moveIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTranslateRotate->setIcon(icon16);
        actionShowHistogram = new QAction(MainWindow);
        actionShowHistogram->setObjectName(QString::fromUtf8("actionShowHistogram"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_histogramIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowHistogram->setIcon(icon17);
        actionComputeStatParams = new QAction(MainWindow);
        actionComputeStatParams->setObjectName(QString::fromUtf8("actionComputeStatParams"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_computeStatIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeStatParams->setIcon(icon18);
        actionFilterByValue = new QAction(MainWindow);
        actionFilterByValue->setObjectName(QString::fromUtf8("actionFilterByValue"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_filterByValueIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilterByValue->setIcon(icon19);
        actionGaussianFilter = new QAction(MainWindow);
        actionGaussianFilter->setObjectName(QString::fromUtf8("actionGaussianFilter"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_gaussianFilterIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGaussianFilter->setIcon(icon20);
        actionDeleteScalarField = new QAction(MainWindow);
        actionDeleteScalarField->setObjectName(QString::fromUtf8("actionDeleteScalarField"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_deleteSFIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteScalarField->setIcon(icon21);
        actionScalarFieldArithmetic = new QAction(MainWindow);
        actionScalarFieldArithmetic->setObjectName(QString::fromUtf8("actionScalarFieldArithmetic"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_sfArithmetic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScalarFieldArithmetic->setIcon(icon22);
        actionColorize = new QAction(MainWindow);
        actionColorize->setObjectName(QString::fromUtf8("actionColorize"));
        actionSmoothMeshSF = new QAction(MainWindow);
        actionSmoothMeshSF->setObjectName(QString::fromUtf8("actionSmoothMeshSF"));
        actionEnhanceMeshSF = new QAction(MainWindow);
        actionEnhanceMeshSF->setObjectName(QString::fromUtf8("actionEnhanceMeshSF"));
        actionClearColor = new QAction(MainWindow);
        actionClearColor->setObjectName(QString::fromUtf8("actionClearColor"));
        actionResolveNormalsDirection = new QAction(MainWindow);
        actionResolveNormalsDirection->setObjectName(QString::fromUtf8("actionResolveNormalsDirection"));
        actionClearNormals = new QAction(MainWindow);
        actionClearNormals->setObjectName(QString::fromUtf8("actionClearNormals"));
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
        actionFrontPropagation = new QAction(MainWindow);
        actionFrontPropagation->setObjectName(QString::fromUtf8("actionFrontPropagation"));
        actionMultiply = new QAction(MainWindow);
        actionMultiply->setObjectName(QString::fromUtf8("actionMultiply"));
        actionSynchronize = new QAction(MainWindow);
        actionSynchronize->setObjectName(QString::fromUtf8("actionSynchronize"));
        actionUnroll = new QAction(MainWindow);
        actionUnroll->setObjectName(QString::fromUtf8("actionUnroll"));
        actionSFGradient = new QAction(MainWindow);
        actionSFGradient->setObjectName(QString::fromUtf8("actionSFGradient"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_gradientIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSFGradient->setIcon(icon23);
        actionZoomAndCenter = new QAction(MainWindow);
        actionZoomAndCenter->setObjectName(QString::fromUtf8("actionZoomAndCenter"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_zoomIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomAndCenter->setIcon(icon24);
        actionSetViewTop = new QAction(MainWindow);
        actionSetViewTop->setObjectName(QString::fromUtf8("actionSetViewTop"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewTop->setIcon(icon25);
        actionSetViewTop->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewFront = new QAction(MainWindow);
        actionSetViewFront->setObjectName(QString::fromUtf8("actionSetViewFront"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewFront->setIcon(icon26);
        actionSetViewFront->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBack = new QAction(MainWindow);
        actionSetViewBack->setObjectName(QString::fromUtf8("actionSetViewBack"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBack->setIcon(icon27);
        actionSetViewBack->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewLeft = new QAction(MainWindow);
        actionSetViewLeft->setObjectName(QString::fromUtf8("actionSetViewLeft"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewLeft->setIcon(icon28);
        actionSetViewLeft->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewRight = new QAction(MainWindow);
        actionSetViewRight->setObjectName(QString::fromUtf8("actionSetViewRight"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewRight->setIcon(icon29);
        actionSetViewRight->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBottom = new QAction(MainWindow);
        actionSetViewBottom->setObjectName(QString::fromUtf8("actionSetViewBottom"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBottom->setIcon(icon30);
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
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_globalZoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGlobalZoom->setIcon(icon31);
        actionToggleCenteredPerspective = new QAction(MainWindow);
        actionToggleCenteredPerspective->setObjectName(QString::fromUtf8("actionToggleCenteredPerspective"));
        actionToggleCenteredPerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleViewerBasedPerspective = new QAction(MainWindow);
        actionToggleViewerBasedPerspective->setObjectName(QString::fromUtf8("actionToggleViewerBasedPerspective"));
        actionToggleViewerBasedPerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        actionRefresh->setShortcutContext(Qt::ApplicationShortcut);
        actionTestFrameRate = new QAction(MainWindow);
        actionTestFrameRate->setObjectName(QString::fromUtf8("actionTestFrameRate"));
        actionRenderToFile = new QAction(MainWindow);
        actionRenderToFile->setObjectName(QString::fromUtf8("actionRenderToFile"));
        actionAboutPlugins = new QAction(MainWindow);
        actionAboutPlugins->setObjectName(QString::fromUtf8("actionAboutPlugins"));
        actionConvertToRGB = new QAction(MainWindow);
        actionConvertToRGB->setObjectName(QString::fromUtf8("actionConvertToRGB"));
        actionProjectSensor = new QAction(MainWindow);
        actionProjectSensor->setObjectName(QString::fromUtf8("actionProjectSensor"));
        actionShowDepthBuffer = new QAction(MainWindow);
        actionShowDepthBuffer->setObjectName(QString::fromUtf8("actionShowDepthBuffer"));
        actionExportDepthBuffer = new QAction(MainWindow);
        actionExportDepthBuffer->setObjectName(QString::fromUtf8("actionExportDepthBuffer"));
        actionModifySensor = new QAction(MainWindow);
        actionModifySensor->setObjectName(QString::fromUtf8("actionModifySensor"));
        actionHeightGridGeneration = new QAction(MainWindow);
        actionHeightGridGeneration->setObjectName(QString::fromUtf8("actionHeightGridGeneration"));
        actionAlign = new QAction(MainWindow);
        actionAlign->setObjectName(QString::fromUtf8("actionAlign"));
        actionSubsample = new QAction(MainWindow);
        actionSubsample->setObjectName(QString::fromUtf8("actionSubsample"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_sampleCloudIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSubsample->setIcon(icon32);
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
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/CC/Comp/images/comp/pointPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointPicking->setIcon(icon33);
        actionDisplayPluginTools = new QAction(MainWindow);
        actionDisplayPluginTools->setObjectName(QString::fromUtf8("actionDisplayPluginTools"));
        actionDisplayPluginTools->setCheckable(true);
        actionDisplayPluginTools->setEnabled(false);
        actionComputeBestFitBB = new QAction(MainWindow);
        actionComputeBestFitBB->setObjectName(QString::fromUtf8("actionComputeBestFitBB"));
        actionEditCamera = new QAction(MainWindow);
        actionEditCamera->setObjectName(QString::fromUtf8("actionEditCamera"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/CC/Menu/images/menu/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCamera->setIcon(icon34);
        actionPointListPicking = new QAction(MainWindow);
        actionPointListPicking->setObjectName(QString::fromUtf8("actionPointListPicking"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/CC/Comp/images/comp/pointListPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointListPicking->setIcon(icon35);
        actionDensity = new QAction(MainWindow);
        actionDensity->setObjectName(QString::fromUtf8("actionDensity"));
        actionCurvature = new QAction(MainWindow);
        actionCurvature->setObjectName(QString::fromUtf8("actionCurvature"));
        actionRoughness = new QAction(MainWindow);
        actionRoughness->setObjectName(QString::fromUtf8("actionRoughness"));
        actionRoughness->setEnabled(false);
        actionPlaneOrientation = new QAction(MainWindow);
        actionPlaneOrientation->setObjectName(QString::fromUtf8("actionPlaneOrientation"));
        actionRenameSF = new QAction(MainWindow);
        actionRenameSF->setObjectName(QString::fromUtf8("actionRenameSF"));
        actionMeshBestFittingQuadric = new QAction(MainWindow);
        actionMeshBestFittingQuadric->setObjectName(QString::fromUtf8("actionMeshBestFittingQuadric"));
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
        actionSmoothMesh_Laplacian = new QAction(MainWindow);
        actionSmoothMesh_Laplacian->setObjectName(QString::fromUtf8("actionSmoothMesh_Laplacian"));
        actionConvertNormalToHSV = new QAction(MainWindow);
        actionConvertNormalToHSV->setObjectName(QString::fromUtf8("actionConvertNormalToHSV"));
        actionSaveViewportAsObject = new QAction(MainWindow);
        actionSaveViewportAsObject->setObjectName(QString::fromUtf8("actionSaveViewportAsObject"));
        actionSaveViewportAsObject->setShortcutContext(Qt::ApplicationShortcut);
        actionPickRotationCenter = new QAction(MainWindow);
        actionPickRotationCenter->setObjectName(QString::fromUtf8("actionPickRotationCenter"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_pickCenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickRotationCenter->setIcon(icon36);
        actionComputeDistancesFromSensor = new QAction(MainWindow);
        actionComputeDistancesFromSensor->setObjectName(QString::fromUtf8("actionComputeDistancesFromSensor"));
        actionBilateralFilter = new QAction(MainWindow);
        actionBilateralFilter->setObjectName(QString::fromUtf8("actionBilateralFilter"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_bilateralFilterIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBilateralFilter->setIcon(icon37);
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
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_register4pcsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointPairsAlign->setIcon(icon38);
        actionAddConstantSF = new QAction(MainWindow);
        actionAddConstantSF->setObjectName(QString::fromUtf8("actionAddConstantSF"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_addConstSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon39.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_addConstSF.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAddConstantSF->setIcon(icon39);
        actionExportCoordToSF = new QAction(MainWindow);
        actionExportCoordToSF->setObjectName(QString::fromUtf8("actionExportCoordToSF"));
        actionSubdivideMesh = new QAction(MainWindow);
        actionSubdivideMesh->setObjectName(QString::fromUtf8("actionSubdivideMesh"));
        actionToggleShowName = new QAction(MainWindow);
        actionToggleShowName->setObjectName(QString::fromUtf8("actionToggleShowName"));
        actionToggleShowName->setShortcutContext(Qt::ApplicationShortcut);
        actionPrimitiveFactory = new QAction(MainWindow);
        actionPrimitiveFactory->setObjectName(QString::fromUtf8("actionPrimitiveFactory"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/CC/Tree/images/miscGeomSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrimitiveFactory->setIcon(icon40);
        actionToggleMaterials = new QAction(MainWindow);
        actionToggleMaterials->setObjectName(QString::fromUtf8("actionToggleMaterials"));
        actionToggleMaterials->setShortcutContext(Qt::ApplicationShortcut);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1030, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuDisplay = new QMenu(menubar);
        menuDisplay->setObjectName(QString::fromUtf8("menuDisplay"));
        menuToolbars = new QMenu(menuDisplay);
        menuToolbars->setObjectName(QString::fromUtf8("menuToolbars"));
        menuLights = new QMenu(menuDisplay);
        menuLights->setObjectName(QString::fromUtf8("menuLights"));
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
        menuBoundingBox = new QMenu(menuEdit);
        menuBoundingBox->setObjectName(QString::fromUtf8("menuBoundingBox"));
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
        MainWindow->setMenuBar(menubar);
        DockableDBTree = new QDockWidget(MainWindow);
        DockableDBTree->setObjectName(QString::fromUtf8("DockableDBTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DockableDBTree->sizePolicy().hasHeightForWidth());
        DockableDBTree->setSizePolicy(sizePolicy1);
        DockableDBTree->setMinimumSize(QSize(150, 159));
        DockableDBTree->setFloating(false);
        DockableDBTree->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        vboxLayout = new QVBoxLayout(dockWidgetContents);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        dbTreeView = new ccCustomQTreeView(dockWidgetContents);
        dbTreeView->setObjectName(QString::fromUtf8("dbTreeView"));
        dbTreeView->setDragEnabled(true);
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
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        toolBarView->setWindowIcon(icon41);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBarView);
        DockableConsole = new QDockWidget(MainWindow);
        DockableConsole->setObjectName(QString::fromUtf8("DockableConsole"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(DockableConsole->sizePolicy().hasHeightForWidth());
        DockableConsole->setSizePolicy(sizePolicy2);
        DockableConsole->setMinimumSize(QSize(80, 124));
        DockableConsole->setMaximumSize(QSize(524287, 524287));
        DockableConsole->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
        DockableConsole->setAllowedAreas(Qt::BottomDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        vboxLayout2 = new QVBoxLayout(dockWidgetContents_2);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        consoleWidget = new QListWidget(dockWidgetContents_2);
        consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(consoleWidget->sizePolicy().hasHeightForWidth());
        consoleWidget->setSizePolicy(sizePolicy3);
        consoleWidget->setMinimumSize(QSize(0, 80));
        consoleWidget->setAlternatingRowColors(true);
        consoleWidget->setSelectionMode(QAbstractItemView::SingleSelection);

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

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuDisplay->menuAction());
        menubar->addAction(menuPlugins->menuAction());
        menubar->addAction(menu3DViews->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu_File->addAction(actionOpen);
        menu_File->addAction(actionSave);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        menuDisplay->addAction(actionFullScreen);
        menuDisplay->addAction(actionRefresh);
        menuDisplay->addAction(actionTestFrameRate);
        menuDisplay->addAction(actionToggleCenteredPerspective);
        menuDisplay->addAction(actionToggleViewerBasedPerspective);
        menuDisplay->addAction(actionRenderToFile);
        menuDisplay->addAction(actionDisplayOptions);
        menuDisplay->addAction(actionEditCamera);
        menuDisplay->addAction(actionSaveViewportAsObject);
        menuDisplay->addSeparator();
        menuDisplay->addAction(menuLights->menuAction());
        menuDisplay->addAction(menuShadersAndFilters->menuAction());
        menuDisplay->addAction(menuActiveScalarField->menuAction());
        menuDisplay->addSeparator();
        menuDisplay->addAction(actionConsole);
        menuDisplay->addAction(menuToolbars->menuAction());
        menuToolbars->addAction(actionDisplayMainTools);
        menuToolbars->addAction(actionDisplayScalarFieldsTools);
        menuToolbars->addAction(actionDisplayViewTools);
        menuToolbars->addAction(actionDisplayPluginTools);
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
        menuEdit->addAction(menuBoundingBox->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionPointPicking);
        menuEdit->addAction(actionPointListPicking);
        menuEdit->addSeparator();
        menuEdit->addAction(actionClone);
        menuEdit->addAction(actionFuse);
        menuEdit->addAction(actionApplyTransformation);
        menuEdit->addAction(actionMultiply);
        menuEdit->addAction(actionSubsample);
        menuEdit->addAction(actionSynchronize);
        menuEdit->addAction(menuToggle->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete);
        menuScalarFields->addAction(actionSFGradient);
        menuScalarFields->addAction(actionGaussianFilter);
        menuScalarFields->addAction(actionBilateralFilter);
        menuScalarFields->addAction(actionFilterByValue);
        menuScalarFields->addAction(actionConvertToRGB);
        menuScalarFields->addAction(actionRenameSF);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionAddConstantSF);
        menuScalarFields->addAction(actionScalarFieldArithmetic);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionDeleteScalarField);
        menuScalarFields->addAction(actionDeleteAllSF);
        menuScalarFields->addSeparator();
        menuColors->addAction(actionSetUniqueColor);
        menuColors->addAction(actionColorize);
        menuColors->addAction(actionSetColorGradient);
        menuColors->addSeparator();
        menuColors->addAction(actionClearColor);
        menuNormals->addAction(actionComputeNormals);
        menuNormals->addAction(actionConvertNormalToHSV);
        menuNormals->addAction(actionInvertNormals);
        menuNormals->addAction(actionResolveNormalsDirection);
        menuNormals->addSeparator();
        menuNormals->addAction(actionClearNormals);
        menuOctree->addAction(actionComputeOctree);
        menuOctree->addSeparator();
        menuOctree->addAction(actionResampleWithOctree);
        menuMesh->addAction(actionComputeMeshAA);
        menuMesh->addAction(actionComputeMeshLS);
        menuMesh->addAction(actionMeshBestFittingQuadric);
        menuMesh->addSeparator();
        menuMesh->addAction(actionSamplePoints);
        menuMesh->addAction(actionSmoothMesh_Laplacian);
        menuMesh->addAction(actionSubdivideMesh);
        menuMesh->addAction(actionMeasureMeshSurface);
        menuMesh->addSeparator();
        menuMesh->addAction(menuMeshScalarField->menuAction());
        menuMeshScalarField->addAction(actionSmoothMeshSF);
        menuMeshScalarField->addAction(actionEnhanceMeshSF);
        menuSensors->addAction(menuGroundBasedLidar->menuAction());
        menuSensors->addAction(actionProjectSensor);
        menuSensors->addAction(actionModifySensor);
        menuSensors->addAction(actionComputeDistancesFromSensor);
        menuSensors->addAction(actionComputeScatteringAngles);
        menuGroundBasedLidar->addAction(actionShowDepthBuffer);
        menuGroundBasedLidar->addAction(actionExportDepthBuffer);
        menuBoundingBox->addAction(actionComputeBestFitBB);
        menuToggle->addAction(actionToggleVisibility);
        menuToggle->addAction(actionToggleColors);
        menuToggle->addAction(actionToggleNormals);
        menuToggle->addAction(actionToggleSF);
        menuToggle->addAction(actionToggleMaterials);
        menuToggle->addAction(actionToggleShowName);
        menu3DViews->addAction(actionNew3DView);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionClose3DView);
        menu3DViews->addAction(actionCloseAll3DViews);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionTile3DViews);
        menu3DViews->addAction(actionCascade3DViews);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionNext3DView);
        menu3DViews->addAction(actionPrevious3DView);
        menuTools->addAction(menuProjection->menuAction());
        menuTools->addAction(menuRegistration->menuAction());
        menuTools->addAction(menuDistances->menuAction());
        menuTools->addAction(menuStatistics->menuAction());
        menuTools->addAction(menuSegmentation->menuAction());
        menuTools->addAction(menuOther->menuAction());
        menuTools->addAction(actionPrimitiveFactory);
        menuSegmentation->addAction(actionLabelConnectedComponents);
        menuSegmentation->addAction(actionKMeans);
        menuSegmentation->addAction(actionFrontPropagation);
        menuProjection->addAction(actionUnroll);
        menuProjection->addAction(actionHeightGridGeneration);
        menuProjection->addAction(actionExportCoordToSF);
        menuStatistics->addAction(actionComputeStatParams);
        menuStatistics->addAction(actionStatisticalTest);
        menuDistances->addAction(actionCloudCloudDist);
        menuDistances->addAction(actionCloudMeshDist);
        menuDistances->addAction(actionCPS);
        menuRegistration->addAction(actionPointPairsAlign);
        menuRegistration->addAction(actionAlign);
        menuRegistration->addAction(actionRegister);
        menuOther->addAction(actionDensity);
        menuOther->addAction(actionCurvature);
        menuOther->addAction(actionRoughness);
        menuOther->addAction(actionPlaneOrientation);
        menuOther->addAction(actionSNETest);
        toolBarView->addAction(actionDisplayOptions);
        toolBarView->addAction(actionEditCamera);
        toolBarView->addAction(actionGlobalZoom);
        toolBarView->addAction(actionPickRotationCenter);
        toolBarView->addAction(actionZoomAndCenter);
        toolBarView->addAction(actionSetViewTop);
        toolBarView->addAction(actionSetViewFront);
        toolBarView->addAction(actionSetViewLeft);
        toolBarView->addAction(actionSetViewBack);
        toolBarView->addAction(actionSetViewRight);
        toolBarView->addAction(actionSetViewBottom);
        toolBarMainTools->addAction(actionOpen);
        toolBarMainTools->addAction(actionSave);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionPointPicking);
        toolBarMainTools->addAction(actionPointListPicking);
        toolBarMainTools->addAction(actionClone);
        toolBarMainTools->addAction(actionFuse);
        toolBarMainTools->addAction(actionDelete);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionPointPairsAlign);
        toolBarMainTools->addAction(actionRegister);
        toolBarMainTools->addAction(actionSubsample);
        toolBarMainTools->addAction(actionSamplePoints);
        toolBarMainTools->addAction(actionCloudCloudDist);
        toolBarMainTools->addAction(actionCloudMeshDist);
        toolBarMainTools->addAction(actionStatisticalTest);
        toolBarMainTools->addAction(actionLabelConnectedComponents);
        toolBarMainTools->addAction(actionPrimitiveFactory);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionSegment);
        toolBarMainTools->addAction(actionTranslateRotate);
        toolBarSFTools->addAction(actionShowHistogram);
        toolBarSFTools->addAction(actionComputeStatParams);
        toolBarSFTools->addAction(actionFilterByValue);
        toolBarSFTools->addAction(actionSFGradient);
        toolBarSFTools->addAction(actionGaussianFilter);
        toolBarSFTools->addAction(actionDeleteScalarField);
        toolBarSFTools->addAction(actionAddConstantSF);
        toolBarSFTools->addAction(actionScalarFieldArithmetic);
        toolBarGLFilters->addAction(actionNoFilter);
        toolBarGLFilters->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionConsole, SIGNAL(toggled(bool)), DockableConsole, SLOT(setVisible(bool)));
        QObject::connect(DockableConsole, SIGNAL(visibilityChanged(bool)), actionConsole, SLOT(setChecked(bool)));
        QObject::connect(actionDisplayMainTools, SIGNAL(toggled(bool)), toolBarMainTools, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayScalarFieldsTools, SIGNAL(toggled(bool)), toolBarSFTools, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayViewTools, SIGNAL(toggled(bool)), toolBarView, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayPluginTools, SIGNAL(toggled(bool)), toolBarPluginTools, SLOT(setVisible(bool)));

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
        actionFuse->setText(QApplication::translate("MainWindow", "Fuse", 0, QApplication::UnicodeUTF8));
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
        actionStatisticalTest->setText(QApplication::translate("MainWindow", "Statistical test", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStatisticalTest->setToolTip(QApplication::translate("MainWindow", "Apply a statistical test to classify diffrences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionStatisticalTest->setStatusTip(QApplication::translate("MainWindow", "Apply a statistical test to classify diffrences", 0, QApplication::UnicodeUTF8));
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
        actionComputeStatParams->setToolTip(QApplication::translate("MainWindow", "Fits a statistical model to scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeStatParams->setStatusTip(QApplication::translate("MainWindow", "Fits a statistical model to scalar field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionFilterByValue->setText(QApplication::translate("MainWindow", "Filter By Value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFilterByValue->setToolTip(QApplication::translate("MainWindow", "Filter ponts by value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFilterByValue->setStatusTip(QApplication::translate("MainWindow", "Filter ponts by value", 0, QApplication::UnicodeUTF8));
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
        actionResolveNormalsDirection->setText(QApplication::translate("MainWindow", "Resolve direction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionResolveNormalsDirection->setToolTip(QApplication::translate("MainWindow", "Resolve normals directions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionResolveNormalsDirection->setStatusTip(QApplication::translate("MainWindow", "Resolve normals directions", 0, QApplication::UnicodeUTF8));
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
        actionComputeMeshAA->setText(QApplication::translate("MainWindow", "Delaunay 2D (axis aligned plane)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeMeshAA->setToolTip(QApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on an axis aligned plane", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeMeshAA->setStatusTip(QApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on an axis aligned plane", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionComputeMeshLS->setText(QApplication::translate("MainWindow", "Delaunay 2D (best LS plane)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeMeshLS->setToolTip(QApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the least squares best plane", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeMeshLS->setStatusTip(QApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the least squares best plane", 0, QApplication::UnicodeUTF8));
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
        actionMultiply->setText(QApplication::translate("MainWindow", "Multiply/Scale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMultiply->setToolTip(QApplication::translate("MainWindow", "Multiply coordinates (separately)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMultiply->setStatusTip(QApplication::translate("MainWindow", "Multiply coordinates (separately)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSynchronize->setText(QApplication::translate("MainWindow", "Synchronize", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSynchronize->setToolTip(QApplication::translate("MainWindow", "Synchronize selected entities bbox centers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSynchronize->setStatusTip(QApplication::translate("MainWindow", "Synchronize selected entities bbox centers", 0, QApplication::UnicodeUTF8));
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
        actionSetViewTop->setShortcut(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        actionSetViewFront->setText(QApplication::translate("MainWindow", "Front View", 0, QApplication::UnicodeUTF8));
        actionSetViewFront->setShortcut(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        actionSetViewBack->setText(QApplication::translate("MainWindow", "Back View", 0, QApplication::UnicodeUTF8));
        actionSetViewBack->setShortcut(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        actionSetViewLeft->setText(QApplication::translate("MainWindow", "Left Side View", 0, QApplication::UnicodeUTF8));
        actionSetViewLeft->setShortcut(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        actionSetViewRight->setText(QApplication::translate("MainWindow", "Right Side View", 0, QApplication::UnicodeUTF8));
        actionSetViewRight->setShortcut(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        actionSetViewBottom->setText(QApplication::translate("MainWindow", "Bottom View", 0, QApplication::UnicodeUTF8));
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
        actionProjectSensor->setText(QApplication::translate("MainWindow", "Create", 0, QApplication::UnicodeUTF8));
        actionShowDepthBuffer->setText(QApplication::translate("MainWindow", "Show depth buffer", 0, QApplication::UnicodeUTF8));
        actionExportDepthBuffer->setText(QApplication::translate("MainWindow", "Export depth buffer", 0, QApplication::UnicodeUTF8));
        actionModifySensor->setText(QApplication::translate("MainWindow", "Modify", 0, QApplication::UnicodeUTF8));
        actionHeightGridGeneration->setText(QApplication::translate("MainWindow", "Height grid generation", 0, QApplication::UnicodeUTF8));
        actionAlign->setText(QApplication::translate("MainWindow", "Align (auto) [research]", 0, QApplication::UnicodeUTF8));
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
        actionComputeBestFitBB->setText(QApplication::translate("MainWindow", "P.C.A. fit [research]", 0, QApplication::UnicodeUTF8));
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
        actionDensity->setText(QApplication::translate("MainWindow", "Density", 0, QApplication::UnicodeUTF8));
        actionCurvature->setText(QApplication::translate("MainWindow", "Curvature", 0, QApplication::UnicodeUTF8));
        actionRoughness->setText(QApplication::translate("MainWindow", "Roughness", 0, QApplication::UnicodeUTF8));
        actionPlaneOrientation->setText(QApplication::translate("MainWindow", "Plane orientation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlaneOrientation->setToolTip(QApplication::translate("MainWindow", "Compute plane orientation (normal, srtike, dip)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRenameSF->setText(QApplication::translate("MainWindow", "Rename", 0, QApplication::UnicodeUTF8));
        actionMeshBestFittingQuadric->setText(QApplication::translate("MainWindow", "Best fitting quadric [research]", 0, QApplication::UnicodeUTF8));
        actionSNETest->setText(QApplication::translate("MainWindow", "SNE test", 0, QApplication::UnicodeUTF8));
        actionToggleVisibility->setText(QApplication::translate("MainWindow", "Visibility", 0, QApplication::UnicodeUTF8));
        actionToggleVisibility->setShortcut(QApplication::translate("MainWindow", "V", 0, QApplication::UnicodeUTF8));
        actionToggleNormals->setText(QApplication::translate("MainWindow", "Normals", 0, QApplication::UnicodeUTF8));
        actionToggleNormals->setShortcut(QApplication::translate("MainWindow", "N", 0, QApplication::UnicodeUTF8));
        actionToggleColors->setText(QApplication::translate("MainWindow", "Colors", 0, QApplication::UnicodeUTF8));
        actionToggleColors->setShortcut(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        actionToggleSF->setText(QApplication::translate("MainWindow", "SF", 0, QApplication::UnicodeUTF8));
        actionToggleSF->setShortcut(QApplication::translate("MainWindow", "S", 0, QApplication::UnicodeUTF8));
        actionApplyTransformation->setText(QApplication::translate("MainWindow", "Apply transformation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionApplyTransformation->setToolTip(QApplication::translate("MainWindow", "Apply rotation and/or translation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSmoothMesh_Laplacian->setText(QApplication::translate("MainWindow", "Smooth (Laplacian)", 0, QApplication::UnicodeUTF8));
        actionConvertNormalToHSV->setText(QApplication::translate("MainWindow", "Convert to HSV", 0, QApplication::UnicodeUTF8));
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
        actionPointPairsAlign->setToolTip(QApplication::translate("MainWindow", "Aligns two clouds by picking (at least 3) equivalent point pairs", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPointPairsAlign->setStatusTip(QApplication::translate("MainWindow", "Aligns two clouds by picking (at least 3) equivalent point pairs", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionAddConstantSF->setText(QApplication::translate("MainWindow", "Add constant SF", 0, QApplication::UnicodeUTF8));
        actionExportCoordToSF->setText(QApplication::translate("MainWindow", "Export coordinate(s) to scalar field(s)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExportCoordToSF->setToolTip(QApplication::translate("MainWindow", "Export X, Y and/or Z coordinates to scalar field(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSubdivideMesh->setText(QApplication::translate("MainWindow", "Subdivide", 0, QApplication::UnicodeUTF8));
        actionToggleShowName->setText(QApplication::translate("MainWindow", "3D name", 0, QApplication::UnicodeUTF8));
        actionToggleShowName->setShortcut(QApplication::translate("MainWindow", "D", 0, QApplication::UnicodeUTF8));
        actionPrimitiveFactory->setText(QApplication::translate("MainWindow", "Primitive factory", 0, QApplication::UnicodeUTF8));
        actionToggleMaterials->setText(QApplication::translate("MainWindow", "Materials/textures", 0, QApplication::UnicodeUTF8));
        actionToggleMaterials->setShortcut(QApplication::translate("MainWindow", "M", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
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
        menuOctree->setTitle(QApplication::translate("MainWindow", "Octree", 0, QApplication::UnicodeUTF8));
        menuMesh->setTitle(QApplication::translate("MainWindow", "Mesh", 0, QApplication::UnicodeUTF8));
        menuMeshScalarField->setTitle(QApplication::translate("MainWindow", "Scalar Field", 0, QApplication::UnicodeUTF8));
        menuSensors->setTitle(QApplication::translate("MainWindow", "Sensors", 0, QApplication::UnicodeUTF8));
        menuGroundBasedLidar->setTitle(QApplication::translate("MainWindow", "Ground-Based Lidar", 0, QApplication::UnicodeUTF8));
        menuBoundingBox->setTitle(QApplication::translate("MainWindow", "Bounding-box", 0, QApplication::UnicodeUTF8));
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
