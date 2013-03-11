/********************************************************************************
** Form generated from reading UI file 'ccviewer.ui'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: Qt User Interface Compiler version 4.8.2
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
    QAction *actionToggleCenteredPerspective;
    QAction *actionToggleViewerBasedPerspective;
    QAction *actionDisablePerspective;
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
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *GLframe;
    QMenuBar *menuBar;
    QMenu *menuOptions;
    QMenu *menuPerspective;
    QMenu *menuLights;
    QMenu *menuStandard_views;
    QMenu *menuSelected;
    QMenu *menuSelectSF;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ccViewerClass)
    {
        if (ccViewerClass->objectName().isEmpty())
            ccViewerClass->setObjectName(QString::fromUtf8("ccViewerClass"));
        ccViewerClass->resize(884, 556);
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
        icon1.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_lightParamsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplayParameters->setIcon(icon1);
        actionDisplayParameters->setShortcutContext(Qt::ApplicationShortcut);
        actionFullScreen = new QAction(ccViewerClass);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        actionFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleCenteredPerspective = new QAction(ccViewerClass);
        actionToggleCenteredPerspective->setObjectName(QString::fromUtf8("actionToggleCenteredPerspective"));
        actionToggleCenteredPerspective->setCheckable(true);
        actionToggleCenteredPerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleViewerBasedPerspective = new QAction(ccViewerClass);
        actionToggleViewerBasedPerspective->setObjectName(QString::fromUtf8("actionToggleViewerBasedPerspective"));
        actionToggleViewerBasedPerspective->setCheckable(true);
        actionToggleViewerBasedPerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionDisablePerspective = new QAction(ccViewerClass);
        actionDisablePerspective->setObjectName(QString::fromUtf8("actionDisablePerspective"));
        actionDisablePerspective->setCheckable(true);
        actionDisablePerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionEditCamera = new QAction(ccViewerClass);
        actionEditCamera->setObjectName(QString::fromUtf8("actionEditCamera"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/Menu/images/menu/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCamera->setIcon(icon2);
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewFront->setIcon(icon3);
        actionSetViewFront->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBack = new QAction(ccViewerClass);
        actionSetViewBack->setObjectName(QString::fromUtf8("actionSetViewBack"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBack->setIcon(icon4);
        actionSetViewBack->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewLeft = new QAction(ccViewerClass);
        actionSetViewLeft->setObjectName(QString::fromUtf8("actionSetViewLeft"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewLeft->setIcon(icon5);
        actionSetViewLeft->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewRight = new QAction(ccViewerClass);
        actionSetViewRight->setObjectName(QString::fromUtf8("actionSetViewRight"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewRight->setIcon(icon6);
        actionSetViewRight->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewTop = new QAction(ccViewerClass);
        actionSetViewTop->setObjectName(QString::fromUtf8("actionSetViewTop"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewTop->setIcon(icon7);
        actionSetViewTop->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBottom = new QAction(ccViewerClass);
        actionSetViewBottom->setObjectName(QString::fromUtf8("actionSetViewBottom"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBottom->setIcon(icon8);
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
        actionDelete->setShortcutContext(Qt::ApplicationShortcut);
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
        menuBar->setGeometry(QRect(0, 0, 884, 21));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuPerspective = new QMenu(menuOptions);
        menuPerspective->setObjectName(QString::fromUtf8("menuPerspective"));
        menuLights = new QMenu(menuOptions);
        menuLights->setObjectName(QString::fromUtf8("menuLights"));
        menuStandard_views = new QMenu(menuOptions);
        menuStandard_views->setObjectName(QString::fromUtf8("menuStandard_views"));
        menuSelected = new QMenu(menuOptions);
        menuSelected->setObjectName(QString::fromUtf8("menuSelected"));
        menuSelectSF = new QMenu(menuSelected);
        menuSelectSF->setObjectName(QString::fromUtf8("menuSelectSF"));
        menuSelectSF->setEnabled(false);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        ccViewerClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(ccViewerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ccViewerClass->setStatusBar(statusBar);

        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuOptions->addAction(actionDisplayParameters);
        menuOptions->addAction(actionEditCamera);
        menuOptions->addSeparator();
        menuOptions->addAction(menuStandard_views->menuAction());
        menuOptions->addAction(menuPerspective->menuAction());
        menuOptions->addAction(menuLights->menuAction());
        menuOptions->addAction(actionFullScreen);
        menuOptions->addSeparator();
        menuOptions->addAction(menuSelected->menuAction());
        menuPerspective->addAction(actionDisablePerspective);
        menuPerspective->addAction(actionToggleCenteredPerspective);
        menuPerspective->addAction(actionToggleViewerBasedPerspective);
        menuLights->addAction(actionToggleSunLight);
        menuLights->addAction(actionToggleCustomLight);
        menuStandard_views->addAction(actionSetViewTop);
        menuStandard_views->addAction(actionSetViewFront);
        menuStandard_views->addAction(actionSetViewLeft);
        menuStandard_views->addAction(actionSetViewBack);
        menuStandard_views->addAction(actionSetViewRight);
        menuStandard_views->addAction(actionSetViewBottom);
        menuSelected->addAction(actionShowColors);
        menuSelected->addAction(actionShowNormals);
        menuSelected->addSeparator();
        menuSelected->addAction(actionShowScalarField);
        menuSelected->addAction(actionShowColorRamp);
        menuSelected->addAction(menuSelectSF->menuAction());
        menuSelected->addAction(actionDelete);
        menuSelectSF->addAction(actionDummyAction);
        menuAbout->addAction(actionAbout);
        menuAbout->addSeparator();
        menuAbout->addAction(actionHelpShortctus);

        retranslateUi(ccViewerClass);

        QMetaObject::connectSlotsByName(ccViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ccViewerClass)
    {
        ccViewerClass->setWindowTitle(QApplication::translate("ccViewerClass", "Viewer", 0, QApplication::UnicodeUTF8));
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
        actionToggleCenteredPerspective->setText(QApplication::translate("ccViewerClass", "Centered", 0, QApplication::UnicodeUTF8));
        actionToggleCenteredPerspective->setShortcut(QApplication::translate("ccViewerClass", "F3", 0, QApplication::UnicodeUTF8));
        actionToggleViewerBasedPerspective->setText(QApplication::translate("ccViewerClass", "Viewer-based", 0, QApplication::UnicodeUTF8));
        actionToggleViewerBasedPerspective->setShortcut(QApplication::translate("ccViewerClass", "F4", 0, QApplication::UnicodeUTF8));
        actionDisablePerspective->setText(QApplication::translate("ccViewerClass", "Disabled", 0, QApplication::UnicodeUTF8));
        actionDisablePerspective->setShortcut(QApplication::translate("ccViewerClass", "F2", 0, QApplication::UnicodeUTF8));
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
        menuOptions->setTitle(QApplication::translate("ccViewerClass", "Options", 0, QApplication::UnicodeUTF8));
        menuPerspective->setTitle(QApplication::translate("ccViewerClass", "Perspective", 0, QApplication::UnicodeUTF8));
        menuLights->setTitle(QApplication::translate("ccViewerClass", "Lights", 0, QApplication::UnicodeUTF8));
        menuStandard_views->setTitle(QApplication::translate("ccViewerClass", "Standard views", 0, QApplication::UnicodeUTF8));
        menuSelected->setTitle(QApplication::translate("ccViewerClass", "Selected entity", 0, QApplication::UnicodeUTF8));
        menuSelectSF->setTitle(QApplication::translate("ccViewerClass", "Current S.F.", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("ccViewerClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ccViewerClass: public Ui_ccViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCVIEWER_H
