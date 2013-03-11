/********************************************************************************
** Form generated from reading UI file 'cameraParamDlg.ui'
**
** Created: Sun Mar 10 15:48:36 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAPARAMDLG_H
#define UI_CAMERAPARAMDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CameraParamDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSlider *thetaSlider;
    QDoubleSpinBox *thetaSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSlider *phiSlider;
    QDoubleSpinBox *phiSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QSlider *psiSlider;
    QDoubleSpinBox *psiSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *pushMatrixToolButton;
    QFrame *buttonsFrame;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *revertMatrixToolButton;
    QToolButton *viewUpToolButton;
    QToolButton *viewDownToolButton;
    QToolButton *viewLeftToolButton;
    QToolButton *viewRightToolButton;
    QToolButton *viewFrontToolButton;
    QToolButton *viewBackToolButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *centerPointPickingToolButton;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *txDoubleSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *tyDoubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *tzDoubleSpinBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *fovDoubleSpinBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CameraParamDlg)
    {
        if (CameraParamDlg->objectName().isEmpty())
            CameraParamDlg->setObjectName(QString::fromUtf8("CameraParamDlg"));
        CameraParamDlg->resize(317, 581);
        CameraParamDlg->setMinimumSize(QSize(317, 581));
        CameraParamDlg->setMaximumSize(QSize(317, 581));
        verticalLayout_3 = new QVBoxLayout(CameraParamDlg);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(CameraParamDlg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        thetaSlider = new QSlider(CameraParamDlg);
        thetaSlider->setObjectName(QString::fromUtf8("thetaSlider"));
        thetaSlider->setMinimumSize(QSize(120, 0));
        thetaSlider->setMinimum(-1800);
        thetaSlider->setMaximum(1800);
        thetaSlider->setSingleStep(10);
        thetaSlider->setPageStep(100);
        thetaSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(thetaSlider);

        thetaSpinBox = new QDoubleSpinBox(CameraParamDlg);
        thetaSpinBox->setObjectName(QString::fromUtf8("thetaSpinBox"));
        thetaSpinBox->setDecimals(1);
        thetaSpinBox->setMinimum(-180);
        thetaSpinBox->setMaximum(180);
        thetaSpinBox->setSingleStep(0.1);

        horizontalLayout_2->addWidget(thetaSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(CameraParamDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        phiSlider = new QSlider(CameraParamDlg);
        phiSlider->setObjectName(QString::fromUtf8("phiSlider"));
        phiSlider->setMinimumSize(QSize(120, 0));
        phiSlider->setMinimum(-1800);
        phiSlider->setMaximum(1800);
        phiSlider->setSingleStep(10);
        phiSlider->setPageStep(100);
        phiSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(phiSlider);

        phiSpinBox = new QDoubleSpinBox(CameraParamDlg);
        phiSpinBox->setObjectName(QString::fromUtf8("phiSpinBox"));
        phiSpinBox->setDecimals(1);
        phiSpinBox->setMinimum(-180);
        phiSpinBox->setMaximum(180);
        phiSpinBox->setSingleStep(0.1);

        horizontalLayout->addWidget(phiSpinBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(CameraParamDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        psiSlider = new QSlider(CameraParamDlg);
        psiSlider->setObjectName(QString::fromUtf8("psiSlider"));
        psiSlider->setMinimumSize(QSize(120, 0));
        psiSlider->setMinimum(-1800);
        psiSlider->setMaximum(1800);
        psiSlider->setSingleStep(10);
        psiSlider->setPageStep(100);
        psiSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(psiSlider);

        psiSpinBox = new QDoubleSpinBox(CameraParamDlg);
        psiSpinBox->setObjectName(QString::fromUtf8("psiSpinBox"));
        psiSpinBox->setDecimals(1);
        psiSpinBox->setMinimum(-180);
        psiSpinBox->setMaximum(180);
        psiSpinBox->setSingleStep(0.1);

        horizontalLayout_3->addWidget(psiSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        label_7 = new QLabel(CameraParamDlg);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(150, 169));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/CC/Other/images/other/Euler_angles.png")));
        label_7->setScaledContents(true);

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushMatrixToolButton = new QToolButton(CameraParamDlg);
        pushMatrixToolButton->setObjectName(QString::fromUtf8("pushMatrixToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Other/images/other/panier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushMatrixToolButton->setIcon(icon);

        horizontalLayout_9->addWidget(pushMatrixToolButton);

        buttonsFrame = new QFrame(CameraParamDlg);
        buttonsFrame->setObjectName(QString::fromUtf8("buttonsFrame"));
        buttonsFrame->setEnabled(false);
        buttonsFrame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_8 = new QHBoxLayout(buttonsFrame);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        revertMatrixToolButton = new QToolButton(buttonsFrame);
        revertMatrixToolButton->setObjectName(QString::fromUtf8("revertMatrixToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/Other/images/other/revert.png"), QSize(), QIcon::Normal, QIcon::Off);
        revertMatrixToolButton->setIcon(icon1);

        horizontalLayout_8->addWidget(revertMatrixToolButton);

        viewUpToolButton = new QToolButton(buttonsFrame);
        viewUpToolButton->setObjectName(QString::fromUtf8("viewUpToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewUpToolButton->setIcon(icon2);

        horizontalLayout_8->addWidget(viewUpToolButton);

        viewDownToolButton = new QToolButton(buttonsFrame);
        viewDownToolButton->setObjectName(QString::fromUtf8("viewDownToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewDownToolButton->setIcon(icon3);

        horizontalLayout_8->addWidget(viewDownToolButton);

        viewLeftToolButton = new QToolButton(buttonsFrame);
        viewLeftToolButton->setObjectName(QString::fromUtf8("viewLeftToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewLeftToolButton->setIcon(icon4);

        horizontalLayout_8->addWidget(viewLeftToolButton);

        viewRightToolButton = new QToolButton(buttonsFrame);
        viewRightToolButton->setObjectName(QString::fromUtf8("viewRightToolButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewRightToolButton->setIcon(icon5);

        horizontalLayout_8->addWidget(viewRightToolButton);

        viewFrontToolButton = new QToolButton(buttonsFrame);
        viewFrontToolButton->setObjectName(QString::fromUtf8("viewFrontToolButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewFrontToolButton->setIcon(icon6);

        horizontalLayout_8->addWidget(viewFrontToolButton);

        viewBackToolButton = new QToolButton(buttonsFrame);
        viewBackToolButton->setObjectName(QString::fromUtf8("viewBackToolButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_ViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewBackToolButton->setIcon(icon7);

        horizontalLayout_8->addWidget(viewBackToolButton);


        horizontalLayout_9->addWidget(buttonsFrame);


        verticalLayout_3->addLayout(horizontalLayout_9);

        groupBox = new QGroupBox(CameraParamDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_6 = new QSpacerItem(13, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_10->addWidget(label_9);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);

        centerPointPickingToolButton = new QToolButton(groupBox);
        centerPointPickingToolButton->setObjectName(QString::fromUtf8("centerPointPickingToolButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/Comp/images/comp/pointPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        centerPointPickingToolButton->setIcon(icon8);

        horizontalLayout_12->addWidget(centerPointPickingToolButton);


        verticalLayout_2->addLayout(horizontalLayout_12);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_13->addLayout(verticalLayout_2);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_13->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        txDoubleSpinBox = new QDoubleSpinBox(groupBox);
        txDoubleSpinBox->setObjectName(QString::fromUtf8("txDoubleSpinBox"));
        txDoubleSpinBox->setDecimals(6);
        txDoubleSpinBox->setMinimum(-1e+09);
        txDoubleSpinBox->setMaximum(1e+09);

        horizontalLayout_4->addWidget(txDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        tyDoubleSpinBox = new QDoubleSpinBox(groupBox);
        tyDoubleSpinBox->setObjectName(QString::fromUtf8("tyDoubleSpinBox"));
        tyDoubleSpinBox->setDecimals(6);
        tyDoubleSpinBox->setMinimum(-1e+09);
        tyDoubleSpinBox->setMaximum(1e+09);

        horizontalLayout_5->addWidget(tyDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        tzDoubleSpinBox = new QDoubleSpinBox(groupBox);
        tzDoubleSpinBox->setObjectName(QString::fromUtf8("tzDoubleSpinBox"));
        tzDoubleSpinBox->setDecimals(6);
        tzDoubleSpinBox->setMinimum(-1e+09);
        tzDoubleSpinBox->setMaximum(1e+09);

        horizontalLayout_6->addWidget(tzDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_13->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_13);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_11->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);

        fovDoubleSpinBox = new QDoubleSpinBox(groupBox);
        fovDoubleSpinBox->setObjectName(QString::fromUtf8("fovDoubleSpinBox"));
        fovDoubleSpinBox->setMinimum(0.01);
        fovDoubleSpinBox->setMaximum(10000);
        fovDoubleSpinBox->setValue(25);

        horizontalLayout_11->addWidget(fovDoubleSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_11);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(CameraParamDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CameraParamDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), CameraParamDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CameraParamDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(CameraParamDlg);
    } // setupUi

    void retranslateUi(QDialog *CameraParamDlg)
    {
        CameraParamDlg->setWindowTitle(QApplication::translate("CameraParamDlg", "Camera parameters", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CameraParamDlg", "theta", 0, QApplication::UnicodeUTF8));
        thetaSpinBox->setSuffix(QApplication::translate("CameraParamDlg", "\302\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CameraParamDlg", "phi", 0, QApplication::UnicodeUTF8));
        phiSpinBox->setSuffix(QApplication::translate("CameraParamDlg", "\302\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CameraParamDlg", "psi", 0, QApplication::UnicodeUTF8));
        psiSpinBox->setSuffix(QApplication::translate("CameraParamDlg", "\302\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("CameraParamDlg", "Euler angles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_7->setStatusTip(QApplication::translate("CameraParamDlg", "Euler angles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushMatrixToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Push current camera position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushMatrixToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Push current camera position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        revertMatrixToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Revert to previously stored camera position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        revertMatrixToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Revert to previously stored camera position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewUpToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Set 'up' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewUpToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Set 'up' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        viewUpToolButton->setText(QApplication::translate("CameraParamDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewDownToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Set 'down' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewDownToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Set 'down' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        viewDownToolButton->setText(QApplication::translate("CameraParamDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewLeftToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Set 'left' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewLeftToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Set 'left' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        viewLeftToolButton->setText(QApplication::translate("CameraParamDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewRightToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Set 'right' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewRightToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Set 'right' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        viewRightToolButton->setText(QApplication::translate("CameraParamDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewFrontToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Set 'front' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewFrontToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Set 'front' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        viewFrontToolButton->setText(QApplication::translate("CameraParamDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewBackToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Set 'back' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewBackToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Set 'back' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        viewBackToolButton->setText(QApplication::translate("CameraParamDlg", "...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_9->setText(QApplication::translate("CameraParamDlg", "Pivot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        centerPointPickingToolButton->setToolTip(QApplication::translate("CameraParamDlg", "Pick point as pivot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        centerPointPickingToolButton->setStatusTip(QApplication::translate("CameraParamDlg", "Pick point as pivot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        centerPointPickingToolButton->setText(QString());
        label_4->setText(QApplication::translate("CameraParamDlg", "Px", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CameraParamDlg", "Py", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CameraParamDlg", "Pz", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CameraParamDlg", "f.o.v. (perspective only)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CameraParamDlg: public Ui_CameraParamDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAPARAMDLG_H
