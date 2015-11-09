/********************************************************************************
** Form generated from reading UI file 'comparisonDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARISONDLG_H
#define UI_COMPARISONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComparisonDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *compName;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QLineEdit *refName;
    QGroupBox *preciseGroupBox;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *preciseResultsTabWidget;
    QWidget *generalParamsTab;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout;
    QLabel *label_5;
    QComboBox *octreeLevelComboBox;
    QCheckBox *maxDistCheckBox;
    QDoubleSpinBox *maxSearchDistSpinBox;
    QCheckBox *signedDistCheckBox;
    QCheckBox *flipNormalsCheckBox;
    QCheckBox *split3DCheckBox;
    QCheckBox *filterVisibilityCheckBox;
    QCheckBox *multiThreadedCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *localModelingTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout2;
    QLabel *label_3;
    QComboBox *localModelComboBox;
    QFrame *localModelParamsFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *lmKNNRadioButton;
    QSpinBox *lmKNNSpinBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *lmRadiusRadioButton;
    QDoubleSpinBox *lmRadiusDoubleSpinBox;
    QCheckBox *lmOptimizeCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *approxTab;
    QVBoxLayout *verticalLayout_9;
    QFrame *approxResultsInnerFrame;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QTableWidget *approxStats;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem;
    QToolButton *histoButton;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem1;
    QPushButton *computeButton;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ComparisonDialog)
    {
        if (ComparisonDialog->objectName().isEmpty())
            ComparisonDialog->setObjectName(QString::fromUtf8("ComparisonDialog"));
        ComparisonDialog->resize(420, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Old/images/old_cc/old_cc.gif"), QSize(), QIcon::Normal, QIcon::Off);
        ComparisonDialog->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(ComparisonDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(ComparisonDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        compName = new QLineEdit(ComparisonDialog);
        compName->setObjectName(QString::fromUtf8("compName"));
        compName->setReadOnly(true);

        hboxLayout->addWidget(compName);


        verticalLayout_5->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(ComparisonDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        refName = new QLineEdit(ComparisonDialog);
        refName->setObjectName(QString::fromUtf8("refName"));
        refName->setReadOnly(true);

        hboxLayout1->addWidget(refName);


        verticalLayout_5->addLayout(hboxLayout1);

        preciseGroupBox = new QGroupBox(ComparisonDialog);
        preciseGroupBox->setObjectName(QString::fromUtf8("preciseGroupBox"));
        verticalLayout_6 = new QVBoxLayout(preciseGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        preciseResultsTabWidget = new QTabWidget(preciseGroupBox);
        preciseResultsTabWidget->setObjectName(QString::fromUtf8("preciseResultsTabWidget"));
        generalParamsTab = new QWidget();
        generalParamsTab->setObjectName(QString::fromUtf8("generalParamsTab"));
        verticalLayout_7 = new QVBoxLayout(generalParamsTab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(generalParamsTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        octreeLevelComboBox = new QComboBox(generalParamsTab);
        octreeLevelComboBox->setObjectName(QString::fromUtf8("octreeLevelComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, octreeLevelComboBox);

        maxDistCheckBox = new QCheckBox(generalParamsTab);
        maxDistCheckBox->setObjectName(QString::fromUtf8("maxDistCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maxDistCheckBox);

        maxSearchDistSpinBox = new QDoubleSpinBox(generalParamsTab);
        maxSearchDistSpinBox->setObjectName(QString::fromUtf8("maxSearchDistSpinBox"));
        maxSearchDistSpinBox->setEnabled(false);
        maxSearchDistSpinBox->setDecimals(6);
        maxSearchDistSpinBox->setMaximum(1e+09);
        maxSearchDistSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxSearchDistSpinBox);

        signedDistCheckBox = new QCheckBox(generalParamsTab);
        signedDistCheckBox->setObjectName(QString::fromUtf8("signedDistCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, signedDistCheckBox);

        flipNormalsCheckBox = new QCheckBox(generalParamsTab);
        flipNormalsCheckBox->setObjectName(QString::fromUtf8("flipNormalsCheckBox"));
        flipNormalsCheckBox->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, flipNormalsCheckBox);


        verticalLayout_7->addLayout(formLayout);

        split3DCheckBox = new QCheckBox(generalParamsTab);
        split3DCheckBox->setObjectName(QString::fromUtf8("split3DCheckBox"));

        verticalLayout_7->addWidget(split3DCheckBox);

        filterVisibilityCheckBox = new QCheckBox(generalParamsTab);
        filterVisibilityCheckBox->setObjectName(QString::fromUtf8("filterVisibilityCheckBox"));

        verticalLayout_7->addWidget(filterVisibilityCheckBox);

        multiThreadedCheckBox = new QCheckBox(generalParamsTab);
        multiThreadedCheckBox->setObjectName(QString::fromUtf8("multiThreadedCheckBox"));
        multiThreadedCheckBox->setChecked(true);

        verticalLayout_7->addWidget(multiThreadedCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        preciseResultsTabWidget->addTab(generalParamsTab, QString());
        localModelingTab = new QWidget();
        localModelingTab->setObjectName(QString::fromUtf8("localModelingTab"));
        verticalLayout_3 = new QVBoxLayout(localModelingTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_3 = new QLabel(localModelingTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout2->addWidget(label_3);

        localModelComboBox = new QComboBox(localModelingTab);
        localModelComboBox->setObjectName(QString::fromUtf8("localModelComboBox"));

        hboxLayout2->addWidget(localModelComboBox);


        verticalLayout_3->addLayout(hboxLayout2);

        localModelParamsFrame = new QFrame(localModelingTab);
        localModelParamsFrame->setObjectName(QString::fromUtf8("localModelParamsFrame"));
        localModelParamsFrame->setEnabled(false);
        verticalLayout_4 = new QVBoxLayout(localModelParamsFrame);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lmKNNRadioButton = new QRadioButton(localModelParamsFrame);
        lmKNNRadioButton->setObjectName(QString::fromUtf8("lmKNNRadioButton"));
        lmKNNRadioButton->setChecked(true);

        verticalLayout_2->addWidget(lmKNNRadioButton);

        lmKNNSpinBox = new QSpinBox(localModelParamsFrame);
        lmKNNSpinBox->setObjectName(QString::fromUtf8("lmKNNSpinBox"));
        lmKNNSpinBox->setMinimum(3);
        lmKNNSpinBox->setValue(6);

        verticalLayout_2->addWidget(lmKNNSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lmRadiusRadioButton = new QRadioButton(localModelParamsFrame);
        lmRadiusRadioButton->setObjectName(QString::fromUtf8("lmRadiusRadioButton"));

        verticalLayout->addWidget(lmRadiusRadioButton);

        lmRadiusDoubleSpinBox = new QDoubleSpinBox(localModelParamsFrame);
        lmRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("lmRadiusDoubleSpinBox"));
        lmRadiusDoubleSpinBox->setEnabled(false);
        lmRadiusDoubleSpinBox->setDecimals(6);
        lmRadiusDoubleSpinBox->setMaximum(1e+09);

        verticalLayout->addWidget(lmRadiusDoubleSpinBox);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        lmOptimizeCheckBox = new QCheckBox(localModelParamsFrame);
        lmOptimizeCheckBox->setObjectName(QString::fromUtf8("lmOptimizeCheckBox"));

        verticalLayout_4->addWidget(lmOptimizeCheckBox);


        verticalLayout_3->addWidget(localModelParamsFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        preciseResultsTabWidget->addTab(localModelingTab, QString());
        approxTab = new QWidget();
        approxTab->setObjectName(QString::fromUtf8("approxTab"));
        verticalLayout_9 = new QVBoxLayout(approxTab);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        approxResultsInnerFrame = new QFrame(approxTab);
        approxResultsInnerFrame->setObjectName(QString::fromUtf8("approxResultsInnerFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(approxResultsInnerFrame->sizePolicy().hasHeightForWidth());
        approxResultsInnerFrame->setSizePolicy(sizePolicy);
        approxResultsInnerFrame->setFrameShape(QFrame::StyledPanel);
        approxResultsInnerFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(approxResultsInnerFrame);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_4 = new QLabel(approxResultsInnerFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: red;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_4);

        approxStats = new QTableWidget(approxResultsInnerFrame);
        approxStats->setObjectName(QString::fromUtf8("approxStats"));
        approxStats->setMaximumSize(QSize(16777215, 150));

        verticalLayout_8->addWidget(approxStats);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem);

        histoButton = new QToolButton(approxResultsInnerFrame);
        histoButton->setObjectName(QString::fromUtf8("histoButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccHistogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        histoButton->setIcon(icon1);

        hboxLayout3->addWidget(histoButton);


        verticalLayout_8->addLayout(hboxLayout3);


        verticalLayout_9->addWidget(approxResultsInnerFrame);

        preciseResultsTabWidget->addTab(approxTab, QString());

        verticalLayout_6->addWidget(preciseResultsTabWidget);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem1);

        computeButton = new QPushButton(preciseGroupBox);
        computeButton->setObjectName(QString::fromUtf8("computeButton"));
        computeButton->setStyleSheet(QString::fromUtf8("background-color:red; color: white;"));

        hboxLayout4->addWidget(computeButton);


        verticalLayout_6->addLayout(hboxLayout4);


        verticalLayout_5->addWidget(preciseGroupBox);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem2);

        okButton = new QPushButton(ComparisonDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setEnabled(false);

        hboxLayout5->addWidget(okButton);

        cancelButton = new QPushButton(ComparisonDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout5->addWidget(cancelButton);


        verticalLayout_5->addLayout(hboxLayout5);


        retranslateUi(ComparisonDialog);
        QObject::connect(maxDistCheckBox, SIGNAL(toggled(bool)), maxSearchDistSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lmKNNRadioButton, SIGNAL(toggled(bool)), lmKNNSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lmKNNRadioButton, SIGNAL(toggled(bool)), lmRadiusDoubleSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(maxDistCheckBox, SIGNAL(toggled(bool)), split3DCheckBox, SLOT(setDisabled(bool)));
        QObject::connect(signedDistCheckBox, SIGNAL(toggled(bool)), flipNormalsCheckBox, SLOT(setEnabled(bool)));

        preciseResultsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ComparisonDialog);
    } // setupUi

    void retranslateUi(QDialog *ComparisonDialog)
    {
        ComparisonDialog->setWindowTitle(QApplication::translate("ComparisonDialog", "Distance computation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ComparisonDialog", "Compared", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ComparisonDialog", "Reference", 0, QApplication::UnicodeUTF8));
        preciseGroupBox->setTitle(QApplication::translate("ComparisonDialog", "Precise results", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("ComparisonDialog", "Level of subdivision used for computing the distances", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ComparisonDialog", "Octree level", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxDistCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "Acceleration: distances above this limit won't be computed accurately", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        maxDistCheckBox->setText(QApplication::translate("ComparisonDialog", "max. distance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxSearchDistSpinBox->setToolTip(QApplication::translate("ComparisonDialog", "Acceleration: distances above this limit won't be computed accurately", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        signedDistCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "compute signed distances (slower)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        signedDistCheckBox->setStatusTip(QApplication::translate("ComparisonDialog", "compute signed distances (slower)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        signedDistCheckBox->setText(QApplication::translate("ComparisonDialog", "signed distances", 0, QApplication::UnicodeUTF8));
        flipNormalsCheckBox->setText(QApplication::translate("ComparisonDialog", "flip normals", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        split3DCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "Generate 3 supplementary scalar fields with distances along each dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        split3DCheckBox->setStatusTip(QApplication::translate("ComparisonDialog", "Generate 3 supplementary scalar fields with distances along each dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        split3DCheckBox->setText(QApplication::translate("ComparisonDialog", "split X,Y and Z components", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        filterVisibilityCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "Use the sensor associated to the reference cloud to ignore the points in the compared cloud\n"
"that could not have been seen (hidden/out of range/out of field of view).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filterVisibilityCheckBox->setText(QApplication::translate("ComparisonDialog", "use reference sensor to filter hidden points", 0, QApplication::UnicodeUTF8));
        multiThreadedCheckBox->setText(QApplication::translate("ComparisonDialog", "multi-threaded", 0, QApplication::UnicodeUTF8));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(generalParamsTab), QApplication::translate("ComparisonDialog", "General parameters", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ComparisonDialog", "Local model", 0, QApplication::UnicodeUTF8));
        lmKNNRadioButton->setText(QApplication::translate("ComparisonDialog", "Points (kNN)", 0, QApplication::UnicodeUTF8));
        lmRadiusRadioButton->setText(QApplication::translate("ComparisonDialog", "Radius (Sphere)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lmOptimizeCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "faster but more ... approximate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lmOptimizeCheckBox->setText(QApplication::translate("ComparisonDialog", "use the same model for nearby points", 0, QApplication::UnicodeUTF8));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(localModelingTab), QApplication::translate("ComparisonDialog", "Local modeling", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ComparisonDialog", "Warning: approximate results are only provided\n"
"to help you set the general parameters", 0, QApplication::UnicodeUTF8));
        histoButton->setText(QApplication::translate("ComparisonDialog", "...", 0, QApplication::UnicodeUTF8));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(approxTab), QApplication::translate("ComparisonDialog", "Approx. results", 0, QApplication::UnicodeUTF8));
        computeButton->setText(QApplication::translate("ComparisonDialog", "Compute", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ComparisonDialog", "Ok", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ComparisonDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ComparisonDialog: public Ui_ComparisonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISONDLG_H
