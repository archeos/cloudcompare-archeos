/********************************************************************************
** Form generated from reading UI file 'ccviewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCVIEWER_H
#define UI_CCVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ccViewerClass
{
public:
    QAction *actionDisplayParameters;
    QAction *actionFullScreen;
    QAction *actionEditCamera;
    QAction *actionToggleSunLight;
    QAction *actionToggleCustomLight;
    QAction *actionAbout;
    QAction *actionHelpShortctus;
    QAction *actionSetViewFront;
    QAction *actionSetViewBack;
    QAction *actionSetViewLeft;
    QAction *actionSetViewRight;
    QAction *actionSetViewTop;
    QAction *actionSetViewBottom;
    QAction *actionShowColors;
    QAction *actionShowNormals;
    QAction *actionShowColorRamp;
    QAction *actionShowScalarField;
    QAction *actionDummyAction;
    QAction *actionDelete;
    QAction *actionSetOrthoView;
    QAction *actionSetCenteredPerspectiveView;
    QAction *actionSetViewerPerspectiveView;
    QAction *actionSetPivotAlwaysOn;
    QAction *actionSetPivotRotationOnly;
    QAction *actionSetPivotOff;
    QAction *actionSetViewIso1;
    QAction *actionSetViewIso2;
    QAction *actionEnable3DMouse;
    QAction *actionZoomOnSelectedEntity;
    QAction *actionGlobalZoom;
    QAction *actionNoFilter;
    QAction *actionLockRotationVertAxis;
    QAction *actionEnableStereo;
    QAction *actionShowMaterials;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *GLframe;
    QMenuBar *menuBar;
    QMenu *menuOptions;
    QMenu *menuPerspective;
    QMenu *menuLights;
    QMenu *menuStandardViews;
    QMenu *menuSelected;
    QMenu *menuSelectSF;
    QMenu *menuRotationSymbol;
    QMenu *menu3DMouse;
    QMenu *menuAbout;
    QMenu *menuPlugins;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ccViewerClass)
    {
        if (ccViewerClass->objectName().isEmpty())
            ccViewerClass->setObjectName(QString::fromUtf8("ccViewerClass"));
        ccViewerClass->resize(800, 600);
        ccViewerClass->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Icons/images/icon/cc_viewer_icon_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ccViewerClass->setWindowIcon(icon);
        ccViewerClass->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(200,200,200);\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"	background: rgb(200,200,200);\n"
"}\n"
"\n"
"QMenu::separator \n"
"{\n"
"     height: 2px;\n"
"     background: rgb(100,100,100);\n"
"     margin-left: 10px;\n"
"     margin-right: 5px;\n"
" }\n"
"\n"
"QMenuBar \n"
"{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(255,255,255), stop:1 rgb(200,200,200));\n"
" }\n"
"\n"
"QStatusBar\n"
"{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(200,200,200), stop:1 rgb(255,255,255));\n"
"}\n"
""));
        actionDisplayParameters = new QAction(ccViewerClass);
        actionDisplayParameters->setObjectName(QString::fromUtf8("actionDisplayParameters"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccLightParams.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplayParameters->setIcon(icon1);
        actionDisplayParameters->setShortcutContext(Qt::ApplicationShortcut);
        actionFullScreen = new QAction(ccViewerClass);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/ccFullScreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon2);
        actionFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionEditCamera = new QAction(ccViewerClass);
        actionEditCamera->setObjectName(QString::fromUtf8("actionEditCamera"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/ccCamera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCamera->setIcon(icon3);
        actionToggleSunLight = new QAction(ccViewerClass);
        actionToggleSunLight->setObjectName(QString::fromUtf8("actionToggleSunLight"));
        actionToggleSunLight->setCheckable(true);
        actionToggleSunLight->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleCustomLight = new QAction(ccViewerClass);
        actionToggleCustomLight->setObjectName(QString::fromUtf8("actionToggleCustomLight"));
        actionToggleCustomLight->setCheckable(true);
        actionToggleCustomLight->setShortcutContext(Qt::ApplicationShortcut);
        actionAbout = new QAction(ccViewerClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionHelpShortctus = new QAction(ccViewerClass);
        actionHelpShortctus->setObjectName(QString::fromUtf8("actionHelpShortctus"));
        actionHelpShortctus->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewFront = new QAction(ccViewerClass);
        actionSetViewFront->setObjectName(QString::fromUtf8("actionSetViewFront"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewFront->setIcon(icon4);
        actionSetViewFront->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBack = new QAction(ccViewerClass);
        actionSetViewBack->setObjectName(QString::fromUtf8("actionSetViewBack"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBack->setIcon(icon5);
        actionSetViewBack->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewLeft = new QAction(ccViewerClass);
        actionSetViewLeft->setObjectName(QString::fromUtf8("actionSetViewLeft"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewLeft->setIcon(icon6);
        actionSetViewLeft->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewRight = new QAction(ccViewerClass);
        actionSetViewRight->setObjectName(QString::fromUtf8("actionSetViewRight"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewRight->setIcon(icon7);
        actionSetViewRight->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewTop = new QAction(ccViewerClass);
        actionSetViewTop->setObjectName(QString::fromUtf8("actionSetViewTop"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewTop->setIcon(icon8);
        actionSetViewTop->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBottom = new QAction(ccViewerClass);
        actionSetViewBottom->setObjectName(QString::fromUtf8("actionSetViewBottom"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBottom->setIcon(icon9);
        actionShowColors = new QAction(ccViewerClass);
        actionShowColors->setObjectName(QString::fromUtf8("actionShowColors"));
        actionShowColors->setCheckable(true);
        actionShowColors->setShortcutContext(Qt::ApplicationShortcut);
        actionShowNormals = new QAction(ccViewerClass);
        actionShowNormals->setObjectName(QString::fromUtf8("actionShowNormals"));
        actionShowNormals->setCheckable(true);
        actionShowNormals->setShortcutContext(Qt::ApplicationShortcut);
        actionShowColorRamp = new QAction(ccViewerClass);
        actionShowColorRamp->setObjectName(QString::fromUtf8("actionShowColorRamp"));
        actionShowColorRamp->setCheckable(true);
        actionShowColorRamp->setShortcutContext(Qt::ApplicationShortcut);
        actionShowScalarField = new QAction(ccViewerClass);
        actionShowScalarField->setObjectName(QString::fromUtf8("actionShowScalarField"));
        actionShowScalarField->setCheckable(true);
        actionShowScalarField->setShortcutContext(Qt::ApplicationShortcut);
        actionDummyAction = new QAction(ccViewerClass);
        actionDummyAction->setObjectName(QString::fromUtf8("actionDummyAction"));
        actionDelete = new QAction(ccViewerClass);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/ccDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon10);
        actionDelete->setShortcutContext(Qt::ApplicationShortcut);
        actionSetOrthoView = new QAction(ccViewerClass);
        actionSetOrthoView->setObjectName(QString::fromUtf8("actionSetOrthoView"));
        actionSetOrthoView->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/CC/images/ccOrthoMode32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetOrthoView->setIcon(icon11);
        actionSetCenteredPerspectiveView = new QAction(ccViewerClass);
        actionSetCenteredPerspectiveView->setObjectName(QString::fromUtf8("actionSetCenteredPerspectiveView"));
        actionSetCenteredPerspectiveView->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/CC/images/ccCenteredPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetCenteredPerspectiveView->setIcon(icon12);
        actionSetViewerPerspectiveView = new QAction(ccViewerClass);
        actionSetViewerPerspectiveView->setObjectName(QString::fromUtf8("actionSetViewerPerspectiveView"));
        actionSetViewerPerspectiveView->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/CC/images/ccViewerBasedPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewerPerspectiveView->setIcon(icon13);
        actionSetPivotAlwaysOn = new QAction(ccViewerClass);
        actionSetPivotAlwaysOn->setObjectName(QString::fromUtf8("actionSetPivotAlwaysOn"));
        actionSetPivotAlwaysOn->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/CC/images/ccPivotOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotAlwaysOn->setIcon(icon14);
        actionSetPivotRotationOnly = new QAction(ccViewerClass);
        actionSetPivotRotationOnly->setObjectName(QString::fromUtf8("actionSetPivotRotationOnly"));
        actionSetPivotRotationOnly->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/CC/images/ccPivotAuto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotRotationOnly->setIcon(icon15);
        actionSetPivotOff = new QAction(ccViewerClass);
        actionSetPivotOff->setObjectName(QString::fromUtf8("actionSetPivotOff"));
        actionSetPivotOff->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/CC/images/ccPivotOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotOff->setIcon(icon16);
        actionSetViewIso1 = new QAction(ccViewerClass);
        actionSetViewIso1->setObjectName(QString::fromUtf8("actionSetViewIso1"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/CC/images/ccViewIso1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso1->setIcon(icon17);
        actionSetViewIso1->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewIso2 = new QAction(ccViewerClass);
        actionSetViewIso2->setObjectName(QString::fromUtf8("actionSetViewIso2"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/CC/images/ccViewIso2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso2->setIcon(icon18);
        actionSetViewIso2->setShortcutContext(Qt::ApplicationShortcut);
        actionEnable3DMouse = new QAction(ccViewerClass);
        actionEnable3DMouse->setObjectName(QString::fromUtf8("actionEnable3DMouse"));
        actionEnable3DMouse->setCheckable(true);
        actionZoomOnSelectedEntity = new QAction(ccViewerClass);
        actionZoomOnSelectedEntity->setObjectName(QString::fromUtf8("actionZoomOnSelectedEntity"));
        actionGlobalZoom = new QAction(ccViewerClass);
        actionGlobalZoom->setObjectName(QString::fromUtf8("actionGlobalZoom"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/CC/images/ccGlobalZoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGlobalZoom->setIcon(icon19);
        actionNoFilter = new QAction(ccViewerClass);
        actionNoFilter->setObjectName(QString::fromUtf8("actionNoFilter"));
        actionLockRotationVertAxis = new QAction(ccViewerClass);
        actionLockRotationVertAxis->setObjectName(QString::fromUtf8("actionLockRotationVertAxis"));
        actionLockRotationVertAxis->setCheckable(true);
        actionLockRotationVertAxis->setShortcutContext(Qt::ApplicationShortcut);
        actionEnableStereo = new QAction(ccViewerClass);
        actionEnableStereo->setObjectName(QString::fromUtf8("actionEnableStereo"));
        actionEnableStereo->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/CC/images/ccStereo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnableStereo->setIcon(icon20);
        actionShowMaterials = new QAction(ccViewerClass);
        actionShowMaterials->setObjectName(QString::fromUtf8("actionShowMaterials"));
        actionShowMaterials->setCheckable(true);
        actionShowMaterials->setShortcutContext(Qt::ApplicationShortcut);
        centralWidget = new QWidget(ccViewerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        GLframe = new QFrame(centralWidget);
        GLframe->setObjectName(QString::fromUtf8("GLframe"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GLframe->sizePolicy().hasHeightForWidth());
        GLframe->setSizePolicy(sizePolicy);
        GLframe->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border: 2px solid white;\n"
"	border-radius: 10px;\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(10,102,151), stop:1 rgb(0,0,0));\n"
" }\n"
"\n"
""));
        GLframe->setFrameShape(QFrame::Box);
        GLframe->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(GLframe);

        ccViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ccViewerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuPerspective = new QMenu(menuOptions);
        menuPerspective->setObjectName(QString::fromUtf8("menuPerspective"));
        menuPerspective->setIcon(icon12);
        menuLights = new QMenu(menuOptions);
        menuLights->setObjectName(QString::fromUtf8("menuLights"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/CC/images/ccSunLight.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLights->setIcon(icon21);
        menuStandardViews = new QMenu(menuOptions);
        menuStandardViews->setObjectName(QString::fromUtf8("menuStandardViews"));
        menuStandardViews->setIcon(icon4);
        menuSelected = new QMenu(menuOptions);
        menuSelected->setObjectName(QString::fromUtf8("menuSelected"));
        menuSelectSF = new QMenu(menuSelected);
        menuSelectSF->setObjectName(QString::fromUtf8("menuSelectSF"));
        menuSelectSF->setEnabled(false);
        menuRotationSymbol = new QMenu(menuOptions);
        menuRotationSymbol->setObjectName(QString::fromUtf8("menuRotationSymbol"));
        menuRotationSymbol->setIcon(icon14);
        menu3DMouse = new QMenu(menuOptions);
        menu3DMouse->setObjectName(QString::fromUtf8("menu3DMouse"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/CC/images/im3DxLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu3DMouse->setIcon(icon22);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuPlugins = new QMenu(menuBar);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        ccViewerClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(ccViewerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ccViewerClass->setStatusBar(statusBar);

        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuPlugins->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuOptions->addAction(actionDisplayParameters);
        menuOptions->addAction(actionEditCamera);
        menuOptions->addSeparator();
        menuOptions->addAction(menuStandardViews->menuAction());
        menuOptions->addAction(menuPerspective->menuAction());
        menuOptions->addAction(menuRotationSymbol->menuAction());
        menuOptions->addAction(menu3DMouse->menuAction());
        menuOptions->addAction(menuLights->menuAction());
        menuOptions->addAction(actionGlobalZoom);
        menuOptions->addAction(actionEnableStereo);
        menuOptions->addAction(actionFullScreen);
        menuOptions->addAction(actionLockRotationVertAxis);
        menuOptions->addSeparator();
        menuOptions->addAction(menuSelected->menuAction());
        menuPerspective->addAction(actionSetOrthoView);
        menuPerspective->addAction(actionSetCenteredPerspectiveView);
        menuPerspective->addAction(actionSetViewerPerspectiveView);
        menuLights->addAction(actionToggleSunLight);
        menuLights->addAction(actionToggleCustomLight);
        menuStandardViews->addAction(actionSetViewTop);
        menuStandardViews->addAction(actionSetViewFront);
        menuStandardViews->addAction(actionSetViewLeft);
        menuStandardViews->addAction(actionSetViewBack);
        menuStandardViews->addAction(actionSetViewRight);
        menuStandardViews->addAction(actionSetViewBottom);
        menuStandardViews->addAction(actionSetViewIso1);
        menuStandardViews->addAction(actionSetViewIso2);
        menuSelected->addAction(actionShowColors);
        menuSelected->addAction(actionShowNormals);
        menuSelected->addAction(actionShowMaterials);
        menuSelected->addSeparator();
        menuSelected->addAction(actionShowScalarField);
        menuSelected->addAction(actionShowColorRamp);
        menuSelected->addAction(menuSelectSF->menuAction());
        menuSelected->addAction(actionZoomOnSelectedEntity);
        menuSelected->addAction(actionDelete);
        menuSelectSF->addAction(actionDummyAction);
        menuRotationSymbol->addAction(actionSetPivotAlwaysOn);
        menuRotationSymbol->addAction(actionSetPivotRotationOnly);
        menuRotationSymbol->addAction(actionSetPivotOff);
        menu3DMouse->addAction(actionEnable3DMouse);
        menuAbout->addAction(actionAbout);
        menuAbout->addSeparator();
        menuAbout->addAction(actionHelpShortctus);
        menuPlugins->addAction(actionNoFilter);

        retranslateUi(ccViewerClass);

        QMetaObject::connectSlotsByName(ccViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ccViewerClass)
    {
        ccViewerClass->setWindowTitle(QApplication::translate("ccViewerClass", "ccViewer", 0, QApplication::UnicodeUTF8));
        actionDisplayParameters->setText(QApplication::translate("ccViewerClass", "Display parameters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisplayParameters->setToolTip(QApplication::translate("ccViewerClass", "Set display parameters (light, materials, etc.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDisplayParameters->setStatusTip(QApplication::translate("ccViewerClass", "Set display parameters (light, materials, etc.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDisplayParameters->setShortcut(QApplication::translate("ccViewerClass", "Alt+D", 0, QApplication::UnicodeUTF8));
        actionFullScreen->setText(QApplication::translate("ccViewerClass", "Full screen", 0, QApplication::UnicodeUTF8));
        actionFullScreen->setShortcut(QApplication::translate("ccViewerClass", "F11", 0, QApplication::UnicodeUTF8));
        actionEditCamera->setText(QApplication::translate("ccViewerClass", "Camera parameters", 0, QApplication::UnicodeUTF8));
        actionEditCamera->setShortcut(QApplication::translate("ccViewerClass", "Alt+C", 0, QApplication::UnicodeUTF8));
        actionToggleSunLight->setText(QApplication::translate("ccViewerClass", "Sun", 0, QApplication::UnicodeUTF8));
        actionToggleSunLight->setShortcut(QApplication::translate("ccViewerClass", "F6", 0, QApplication::UnicodeUTF8));
        actionToggleCustomLight->setText(QApplication::translate("ccViewerClass", "Custom", 0, QApplication::UnicodeUTF8));
        actionToggleCustomLight->setShortcut(QApplication::translate("ccViewerClass", "F7", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("ccViewerClass", "About", 0, QApplication::UnicodeUTF8));
        actionHelpShortctus->setText(QApplication::translate("ccViewerClass", "Shortctus", 0, QApplication::UnicodeUTF8));
        actionHelpShortctus->setShortcut(QApplication::translate("ccViewerClass", "F1", 0, QApplication::UnicodeUTF8));
        actionSetViewFront->setText(QApplication::translate("ccViewerClass", "Front", 0, QApplication::UnicodeUTF8));
        actionSetViewFront->setShortcut(QApplication::translate("ccViewerClass", "5", 0, QApplication::UnicodeUTF8));
        actionSetViewBack->setText(QApplication::translate("ccViewerClass", "Back", 0, QApplication::UnicodeUTF8));
        actionSetViewBack->setShortcut(QApplication::translate("ccViewerClass", "0", 0, QApplication::UnicodeUTF8));
        actionSetViewLeft->setText(QApplication::translate("ccViewerClass", "Left", 0, QApplication::UnicodeUTF8));
        actionSetViewLeft->setShortcut(QApplication::translate("ccViewerClass", "4", 0, QApplication::UnicodeUTF8));
        actionSetViewRight->setText(QApplication::translate("ccViewerClass", "Right", 0, QApplication::UnicodeUTF8));
        actionSetViewRight->setShortcut(QApplication::translate("ccViewerClass", "6", 0, QApplication::UnicodeUTF8));
        actionSetViewTop->setText(QApplication::translate("ccViewerClass", "Top", 0, QApplication::UnicodeUTF8));
        actionSetViewTop->setShortcut(QApplication::translate("ccViewerClass", "8", 0, QApplication::UnicodeUTF8));
        actionSetViewBottom->setText(QApplication::translate("ccViewerClass", "Bottom", 0, QApplication::UnicodeUTF8));
        actionSetViewBottom->setShortcut(QApplication::translate("ccViewerClass", "2", 0, QApplication::UnicodeUTF8));
        actionShowColors->setText(QApplication::translate("ccViewerClass", "Show Colors", 0, QApplication::UnicodeUTF8));
        actionShowColors->setShortcut(QApplication::translate("ccViewerClass", "C", 0, QApplication::UnicodeUTF8));
        actionShowNormals->setText(QApplication::translate("ccViewerClass", "Show Normals", 0, QApplication::UnicodeUTF8));
        actionShowNormals->setShortcut(QApplication::translate("ccViewerClass", "N", 0, QApplication::UnicodeUTF8));
        actionShowColorRamp->setText(QApplication::translate("ccViewerClass", "Show Color ramp", 0, QApplication::UnicodeUTF8));
        actionShowColorRamp->setShortcut(QApplication::translate("ccViewerClass", "R", 0, QApplication::UnicodeUTF8));
        actionShowScalarField->setText(QApplication::translate("ccViewerClass", "Show Scalar field", 0, QApplication::UnicodeUTF8));
        actionShowScalarField->setShortcut(QApplication::translate("ccViewerClass", "S", 0, QApplication::UnicodeUTF8));
        actionDummyAction->setText(QApplication::translate("ccViewerClass", "DummyAction", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("ccViewerClass", "Delete", 0, QApplication::UnicodeUTF8));
        actionDelete->setShortcut(QApplication::translate("ccViewerClass", "Del", 0, QApplication::UnicodeUTF8));
        actionSetOrthoView->setText(QApplication::translate("ccViewerClass", "Orthographic projection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetOrthoView->setToolTip(QApplication::translate("ccViewerClass", "Set orthographic projection for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetOrthoView->setStatusTip(QApplication::translate("ccViewerClass", "Set orthographic projection for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetOrthoView->setShortcut(QApplication::translate("ccViewerClass", "F2", 0, QApplication::UnicodeUTF8));
        actionSetCenteredPerspectiveView->setText(QApplication::translate("ccViewerClass", "Object-centered perspective", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetCenteredPerspectiveView->setToolTip(QApplication::translate("ccViewerClass", "Set object-centered perspective for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetCenteredPerspectiveView->setStatusTip(QApplication::translate("ccViewerClass", "Set object-centered perspective for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetCenteredPerspectiveView->setShortcut(QApplication::translate("ccViewerClass", "F3", 0, QApplication::UnicodeUTF8));
        actionSetViewerPerspectiveView->setText(QApplication::translate("ccViewerClass", "Viewer-based perspective", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewerPerspectiveView->setToolTip(QApplication::translate("ccViewerClass", "Set viewer-based perspective for current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewerPerspectiveView->setStatusTip(QApplication::translate("ccViewerClass", "Set viewer-based perspectivefor current 3D View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewerPerspectiveView->setShortcut(QApplication::translate("ccViewerClass", "F4", 0, QApplication::UnicodeUTF8));
        actionSetPivotAlwaysOn->setText(QApplication::translate("ccViewerClass", "Always visible", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetPivotAlwaysOn->setToolTip(QApplication::translate("ccViewerClass", "Pivot always visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotAlwaysOn->setStatusTip(QApplication::translate("ccViewerClass", "Pivot always visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetPivotRotationOnly->setText(QApplication::translate("ccViewerClass", "Rotation only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetPivotRotationOnly->setToolTip(QApplication::translate("ccViewerClass", "Pivot visible when rotating", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotRotationOnly->setStatusTip(QApplication::translate("ccViewerClass", "Pivot visible when rotating", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetPivotOff->setText(QApplication::translate("ccViewerClass", "Never visible", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetPivotOff->setToolTip(QApplication::translate("ccViewerClass", "Pivot never visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotOff->setStatusTip(QApplication::translate("ccViewerClass", "Pivot never visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewIso1->setText(QApplication::translate("ccViewerClass", "Iso front", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewIso1->setToolTip(QApplication::translate("ccViewerClass", "Set view to 'front' isometric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewIso1->setStatusTip(QApplication::translate("ccViewerClass", "Set view to 'front' isometric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewIso1->setShortcut(QApplication::translate("ccViewerClass", "7", 0, QApplication::UnicodeUTF8));
        actionSetViewIso2->setText(QApplication::translate("ccViewerClass", "Iso back", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewIso2->setToolTip(QApplication::translate("ccViewerClass", "Set view to 'back' isometric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewIso2->setStatusTip(QApplication::translate("ccViewerClass", "Set view to 'back' isometric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSetViewIso2->setShortcut(QApplication::translate("ccViewerClass", "9", 0, QApplication::UnicodeUTF8));
        actionEnable3DMouse->setText(QApplication::translate("ccViewerClass", "Enable", 0, QApplication::UnicodeUTF8));
        actionZoomOnSelectedEntity->setText(QApplication::translate("ccViewerClass", "Zoom on", 0, QApplication::UnicodeUTF8));
        actionZoomOnSelectedEntity->setShortcut(QApplication::translate("ccViewerClass", "Z", 0, QApplication::UnicodeUTF8));
        actionGlobalZoom->setText(QApplication::translate("ccViewerClass", "Global Zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionGlobalZoom->setStatusTip(QApplication::translate("ccViewerClass", "Global Zoom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionNoFilter->setText(QApplication::translate("ccViewerClass", "Remove", 0, QApplication::UnicodeUTF8));
        actionLockRotationVertAxis->setText(QApplication::translate("ccViewerClass", "Lock rotation around vert. axis", 0, QApplication::UnicodeUTF8));
        actionLockRotationVertAxis->setShortcut(QApplication::translate("ccViewerClass", "L", 0, QApplication::UnicodeUTF8));
        actionEnableStereo->setText(QApplication::translate("ccViewerClass", "Stereo mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEnableStereo->setToolTip(QApplication::translate("ccViewerClass", "Enable stereo mode (with red-blue or red-cyan glasses)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEnableStereo->setShortcut(QApplication::translate("ccViewerClass", "F10", 0, QApplication::UnicodeUTF8));
        actionShowMaterials->setText(QApplication::translate("ccViewerClass", "Show Texture/Materials", 0, QApplication::UnicodeUTF8));
        actionShowMaterials->setShortcut(QApplication::translate("ccViewerClass", "M", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("ccViewerClass", "Options", 0, QApplication::UnicodeUTF8));
        menuPerspective->setTitle(QApplication::translate("ccViewerClass", "Perspective", 0, QApplication::UnicodeUTF8));
        menuLights->setTitle(QApplication::translate("ccViewerClass", "Lights", 0, QApplication::UnicodeUTF8));
        menuStandardViews->setTitle(QApplication::translate("ccViewerClass", "Standard views", 0, QApplication::UnicodeUTF8));
        menuSelected->setTitle(QApplication::translate("ccViewerClass", "Selected entity", 0, QApplication::UnicodeUTF8));
        menuSelectSF->setTitle(QApplication::translate("ccViewerClass", "Current S.F.", 0, QApplication::UnicodeUTF8));
        menuRotationSymbol->setTitle(QApplication::translate("ccViewerClass", "Rotation symbol", 0, QApplication::UnicodeUTF8));
        menu3DMouse->setTitle(QApplication::translate("ccViewerClass", "3D mouse", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("ccViewerClass", "Help", 0, QApplication::UnicodeUTF8));
        menuPlugins->setTitle(QApplication::translate("ccViewerClass", "Shaders", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ccViewerClass: public Ui_ccViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCVIEWER_H
