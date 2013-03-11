/********************************************************************************
** Form generated from reading UI file 'openBundlerFileDlg.ui'
**
** Created: Sun Mar 10 15:48:36 2013
**      by: Qt User Interface Compiler version 4.8.2
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
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BundlerImportDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *infoGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLabel *majorVerLabel;
    QLabel *minorVerLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *keyPointsCountLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
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
    QLabel *label_4;
    QDoubleSpinBox *imageScaleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *orthoRectifyAsImageCheckBox;
    QCheckBox *undistortImagesCheckBox;
    QCheckBox *keepImagesInMemoryCheckBox;
    QFrame *line;
    QCheckBox *orthoRectifyAsCloudCheckBox;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *generateColoredDTMCheckBox;
    QFrame *dtmDensityFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *dtmVerticesSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *altKeypointsGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *altKeypointsFilePathLineEdit;
    QToolButton *browseAltKeypointsFileToolButton;
    QCheckBox *importKeypointsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BundlerImportDlg)
    {
        if (BundlerImportDlg->objectName().isEmpty())
            BundlerImportDlg->setObjectName(QString::fromUtf8("BundlerImportDlg"));
        BundlerImportDlg->resize(292, 479);
        verticalLayout_3 = new QVBoxLayout(BundlerImportDlg);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        infoGroupBox = new QGroupBox(BundlerImportDlg);
        infoGroupBox->setObjectName(QString::fromUtf8("infoGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(infoGroupBox->sizePolicy().hasHeightForWidth());
        infoGroupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(infoGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(infoGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        majorVerLabel = new QLabel(infoGroupBox);
        majorVerLabel->setObjectName(QString::fromUtf8("majorVerLabel"));
        majorVerLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(majorVerLabel);

        minorVerLabel = new QLabel(infoGroupBox);
        minorVerLabel->setObjectName(QString::fromUtf8("minorVerLabel"));

        horizontalLayout_6->addWidget(minorVerLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(infoGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        keyPointsCountLabel = new QLabel(infoGroupBox);
        keyPointsCountLabel->setObjectName(QString::fromUtf8("keyPointsCountLabel"));

        horizontalLayout_4->addWidget(keyPointsCountLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(infoGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        cameraCountLabel = new QLabel(infoGroupBox);
        cameraCountLabel->setObjectName(QString::fromUtf8("cameraCountLabel"));

        horizontalLayout_8->addWidget(cameraCountLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_8);


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
        label_4 = new QLabel(imagesGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        imageScaleDoubleSpinBox = new QDoubleSpinBox(imagesGroupBox);
        imageScaleDoubleSpinBox->setObjectName(QString::fromUtf8("imageScaleDoubleSpinBox"));
        imageScaleDoubleSpinBox->setMinimum(0.01);
        imageScaleDoubleSpinBox->setValue(1);

        horizontalLayout->addWidget(imageScaleDoubleSpinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);

        orthoRectifyAsImageCheckBox = new QCheckBox(imagesGroupBox);
        orthoRectifyAsImageCheckBox->setObjectName(QString::fromUtf8("orthoRectifyAsImageCheckBox"));
        orthoRectifyAsImageCheckBox->setChecked(true);

        verticalLayout_2->addWidget(orthoRectifyAsImageCheckBox);

        undistortImagesCheckBox = new QCheckBox(imagesGroupBox);
        undistortImagesCheckBox->setObjectName(QString::fromUtf8("undistortImagesCheckBox"));

        verticalLayout_2->addWidget(undistortImagesCheckBox);

        keepImagesInMemoryCheckBox = new QCheckBox(imagesGroupBox);
        keepImagesInMemoryCheckBox->setObjectName(QString::fromUtf8("keepImagesInMemoryCheckBox"));

        verticalLayout_2->addWidget(keepImagesInMemoryCheckBox);

        line = new QFrame(imagesGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        orthoRectifyAsCloudCheckBox = new QCheckBox(imagesGroupBox);
        orthoRectifyAsCloudCheckBox->setObjectName(QString::fromUtf8("orthoRectifyAsCloudCheckBox"));

        verticalLayout_2->addWidget(orthoRectifyAsCloudCheckBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        generateColoredDTMCheckBox = new QCheckBox(imagesGroupBox);
        generateColoredDTMCheckBox->setObjectName(QString::fromUtf8("generateColoredDTMCheckBox"));

        horizontalLayout_7->addWidget(generateColoredDTMCheckBox);

        dtmDensityFrame = new QFrame(imagesGroupBox);
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
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
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


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(imagesGroupBox);

        altKeypointsGroupBox = new QGroupBox(BundlerImportDlg);
        altKeypointsGroupBox->setObjectName(QString::fromUtf8("altKeypointsGroupBox"));
        sizePolicy.setHeightForWidth(altKeypointsGroupBox->sizePolicy().hasHeightForWidth());
        altKeypointsGroupBox->setSizePolicy(sizePolicy);
        altKeypointsGroupBox->setCheckable(true);
        altKeypointsGroupBox->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(altKeypointsGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(altKeypointsGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        altKeypointsFilePathLineEdit = new QLineEdit(altKeypointsGroupBox);
        altKeypointsFilePathLineEdit->setObjectName(QString::fromUtf8("altKeypointsFilePathLineEdit"));

        horizontalLayout_3->addWidget(altKeypointsFilePathLineEdit);

        browseAltKeypointsFileToolButton = new QToolButton(altKeypointsGroupBox);
        browseAltKeypointsFileToolButton->setObjectName(QString::fromUtf8("browseAltKeypointsFileToolButton"));

        horizontalLayout_3->addWidget(browseAltKeypointsFileToolButton);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(altKeypointsGroupBox);

        importKeypointsCheckBox = new QCheckBox(BundlerImportDlg);
        importKeypointsCheckBox->setObjectName(QString::fromUtf8("importKeypointsCheckBox"));

        verticalLayout_3->addWidget(importKeypointsCheckBox);

        buttonBox = new QDialogButtonBox(BundlerImportDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(BundlerImportDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), BundlerImportDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BundlerImportDlg, SLOT(reject()));
        QObject::connect(generateColoredDTMCheckBox, SIGNAL(toggled(bool)), dtmDensityFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(BundlerImportDlg);
    } // setupUi

    void retranslateUi(QDialog *BundlerImportDlg)
    {
        BundlerImportDlg->setWindowTitle(QApplication::translate("BundlerImportDlg", "Snavely's Bundler Import", 0, QApplication::UnicodeUTF8));
        infoGroupBox->setTitle(QApplication::translate("BundlerImportDlg", "Information", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("BundlerImportDlg", "File version:", 0, QApplication::UnicodeUTF8));
        majorVerLabel->setText(QApplication::translate("BundlerImportDlg", "v0", 0, QApplication::UnicodeUTF8));
        minorVerLabel->setText(QApplication::translate("BundlerImportDlg", ".0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BundlerImportDlg", "keypoints:", 0, QApplication::UnicodeUTF8));
        keyPointsCountLabel->setText(QApplication::translate("BundlerImportDlg", "0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BundlerImportDlg", "Cameras:", 0, QApplication::UnicodeUTF8));
        cameraCountLabel->setText(QApplication::translate("BundlerImportDlg", "0", 0, QApplication::UnicodeUTF8));
        imagesGroupBox->setTitle(QApplication::translate("BundlerImportDlg", "Import images", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BundlerImportDlg", "Image list", 0, QApplication::UnicodeUTF8));
        imageListFilePathLineEdit->setText(QApplication::translate("BundlerImportDlg", "list.txt", 0, QApplication::UnicodeUTF8));
        browseImageListFileToolButton->setText(QApplication::translate("BundlerImportDlg", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BundlerImportDlg", "Image scale factor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imageScaleDoubleSpinBox->setToolTip(QApplication::translate("BundlerImportDlg", "Image scale factor relatively to keypoints", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        imageScaleDoubleSpinBox->setWhatsThis(QApplication::translate("BundlerImportDlg", "Image scale factor relatively to keypoints", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        orthoRectifyAsImageCheckBox->setText(QApplication::translate("BundlerImportDlg", "generate 2D orthophotos", 0, QApplication::UnicodeUTF8));
        undistortImagesCheckBox->setText(QApplication::translate("BundlerImportDlg", "undistort images", 0, QApplication::UnicodeUTF8));
        keepImagesInMemoryCheckBox->setText(QApplication::translate("BundlerImportDlg", "keep images in memory", 0, QApplication::UnicodeUTF8));
        orthoRectifyAsCloudCheckBox->setText(QApplication::translate("BundlerImportDlg", "generate 2D \"orthoclouds\"", 0, QApplication::UnicodeUTF8));
        generateColoredDTMCheckBox->setText(QApplication::translate("BundlerImportDlg", "generate colored DTM ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BundlerImportDlg", "vertices: ", 0, QApplication::UnicodeUTF8));
        altKeypointsGroupBox->setTitle(QApplication::translate("BundlerImportDlg", "Alternative keypoints", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("BundlerImportDlg", "Point cloud / mesh", 0, QApplication::UnicodeUTF8));
        altKeypointsFilePathLineEdit->setText(QApplication::translate("BundlerImportDlg", "pmvs.ply", 0, QApplication::UnicodeUTF8));
        browseAltKeypointsFileToolButton->setText(QApplication::translate("BundlerImportDlg", "...", 0, QApplication::UnicodeUTF8));
        importKeypointsCheckBox->setText(QApplication::translate("BundlerImportDlg", "Import keypoints as cloud", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BundlerImportDlg: public Ui_BundlerImportDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENBUNDLERFILEDLG_H
