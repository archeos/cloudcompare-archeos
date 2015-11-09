/********************************************************************************
** Form generated from reading UI file 'rasterizeDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASTERIZEDLG_H
#define UI_RASTERIZEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RasterizeToolDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout;
    QGroupBox *cloudInfoGroupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *cloudNameLabel;
    QLabel *label_3;
    QLabel *pointCountLabel;
    QPushButton *updateGridPushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *gridWidthLabel;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *gridStepDoubleSpinBox;
    QToolButton *editGridToolButton;
    QLabel *label_13;
    QComboBox *activeLayerComboBox;
    QLabel *label_7;
    QLabel *gridLayerRangeLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QComboBox *dimensionComboBox;
    QHBoxLayout *layout_2;
    QLabel *label_8;
    QComboBox *heightProjectionComboBox;
    QFrame *interpolateSFFrame;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *interpolateSFCheckBox;
    QComboBox *scalarFieldProjection;
    QCheckBox *resampleCloudCheckBox;
    QGroupBox *emptyCellsFrame;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QComboBox *fillEmptyCellsComboBox;
    QDoubleSpinBox *emptyValueDoubleSpinBox;
    QTabWidget *tabWidget;
    QWidget *exportTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *generateCloudPushButton;
    QPushButton *generateMeshPushButton;
    QLabel *label_12;
    QFrame *exportCloudSFFrame;
    QFormLayout *formLayout_4;
    QCheckBox *generateCountSFcheckBox;
    QCheckBox *generateMinHeightSFcheckBox;
    QCheckBox *generateAvgHeightSFcheckBox;
    QCheckBox *generateMaxHeightSFcheckBox;
    QCheckBox *generateStdDevHeightSFcheckBox;
    QCheckBox *generateHeightRangeSFcheckBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *generateRasterPushButton;
    QPushButton *generateImagePushButton;
    QPushButton *generateASCIIPushButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *contourTab;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *contourStartDoubleSpinBox;
    QLabel *label_10;
    QDoubleSpinBox *contourStepDoubleSpinBox;
    QLabel *label_11;
    QSpinBox *minVertexCountSpinBox;
    QLabel *label_14;
    QSpinBox *contourWidthSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *colorizeContoursCheckBox;
    QCheckBox *ignoreContourBordersCheckBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *clearContoursPushButton;
    QPushButton *exportContoursPushButton;
    QPushButton *generateContoursPushButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QFrame *mapFrame;

    void setupUi(QDialog *RasterizeToolDialog)
    {
        if (RasterizeToolDialog->objectName().isEmpty())
            RasterizeToolDialog->setObjectName(QString::fromUtf8("RasterizeToolDialog"));
        RasterizeToolDialog->resize(1000, 720);
        horizontalLayout = new QHBoxLayout(RasterizeToolDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftFrame = new QFrame(RasterizeToolDialog);
        leftFrame->setObjectName(QString::fromUtf8("leftFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy);
        leftFrame->setMinimumSize(QSize(270, 0));
        verticalLayout = new QVBoxLayout(leftFrame);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cloudInfoGroupBox = new QGroupBox(leftFrame);
        cloudInfoGroupBox->setObjectName(QString::fromUtf8("cloudInfoGroupBox"));
        formLayout = new QFormLayout(cloudInfoGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(cloudInfoGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cloudNameLabel = new QLabel(cloudInfoGroupBox);
        cloudNameLabel->setObjectName(QString::fromUtf8("cloudNameLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cloudNameLabel);

        label_3 = new QLabel(cloudInfoGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        pointCountLabel = new QLabel(cloudInfoGroupBox);
        pointCountLabel->setObjectName(QString::fromUtf8("pointCountLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pointCountLabel);


        verticalLayout->addWidget(cloudInfoGroupBox);

        updateGridPushButton = new QPushButton(leftFrame);
        updateGridPushButton->setObjectName(QString::fromUtf8("updateGridPushButton"));
        updateGridPushButton->setStyleSheet(QString::fromUtf8("color: white; background-color:red;"));

        verticalLayout->addWidget(updateGridPushButton);

        groupBox = new QGroupBox(leftFrame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        gridWidthLabel = new QLabel(groupBox);
        gridWidthLabel->setObjectName(QString::fromUtf8("gridWidthLabel"));

        gridLayout->addWidget(gridWidthLabel, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridStepDoubleSpinBox = new QDoubleSpinBox(groupBox);
        gridStepDoubleSpinBox->setObjectName(QString::fromUtf8("gridStepDoubleSpinBox"));
        gridStepDoubleSpinBox->setDecimals(6);
        gridStepDoubleSpinBox->setMinimum(0.001);
        gridStepDoubleSpinBox->setMaximum(1000);
        gridStepDoubleSpinBox->setSingleStep(0.001);
        gridStepDoubleSpinBox->setValue(1);

        horizontalLayout_4->addWidget(gridStepDoubleSpinBox);

        editGridToolButton = new QToolButton(groupBox);
        editGridToolButton->setObjectName(QString::fromUtf8("editGridToolButton"));

        horizontalLayout_4->addWidget(editGridToolButton);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        activeLayerComboBox = new QComboBox(groupBox);
        activeLayerComboBox->setObjectName(QString::fromUtf8("activeLayerComboBox"));

        gridLayout->addWidget(activeLayerComboBox, 3, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        gridLayerRangeLabel = new QLabel(groupBox);
        gridLayerRangeLabel->setObjectName(QString::fromUtf8("gridLayerRangeLabel"));

        gridLayout->addWidget(gridLayerRangeLabel, 4, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(leftFrame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        dimensionComboBox = new QComboBox(groupBox_2);
        dimensionComboBox->setObjectName(QString::fromUtf8("dimensionComboBox"));

        horizontalLayout_2->addWidget(dimensionComboBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        layout_2 = new QHBoxLayout();
        layout_2->setObjectName(QString::fromUtf8("layout_2"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        layout_2->addWidget(label_8);

        heightProjectionComboBox = new QComboBox(groupBox_2);
        heightProjectionComboBox->setObjectName(QString::fromUtf8("heightProjectionComboBox"));

        layout_2->addWidget(heightProjectionComboBox);


        verticalLayout_2->addLayout(layout_2);

        interpolateSFFrame = new QFrame(groupBox_2);
        interpolateSFFrame->setObjectName(QString::fromUtf8("interpolateSFFrame"));
        horizontalLayout_3 = new QHBoxLayout(interpolateSFFrame);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        interpolateSFCheckBox = new QCheckBox(interpolateSFFrame);
        interpolateSFCheckBox->setObjectName(QString::fromUtf8("interpolateSFCheckBox"));
        interpolateSFCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(interpolateSFCheckBox);

        scalarFieldProjection = new QComboBox(interpolateSFFrame);
        scalarFieldProjection->setObjectName(QString::fromUtf8("scalarFieldProjection"));

        horizontalLayout_3->addWidget(scalarFieldProjection);


        verticalLayout_2->addWidget(interpolateSFFrame);

        resampleCloudCheckBox = new QCheckBox(groupBox_2);
        resampleCloudCheckBox->setObjectName(QString::fromUtf8("resampleCloudCheckBox"));
        resampleCloudCheckBox->setChecked(false);

        verticalLayout_2->addWidget(resampleCloudCheckBox);


        verticalLayout->addWidget(groupBox_2);

        emptyCellsFrame = new QGroupBox(leftFrame);
        emptyCellsFrame->setObjectName(QString::fromUtf8("emptyCellsFrame"));
        formLayout_2 = new QFormLayout(emptyCellsFrame);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(emptyCellsFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        fillEmptyCellsComboBox = new QComboBox(emptyCellsFrame);
        fillEmptyCellsComboBox->setObjectName(QString::fromUtf8("fillEmptyCellsComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, fillEmptyCellsComboBox);

        emptyValueDoubleSpinBox = new QDoubleSpinBox(emptyCellsFrame);
        emptyValueDoubleSpinBox->setObjectName(QString::fromUtf8("emptyValueDoubleSpinBox"));
        emptyValueDoubleSpinBox->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(emptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        emptyValueDoubleSpinBox->setSizePolicy(sizePolicy1);
        emptyValueDoubleSpinBox->setDecimals(6);
        emptyValueDoubleSpinBox->setMinimum(-1e+09);
        emptyValueDoubleSpinBox->setMaximum(1e+09);
        emptyValueDoubleSpinBox->setValue(0);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, emptyValueDoubleSpinBox);


        verticalLayout->addWidget(emptyCellsFrame);

        tabWidget = new QTabWidget(leftFrame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        exportTab = new QWidget();
        exportTab->setObjectName(QString::fromUtf8("exportTab"));
        verticalLayout_3 = new QVBoxLayout(exportTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        generateCloudPushButton = new QPushButton(exportTab);
        generateCloudPushButton->setObjectName(QString::fromUtf8("generateCloudPushButton"));

        horizontalLayout_6->addWidget(generateCloudPushButton);

        generateMeshPushButton = new QPushButton(exportTab);
        generateMeshPushButton->setObjectName(QString::fromUtf8("generateMeshPushButton"));

        horizontalLayout_6->addWidget(generateMeshPushButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        label_12 = new QLabel(exportTab);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_3->addWidget(label_12);

        exportCloudSFFrame = new QFrame(exportTab);
        exportCloudSFFrame->setObjectName(QString::fromUtf8("exportCloudSFFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(exportCloudSFFrame->sizePolicy().hasHeightForWidth());
        exportCloudSFFrame->setSizePolicy(sizePolicy2);
        exportCloudSFFrame->setFrameShape(QFrame::StyledPanel);
        exportCloudSFFrame->setFrameShadow(QFrame::Raised);
        formLayout_4 = new QFormLayout(exportCloudSFFrame);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        generateCountSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateCountSFcheckBox->setObjectName(QString::fromUtf8("generateCountSFcheckBox"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, generateCountSFcheckBox);

        generateMinHeightSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateMinHeightSFcheckBox->setObjectName(QString::fromUtf8("generateMinHeightSFcheckBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, generateMinHeightSFcheckBox);

        generateAvgHeightSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateAvgHeightSFcheckBox->setObjectName(QString::fromUtf8("generateAvgHeightSFcheckBox"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, generateAvgHeightSFcheckBox);

        generateMaxHeightSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateMaxHeightSFcheckBox->setObjectName(QString::fromUtf8("generateMaxHeightSFcheckBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, generateMaxHeightSFcheckBox);

        generateStdDevHeightSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateStdDevHeightSFcheckBox->setObjectName(QString::fromUtf8("generateStdDevHeightSFcheckBox"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, generateStdDevHeightSFcheckBox);

        generateHeightRangeSFcheckBox = new QCheckBox(exportCloudSFFrame);
        generateHeightRangeSFcheckBox->setObjectName(QString::fromUtf8("generateHeightRangeSFcheckBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, generateHeightRangeSFcheckBox);


        verticalLayout_3->addWidget(exportCloudSFFrame);

        line = new QFrame(exportTab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        generateRasterPushButton = new QPushButton(exportTab);
        generateRasterPushButton->setObjectName(QString::fromUtf8("generateRasterPushButton"));

        horizontalLayout_8->addWidget(generateRasterPushButton);

        generateImagePushButton = new QPushButton(exportTab);
        generateImagePushButton->setObjectName(QString::fromUtf8("generateImagePushButton"));

        horizontalLayout_8->addWidget(generateImagePushButton);

        generateASCIIPushButton = new QPushButton(exportTab);
        generateASCIIPushButton->setObjectName(QString::fromUtf8("generateASCIIPushButton"));

        horizontalLayout_8->addWidget(generateASCIIPushButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(exportTab, QString());
        contourTab = new QWidget();
        contourTab->setObjectName(QString::fromUtf8("contourTab"));
        verticalLayout_4 = new QVBoxLayout(contourTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_6 = new QLabel(contourTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        contourStartDoubleSpinBox = new QDoubleSpinBox(contourTab);
        contourStartDoubleSpinBox->setObjectName(QString::fromUtf8("contourStartDoubleSpinBox"));
        contourStartDoubleSpinBox->setDecimals(6);
        contourStartDoubleSpinBox->setMinimum(-1e+09);
        contourStartDoubleSpinBox->setMaximum(1e+09);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, contourStartDoubleSpinBox);

        label_10 = new QLabel(contourTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        contourStepDoubleSpinBox = new QDoubleSpinBox(contourTab);
        contourStepDoubleSpinBox->setObjectName(QString::fromUtf8("contourStepDoubleSpinBox"));
        contourStepDoubleSpinBox->setDecimals(6);
        contourStepDoubleSpinBox->setMinimum(1e-06);
        contourStepDoubleSpinBox->setMaximum(1e+09);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, contourStepDoubleSpinBox);

        label_11 = new QLabel(contourTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        minVertexCountSpinBox = new QSpinBox(contourTab);
        minVertexCountSpinBox->setObjectName(QString::fromUtf8("minVertexCountSpinBox"));
        minVertexCountSpinBox->setMinimum(3);
        minVertexCountSpinBox->setMaximum(10000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, minVertexCountSpinBox);

        label_14 = new QLabel(contourTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_14);

        contourWidthSpinBox = new QSpinBox(contourTab);
        contourWidthSpinBox->setObjectName(QString::fromUtf8("contourWidthSpinBox"));
        contourWidthSpinBox->setMinimum(1);
        contourWidthSpinBox->setMaximum(10);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, contourWidthSpinBox);


        verticalLayout_4->addLayout(formLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        colorizeContoursCheckBox = new QCheckBox(contourTab);
        colorizeContoursCheckBox->setObjectName(QString::fromUtf8("colorizeContoursCheckBox"));

        horizontalLayout_5->addWidget(colorizeContoursCheckBox);

        ignoreContourBordersCheckBox = new QCheckBox(contourTab);
        ignoreContourBordersCheckBox->setObjectName(QString::fromUtf8("ignoreContourBordersCheckBox"));
        ignoreContourBordersCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(ignoreContourBordersCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        clearContoursPushButton = new QPushButton(contourTab);
        clearContoursPushButton->setObjectName(QString::fromUtf8("clearContoursPushButton"));
        clearContoursPushButton->setEnabled(false);

        horizontalLayout_7->addWidget(clearContoursPushButton);

        exportContoursPushButton = new QPushButton(contourTab);
        exportContoursPushButton->setObjectName(QString::fromUtf8("exportContoursPushButton"));
        exportContoursPushButton->setEnabled(false);

        horizontalLayout_7->addWidget(exportContoursPushButton);

        generateContoursPushButton = new QPushButton(contourTab);
        generateContoursPushButton->setObjectName(QString::fromUtf8("generateContoursPushButton"));

        horizontalLayout_7->addWidget(generateContoursPushButton);


        verticalLayout_4->addLayout(horizontalLayout_7);

        tabWidget->addTab(contourTab, QString());

        verticalLayout->addWidget(tabWidget);

        verticalSpacer = new QSpacerItem(20, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(leftFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addWidget(leftFrame);

        mapFrame = new QFrame(RasterizeToolDialog);
        mapFrame->setObjectName(QString::fromUtf8("mapFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mapFrame->sizePolicy().hasHeightForWidth());
        mapFrame->setSizePolicy(sizePolicy3);
        mapFrame->setMinimumSize(QSize(512, 512));
        mapFrame->setFrameShape(QFrame::StyledPanel);
        mapFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(mapFrame);


        retranslateUi(RasterizeToolDialog);
        QObject::connect(interpolateSFCheckBox, SIGNAL(toggled(bool)), scalarFieldProjection, SLOT(setEnabled(bool)));

        dimensionComboBox->setCurrentIndex(2);
        heightProjectionComboBox->setCurrentIndex(1);
        scalarFieldProjection->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RasterizeToolDialog);
    } // setupUi

    void retranslateUi(QDialog *RasterizeToolDialog)
    {
        RasterizeToolDialog->setWindowTitle(QApplication::translate("RasterizeToolDialog", "Rasterize", 0, QApplication::UnicodeUTF8));
        cloudInfoGroupBox->setTitle(QApplication::translate("RasterizeToolDialog", "Cloud", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RasterizeToolDialog", "Name", 0, QApplication::UnicodeUTF8));
        cloudNameLabel->setText(QApplication::translate("RasterizeToolDialog", "Unknown", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RasterizeToolDialog", "Points", 0, QApplication::UnicodeUTF8));
        pointCountLabel->setText(QApplication::translate("RasterizeToolDialog", "0", 0, QApplication::UnicodeUTF8));
        updateGridPushButton->setText(QApplication::translate("RasterizeToolDialog", "Update grid", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RasterizeToolDialog", "Grid", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RasterizeToolDialog", "size", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RasterizeToolDialog", "step", 0, QApplication::UnicodeUTF8));
        gridWidthLabel->setText(QApplication::translate("RasterizeToolDialog", "640 x 480", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gridStepDoubleSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "size of step of the grid generated (in the same units as the coordinates of the point cloud)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        editGridToolButton->setText(QApplication::translate("RasterizeToolDialog", "Edit grid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("RasterizeToolDialog", "Active layer (or 'scalar field')", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("RasterizeToolDialog", "active layer", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("RasterizeToolDialog", "range", 0, QApplication::UnicodeUTF8));
        gridLayerRangeLabel->setText(QString());
        groupBox_2->setTitle(QApplication::translate("RasterizeToolDialog", "Projection", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RasterizeToolDialog", "direction", 0, QApplication::UnicodeUTF8));
        dimensionComboBox->clear();
        dimensionComboBox->insertItems(0, QStringList()
         << QApplication::translate("RasterizeToolDialog", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "Z", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("RasterizeToolDialog", "cell height", 0, QApplication::UnicodeUTF8));
        heightProjectionComboBox->clear();
        heightProjectionComboBox->insertItems(0, QStringList()
         << QApplication::translate("RasterizeToolDialog", "minimum height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "average height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "maximum height", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        heightProjectionComboBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Per-cell height computation method:\n"
" - minimum = lowest point in the cell\n"
" - average = mean height of all points inside the cell\n"
" - maximum = highest point in the cell", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        interpolateSFCheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Interpolate scalar field(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        interpolateSFCheckBox->setText(QApplication::translate("RasterizeToolDialog", "interpolate SF(s)", 0, QApplication::UnicodeUTF8));
        scalarFieldProjection->clear();
        scalarFieldProjection->insertItems(0, QStringList()
         << QApplication::translate("RasterizeToolDialog", "minimum value", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "average value", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "maximum value", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        scalarFieldProjection->setToolTip(QApplication::translate("RasterizeToolDialog", "SF interpolation method", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        resampleCloudCheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Use the nearest point of the input cloud in each cell instead of the cell center", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        resampleCloudCheckBox->setText(QApplication::translate("RasterizeToolDialog", "resample input loud", 0, QApplication::UnicodeUTF8));
        emptyCellsFrame->setTitle(QApplication::translate("RasterizeToolDialog", "Empty cells", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RasterizeToolDialog", "Fill with", 0, QApplication::UnicodeUTF8));
        fillEmptyCellsComboBox->clear();
        fillEmptyCellsComboBox->insertItems(0, QStringList()
         << QApplication::translate("RasterizeToolDialog", "leave empty", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "minimum height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "average height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "maximum height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "user specified value", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RasterizeToolDialog", "interpolate", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        fillEmptyCellsComboBox->setToolTip(QApplication::translate("RasterizeToolDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        emptyValueDoubleSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Custom value for empty cells", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        generateCloudPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as a point cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateCloudPushButton->setText(QApplication::translate("RasterizeToolDialog", "Cloud", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateMeshPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as a mesh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateMeshPushButton->setText(QApplication::translate("RasterizeToolDialog", "Mesh", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("RasterizeToolDialog", "Export per-cell statistics as SF(s):", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateCountSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the grid density (= number of points inside each cell)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateCountSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "population", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateMinHeightSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the min. height of the points inside the cell", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateMinHeightSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "min height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateAvgHeightSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the average height of the points inside the cell", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateAvgHeightSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "average height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateMaxHeightSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the max. height of the points inside the cell", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateMaxHeightSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "max height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateStdDevHeightSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the standard deviation of the heights of the points inside the cell", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateStdDevHeightSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "height std. dev.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateHeightRangeSFcheckBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Adds a scalar field with the standard deviation of the heights of the points inside the cell", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateHeightRangeSFcheckBox->setText(QApplication::translate("RasterizeToolDialog", "height range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateRasterPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as a raster (geotiff)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateRasterPushButton->setText(QApplication::translate("RasterizeToolDialog", "Raster", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateImagePushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as an image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateImagePushButton->setText(QApplication::translate("RasterizeToolDialog", "Image", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateASCIIPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export grid as a matrix (text file)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateASCIIPushButton->setText(QApplication::translate("RasterizeToolDialog", "Matrix", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(exportTab), QApplication::translate("RasterizeToolDialog", "Export", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RasterizeToolDialog", "Start value", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("RasterizeToolDialog", "Step", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("RasterizeToolDialog", "Min. vertex count", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minVertexCountSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Min vertex count per iso-line (to ignore the smallest ones)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("RasterizeToolDialog", "Line width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        contourWidthSpinBox->setToolTip(QApplication::translate("RasterizeToolDialog", "Default contour lines width", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        colorizeContoursCheckBox->setText(QApplication::translate("RasterizeToolDialog", "colorize", 0, QApplication::UnicodeUTF8));
        ignoreContourBordersCheckBox->setText(QApplication::translate("RasterizeToolDialog", "ignore borders", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearContoursPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Remove all contour lines", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearContoursPushButton->setText(QApplication::translate("RasterizeToolDialog", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exportContoursPushButton->setToolTip(QApplication::translate("RasterizeToolDialog", "Export contour lines to the DB tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        exportContoursPushButton->setText(QApplication::translate("RasterizeToolDialog", "Export", 0, QApplication::UnicodeUTF8));
        generateContoursPushButton->setText(QApplication::translate("RasterizeToolDialog", "Generate", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(contourTab), QApplication::translate("RasterizeToolDialog", "Contour plot (active layer)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RasterizeToolDialog: public Ui_RasterizeToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASTERIZEDLG_H
