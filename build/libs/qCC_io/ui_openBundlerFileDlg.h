/********************************************************************************
** Form generated from reading UI file 'openBundlerFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENBUNDLERFILEDLG_H
#define UI_OPENBUNDLERFILEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BundlerImportDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *infoGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLabel *keyPointsCountLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *cameraCountLabel;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *imagesGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *imageListFilePathLineEdit;
    QToolButton *browseImageListFileToolButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QDoubleSpinBox *imageScaleDoubleSpinBox;
    QGroupBox *orthoRectGroupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *orthoRectifyAsImageCheckBox;
    QComboBox *orthoRectMethodComboBox;
    QCheckBox *orthoRectifyAsCloudCheckBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QRadioButton *xVertAxisRadioButton;
    QRadioButton *yVertAxisRadioButton;
    QRadioButton *zVertAxisRadioButton;
    QRadioButton *customVertAxisRadioButton;
    QTextEdit *applyTransfoMatrixTextEdit;
    QGroupBox *generateColoredDTMGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QFrame *dtmDensityFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *dtmVerticesSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *altKeypointsCheckBox;
    QFrame *altKeypointsFrame;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *altKeypointsFilePathLineEdit;
    QToolButton *browseAltKeypointsFileToolButton;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *keepImagesInMemoryCheckBox;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *undistortImagesCheckBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *importKeypointsGroupBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BundlerImportDlg)
    {
        if (BundlerImportDlg->objectName().isEmpty())
            BundlerImportDlg->setObjectName(QString::fromUtf8("BundlerImportDlg"));
        BundlerImportDlg->resize(450, 518);
        verticalLayout_3 = new QVBoxLayout(BundlerImportDlg);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        infoGroupBox = new QGroupBox(BundlerImportDlg);
        infoGroupBox->setObjectName(QString::fromUtf8("infoGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(infoGroupBox->sizePolicy().hasHeightForWidth());
        infoGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(infoGroupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(infoGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        versionLabel = new QLabel(infoGroupBox);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(versionLabel);

        horizontalSpacer_5 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_2 = new QLabel(infoGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        keyPointsCountLabel = new QLabel(infoGroupBox);
        keyPointsCountLabel->setObjectName(QString::fromUtf8("keyPointsCountLabel"));

        horizontalLayout_4->addWidget(keyPointsCountLabel);

        horizontalSpacer = new QSpacerItem(55, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label = new QLabel(infoGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        cameraCountLabel = new QLabel(infoGroupBox);
        cameraCountLabel->setObjectName(QString::fromUtf8("cameraCountLabel"));

        horizontalLayout_4->addWidget(cameraCountLabel);

        horizontalSpacer_4 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addWidget(infoGroupBox);

        imagesGroupBox = new QGroupBox(BundlerImportDlg);
        imagesGroupBox->setObjectName(QString::fromUtf8("imagesGroupBox"));
        sizePolicy.setHeightForWidth(imagesGroupBox->sizePolicy().hasHeightForWidth());
        imagesGroupBox->setSizePolicy(sizePolicy);
        imagesGroupBox->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(imagesGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(imagesGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        imageListFilePathLineEdit = new QLineEdit(imagesGroupBox);
        imageListFilePathLineEdit->setObjectName(QString::fromUtf8("imageListFilePathLineEdit"));

        horizontalLayout_2->addWidget(imageListFilePathLineEdit);

        browseImageListFileToolButton = new QToolButton(imagesGroupBox);
        browseImageListFileToolButton->setObjectName(QString::fromUtf8("browseImageListFileToolButton"));

        horizontalLayout_2->addWidget(browseImageListFileToolButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_4 = new QLabel(imagesGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        imageScaleDoubleSpinBox = new QDoubleSpinBox(imagesGroupBox);
        imageScaleDoubleSpinBox->setObjectName(QString::fromUtf8("imageScaleDoubleSpinBox"));
        imageScaleDoubleSpinBox->setMinimum(0.01);
        imageScaleDoubleSpinBox->setValue(1);

        horizontalLayout->addWidget(imageScaleDoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout);

        orthoRectGroupBox = new QGroupBox(imagesGroupBox);
        orthoRectGroupBox->setObjectName(QString::fromUtf8("orthoRectGroupBox"));
        verticalLayout_5 = new QVBoxLayout(orthoRectGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        orthoRectifyAsImageCheckBox = new QCheckBox(orthoRectGroupBox);
        orthoRectifyAsImageCheckBox->setObjectName(QString::fromUtf8("orthoRectifyAsImageCheckBox"));
        orthoRectifyAsImageCheckBox->setChecked(true);

        horizontalLayout_10->addWidget(orthoRectifyAsImageCheckBox);

        orthoRectMethodComboBox = new QComboBox(orthoRectGroupBox);
        orthoRectMethodComboBox->setObjectName(QString::fromUtf8("orthoRectMethodComboBox"));

        horizontalLayout_10->addWidget(orthoRectMethodComboBox);


        verticalLayout_5->addLayout(horizontalLayout_10);

        orthoRectifyAsCloudCheckBox = new QCheckBox(orthoRectGroupBox);
        orthoRectifyAsCloudCheckBox->setObjectName(QString::fromUtf8("orthoRectifyAsCloudCheckBox"));

        verticalLayout_5->addWidget(orthoRectifyAsCloudCheckBox);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(orthoRectGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        xVertAxisRadioButton = new QRadioButton(orthoRectGroupBox);
        xVertAxisRadioButton->setObjectName(QString::fromUtf8("xVertAxisRadioButton"));

        horizontalLayout_9->addWidget(xVertAxisRadioButton);

        yVertAxisRadioButton = new QRadioButton(orthoRectGroupBox);
        yVertAxisRadioButton->setObjectName(QString::fromUtf8("yVertAxisRadioButton"));

        horizontalLayout_9->addWidget(yVertAxisRadioButton);

        zVertAxisRadioButton = new QRadioButton(orthoRectGroupBox);
        zVertAxisRadioButton->setObjectName(QString::fromUtf8("zVertAxisRadioButton"));
        zVertAxisRadioButton->setChecked(true);

        horizontalLayout_9->addWidget(zVertAxisRadioButton);

        customVertAxisRadioButton = new QRadioButton(orthoRectGroupBox);
        customVertAxisRadioButton->setObjectName(QString::fromUtf8("customVertAxisRadioButton"));

        horizontalLayout_9->addWidget(customVertAxisRadioButton);


        verticalLayout_5->addLayout(horizontalLayout_9);

        applyTransfoMatrixTextEdit = new QTextEdit(orthoRectGroupBox);
        applyTransfoMatrixTextEdit->setObjectName(QString::fromUtf8("applyTransfoMatrixTextEdit"));

        verticalLayout_5->addWidget(applyTransfoMatrixTextEdit);


        verticalLayout_2->addWidget(orthoRectGroupBox);

        generateColoredDTMGroupBox = new QGroupBox(imagesGroupBox);
        generateColoredDTMGroupBox->setObjectName(QString::fromUtf8("generateColoredDTMGroupBox"));
        generateColoredDTMGroupBox->setCheckable(true);
        generateColoredDTMGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(generateColoredDTMGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        dtmDensityFrame = new QFrame(generateColoredDTMGroupBox);
        dtmDensityFrame->setObjectName(QString::fromUtf8("dtmDensityFrame"));
        dtmDensityFrame->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dtmDensityFrame->sizePolicy().hasHeightForWidth());
        dtmDensityFrame->setSizePolicy(sizePolicy1);
        dtmDensityFrame->setFrameShape(QFrame::NoFrame);
        dtmDensityFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(dtmDensityFrame);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(dtmDensityFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_5);

        dtmVerticesSpinBox = new QSpinBox(dtmDensityFrame);
        dtmVerticesSpinBox->setObjectName(QString::fromUtf8("dtmVerticesSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dtmVerticesSpinBox->sizePolicy().hasHeightForWidth());
        dtmVerticesSpinBox->setSizePolicy(sizePolicy2);
        dtmVerticesSpinBox->setMaximum(100000000);
        dtmVerticesSpinBox->setSingleStep(1000000);
        dtmVerticesSpinBox->setValue(10000000);

        horizontalLayout_5->addWidget(dtmVerticesSpinBox);


        horizontalLayout_7->addWidget(dtmDensityFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        altKeypointsCheckBox = new QCheckBox(generateColoredDTMGroupBox);
        altKeypointsCheckBox->setObjectName(QString::fromUtf8("altKeypointsCheckBox"));

        horizontalLayout_3->addWidget(altKeypointsCheckBox);

        altKeypointsFrame = new QFrame(generateColoredDTMGroupBox);
        altKeypointsFrame->setObjectName(QString::fromUtf8("altKeypointsFrame"));
        altKeypointsFrame->setEnabled(false);
        altKeypointsFrame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_6 = new QHBoxLayout(altKeypointsFrame);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, 0);
        altKeypointsFilePathLineEdit = new QLineEdit(altKeypointsFrame);
        altKeypointsFilePathLineEdit->setObjectName(QString::fromUtf8("altKeypointsFilePathLineEdit"));

        horizontalLayout_6->addWidget(altKeypointsFilePathLineEdit);

        browseAltKeypointsFileToolButton = new QToolButton(altKeypointsFrame);
        browseAltKeypointsFileToolButton->setObjectName(QString::fromUtf8("browseAltKeypointsFileToolButton"));

        horizontalLayout_6->addWidget(browseAltKeypointsFileToolButton);


        horizontalLayout_3->addWidget(altKeypointsFrame);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(generateColoredDTMGroupBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        keepImagesInMemoryCheckBox = new QCheckBox(imagesGroupBox);
        keepImagesInMemoryCheckBox->setObjectName(QString::fromUtf8("keepImagesInMemoryCheckBox"));

        horizontalLayout_8->addWidget(keepImagesInMemoryCheckBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        undistortImagesCheckBox = new QCheckBox(imagesGroupBox);
        undistortImagesCheckBox->setObjectName(QString::fromUtf8("undistortImagesCheckBox"));
        undistortImagesCheckBox->setEnabled(false);

        horizontalLayout_8->addWidget(undistortImagesCheckBox);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_3->addWidget(imagesGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        importKeypointsGroupBox = new QGroupBox(BundlerImportDlg);
        importKeypointsGroupBox->setObjectName(QString::fromUtf8("importKeypointsGroupBox"));
        importKeypointsGroupBox->setCheckable(true);

        verticalLayout_3->addWidget(importKeypointsGroupBox);

        buttonBox = new QDialogButtonBox(BundlerImportDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(BundlerImportDlg);
        QObject::connect(buttonBox, SIGNAL(rejected()), BundlerImportDlg, SLOT(reject()));
        QObject::connect(customVertAxisRadioButton, SIGNAL(toggled(bool)), applyTransfoMatrixTextEdit, SLOT(setVisible(bool)));
        QObject::connect(orthoRectifyAsImageCheckBox, SIGNAL(toggled(bool)), orthoRectMethodComboBox, SLOT(setEnabled(bool)));
        QObject::connect(altKeypointsCheckBox, SIGNAL(toggled(bool)), altKeypointsFrame, SLOT(setEnabled(bool)));
        QObject::connect(keepImagesInMemoryCheckBox, SIGNAL(toggled(bool)), undistortImagesCheckBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(BundlerImportDlg);
    } // setupUi

    void retranslateUi(QDialog *BundlerImportDlg)
    {
        BundlerImportDlg->setWindowTitle(QApplication::translate("BundlerImportDlg", "Snavely's Bundler Import", 0, QApplication::UnicodeUTF8));
        infoGroupBox->setTitle(QApplication::translate("BundlerImportDlg", "Information", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("BundlerImportDlg", "File version:", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("BundlerImportDlg", "v0.0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BundlerImportDlg", "keypoints:", 0, QApplication::UnicodeUTF8));
        keyPointsCountLabel->setText(QApplication::translate("BundlerImportDlg", "0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BundlerImportDlg", "Cameras:", 0, QApplication::UnicodeUTF8));
        cameraCountLabel->setText(QApplication::translate("BundlerImportDlg", "0", 0, QApplication::UnicodeUTF8));
        imagesGroupBox->setTitle(QApplication::translate("BundlerImportDlg", "Import images", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BundlerImportDlg", "Image list", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imageListFilePathLineEdit->setToolTip(QApplication::translate("BundlerImportDlg", "List of the images corresponding to each camera", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        imageListFilePathLineEdit->setText(QApplication::translate("BundlerImportDlg", "list.txt", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        browseImageListFileToolButton->setToolTip(QApplication::translate("BundlerImportDlg", "Browse", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        browseImageListFileToolButton->setText(QApplication::translate("BundlerImportDlg", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BundlerImportDlg", "Image scale factor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imageScaleDoubleSpinBox->setToolTip(QApplication::translate("BundlerImportDlg", "Image scale factor (relatively to the keypoints). Useful if you want to use images bigger than the ones you used to generate the Bundler .out file and the keypoints.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        imageScaleDoubleSpinBox->setWhatsThis(QApplication::translate("BundlerImportDlg", "Image scale factor relatively to keypoints", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        orthoRectGroupBox->setTitle(QApplication::translate("BundlerImportDlg", "Orthorectification", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        orthoRectifyAsImageCheckBox->setToolTip(QApplication::translate("BundlerImportDlg", "To orthorectify images (as new images saved next to the original ones)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        orthoRectifyAsImageCheckBox->setText(QApplication::translate("BundlerImportDlg", "generate 2D orthophotos", 0, QApplication::UnicodeUTF8));
        orthoRectMethodComboBox->clear();
        orthoRectMethodComboBox->insertItems(0, QStringList()
         << QApplication::translate("BundlerImportDlg", "Optimized", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BundlerImportDlg", "Direct with undistortion", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BundlerImportDlg", "Direct", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        orthoRectMethodComboBox->setToolTip(QApplication::translate("BundlerImportDlg", "Ortho-rectification method:\n"
"- Optimized = CC will use the keypoints to optimize the parameters of the 'collinearity equation'\n"
"  that make the image and the keypoints match as best as possible. The equation parameters are then\n"
"  used to project the image on the horizontal plane (by default). This method compensate for the\n"
"  image distortion in its own way (i.e. whithout using the distortion model provided by Bundler)\n"
"- Direct = CC will only use Bundler's output information (camera extrinsic and intrinsic parameters).\n"
"  The camera distortion parameters can be applied or not. Pay attention that those parameters are\n"
"  sometimes very poorly estimated by Bundler.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        orthoRectifyAsCloudCheckBox->setToolTip(QApplication::translate("BundlerImportDlg", "To generate orthorectified versions of the images as clouds (warning: result mught be huge!).\n"
"Warning: the 'Optimized' method is used by default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        orthoRectifyAsCloudCheckBox->setText(QApplication::translate("BundlerImportDlg", "generate 2D \"orthoclouds\"", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("BundlerImportDlg", "Vertical dimension:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        xVertAxisRadioButton->setToolTip(QApplication::translate("BundlerImportDlg", "Keypoints vertical axis is X (1,0,0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        xVertAxisRadioButton->setText(QApplication::translate("BundlerImportDlg", "X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        yVertAxisRadioButton->setToolTip(QApplication::translate("BundlerImportDlg", "Keypoints vertical axis is Y (0,1,0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        yVertAxisRadioButton->setText(QApplication::translate("BundlerImportDlg", "Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        zVertAxisRadioButton->setToolTip(QApplication::translate("BundlerImportDlg", "Keypoints vertical axis is Z (0,0,1)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        zVertAxisRadioButton->setText(QApplication::translate("BundlerImportDlg", "Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        customVertAxisRadioButton->setToolTip(QApplication::translate("BundlerImportDlg", "Input a 4x4 transformation matrix that transforms the keypoint vertical axis into (0,0,1)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        customVertAxisRadioButton->setText(QApplication::translate("BundlerImportDlg", "Custom", 0, QApplication::UnicodeUTF8));
        applyTransfoMatrixTextEdit->setHtml(QApplication::translate("BundlerImportDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">1 0 0 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 1 0 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 0 1 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">"
                        "0 0 0 1</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateColoredDTMGroupBox->setToolTip(QApplication::translate("BundlerImportDlg", "To generate a 3D model (mesh) colored with the input images.\n"
"By default the keypoints are meshed, and points are sampled on this first mesh.\n"
"The sampled points are then colored with the images and a final mesh is built on top of those points.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateColoredDTMGroupBox->setTitle(QApplication::translate("BundlerImportDlg", "Colored model generation", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BundlerImportDlg", "vertices: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dtmVerticesSpinBox->setToolTip(QApplication::translate("BundlerImportDlg", "Approximate number of vertices for the final mesh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        altKeypointsCheckBox->setToolTip(QApplication::translate("BundlerImportDlg", "To use a cloud (or mesh) instead of the keypoints as base for the model generation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        altKeypointsCheckBox->setText(QApplication::translate("BundlerImportDlg", "Use alternative keypoints", 0, QApplication::UnicodeUTF8));
        altKeypointsFilePathLineEdit->setText(QApplication::translate("BundlerImportDlg", "pmvs.ply", 0, QApplication::UnicodeUTF8));
        browseAltKeypointsFileToolButton->setText(QApplication::translate("BundlerImportDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        keepImagesInMemoryCheckBox->setToolTip(QApplication::translate("BundlerImportDlg", "To keep images and their corresponding sensors in memory (i.e. as entities in the DB tree)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        keepImagesInMemoryCheckBox->setText(QApplication::translate("BundlerImportDlg", "keep images (and sensors) loaded", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        undistortImagesCheckBox->setToolTip(QApplication::translate("BundlerImportDlg", "To undistort loaded images", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        undistortImagesCheckBox->setText(QApplication::translate("BundlerImportDlg", "undistort images", 0, QApplication::UnicodeUTF8));
        importKeypointsGroupBox->setTitle(QApplication::translate("BundlerImportDlg", "Import keypoints", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BundlerImportDlg: public Ui_BundlerImportDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENBUNDLERFILEDLG_H
