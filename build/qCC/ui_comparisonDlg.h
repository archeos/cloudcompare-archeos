/********************************************************************************
** Form generated from reading UI file 'comparisonDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
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
    QGroupBox *approxGroupBox;
    QVBoxLayout *vboxLayout;
    QTableWidget *approxStats;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem;
    QToolButton *histoButton;
    QGroupBox *preciseGroupBox;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *preciseResultsTabWidget;
    QWidget *generalParamsTab;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *hboxLayout3;
    QCheckBox *octreeLevelCheckBox;
    QSpinBox *octreeLevelSpinBox;
    QHBoxLayout *hboxLayout4;
    QCheckBox *maxDistCheckBox;
    QDoubleSpinBox *maxSearchDistSpinBox;
    QFrame *signedDistFrame;
    QHBoxLayout *horizontalLayout;
    QCheckBox *signedDistCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *flipNormalsCheckBox;
    QHBoxLayout *_2;
    QCheckBox *multiThreadedCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *split3DCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *localModelingTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout5;
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
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem1;
    QPushButton *computeButton;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ComparisonDialog)
    {
        if (ComparisonDialog->objectName().isEmpty())
            ComparisonDialog->setObjectName(QString::fromUtf8("ComparisonDialog"));
        ComparisonDialog->resize(350, 600);
        ComparisonDialog->setMinimumSize(QSize(300, 450));
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

        approxGroupBox = new QGroupBox(ComparisonDialog);
        approxGroupBox->setObjectName(QString::fromUtf8("approxGroupBox"));
        approxGroupBox->setEnabled(false);
        vboxLayout = new QVBoxLayout(approxGroupBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        approxStats = new QTableWidget(approxGroupBox);
        approxStats->setObjectName(QString::fromUtf8("approxStats"));

        vboxLayout->addWidget(approxStats);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        histoButton = new QToolButton(approxGroupBox);
        histoButton->setObjectName(QString::fromUtf8("histoButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/Menu/images/menu/cc_histogramIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        histoButton->setIcon(icon1);

        hboxLayout2->addWidget(histoButton);


        vboxLayout->addLayout(hboxLayout2);


        verticalLayout_5->addWidget(approxGroupBox);

        preciseGroupBox = new QGroupBox(ComparisonDialog);
        preciseGroupBox->setObjectName(QString::fromUtf8("preciseGroupBox"));
        preciseGroupBox->setEnabled(false);
        verticalLayout_6 = new QVBoxLayout(preciseGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        preciseResultsTabWidget = new QTabWidget(preciseGroupBox);
        preciseResultsTabWidget->setObjectName(QString::fromUtf8("preciseResultsTabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preciseResultsTabWidget->sizePolicy().hasHeightForWidth());
        preciseResultsTabWidget->setSizePolicy(sizePolicy);
        generalParamsTab = new QWidget();
        generalParamsTab->setObjectName(QString::fromUtf8("generalParamsTab"));
        verticalLayout_7 = new QVBoxLayout(generalParamsTab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        octreeLevelCheckBox = new QCheckBox(generalParamsTab);
        octreeLevelCheckBox->setObjectName(QString::fromUtf8("octreeLevelCheckBox"));

        hboxLayout3->addWidget(octreeLevelCheckBox);

        octreeLevelSpinBox = new QSpinBox(generalParamsTab);
        octreeLevelSpinBox->setObjectName(QString::fromUtf8("octreeLevelSpinBox"));
        octreeLevelSpinBox->setEnabled(false);

        hboxLayout3->addWidget(octreeLevelSpinBox);


        verticalLayout_7->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        maxDistCheckBox = new QCheckBox(generalParamsTab);
        maxDistCheckBox->setObjectName(QString::fromUtf8("maxDistCheckBox"));

        hboxLayout4->addWidget(maxDistCheckBox);

        maxSearchDistSpinBox = new QDoubleSpinBox(generalParamsTab);
        maxSearchDistSpinBox->setObjectName(QString::fromUtf8("maxSearchDistSpinBox"));
        maxSearchDistSpinBox->setEnabled(false);
        maxSearchDistSpinBox->setDecimals(6);
        maxSearchDistSpinBox->setMaximum(1e+09);
        maxSearchDistSpinBox->setValue(0);

        hboxLayout4->addWidget(maxSearchDistSpinBox);


        verticalLayout_7->addLayout(hboxLayout4);

        signedDistFrame = new QFrame(generalParamsTab);
        signedDistFrame->setObjectName(QString::fromUtf8("signedDistFrame"));
        signedDistFrame->setEnabled(false);
        signedDistFrame->setFrameShape(QFrame::NoFrame);
        signedDistFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(signedDistFrame);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        signedDistCheckBox = new QCheckBox(signedDistFrame);
        signedDistCheckBox->setObjectName(QString::fromUtf8("signedDistCheckBox"));

        horizontalLayout->addWidget(signedDistCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        flipNormalsCheckBox = new QCheckBox(signedDistFrame);
        flipNormalsCheckBox->setObjectName(QString::fromUtf8("flipNormalsCheckBox"));

        horizontalLayout->addWidget(flipNormalsCheckBox);


        verticalLayout_7->addWidget(signedDistFrame);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        multiThreadedCheckBox = new QCheckBox(generalParamsTab);
        multiThreadedCheckBox->setObjectName(QString::fromUtf8("multiThreadedCheckBox"));
        multiThreadedCheckBox->setChecked(true);

        _2->addWidget(multiThreadedCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_2);

        split3DCheckBox = new QCheckBox(generalParamsTab);
        split3DCheckBox->setObjectName(QString::fromUtf8("split3DCheckBox"));

        _2->addWidget(split3DCheckBox);


        verticalLayout_7->addLayout(_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        preciseResultsTabWidget->addTab(generalParamsTab, QString());
        localModelingTab = new QWidget();
        localModelingTab->setObjectName(QString::fromUtf8("localModelingTab"));
        verticalLayout_3 = new QVBoxLayout(localModelingTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_3 = new QLabel(localModelingTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout5->addWidget(label_3);

        localModelComboBox = new QComboBox(localModelingTab);
        localModelComboBox->setObjectName(QString::fromUtf8("localModelComboBox"));

        hboxLayout5->addWidget(localModelComboBox);


        verticalLayout_3->addLayout(hboxLayout5);

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

        verticalLayout_6->addWidget(preciseResultsTabWidget);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem1);

        computeButton = new QPushButton(preciseGroupBox);
        computeButton->setObjectName(QString::fromUtf8("computeButton"));

        hboxLayout6->addWidget(computeButton);


        verticalLayout_6->addLayout(hboxLayout6);


        verticalLayout_5->addWidget(preciseGroupBox);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem2);

        okButton = new QPushButton(ComparisonDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setEnabled(false);

        hboxLayout7->addWidget(okButton);

        cancelButton = new QPushButton(ComparisonDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout7->addWidget(cancelButton);


        verticalLayout_5->addLayout(hboxLayout7);


        retranslateUi(ComparisonDialog);
        QObject::connect(maxDistCheckBox, SIGNAL(toggled(bool)), maxSearchDistSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(octreeLevelCheckBox, SIGNAL(toggled(bool)), octreeLevelSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lmKNNRadioButton, SIGNAL(toggled(bool)), lmKNNSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lmKNNRadioButton, SIGNAL(toggled(bool)), lmRadiusDoubleSpinBox, SLOT(setDisabled(bool)));

        preciseResultsTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ComparisonDialog);
    } // setupUi

    void retranslateUi(QDialog *ComparisonDialog)
    {
        ComparisonDialog->setWindowTitle(QApplication::translate("ComparisonDialog", "Distance computation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ComparisonDialog", "Compared", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ComparisonDialog", "Reference", 0, QApplication::UnicodeUTF8));
        approxGroupBox->setTitle(QApplication::translate("ComparisonDialog", "Approx. results", 0, QApplication::UnicodeUTF8));
        histoButton->setText(QApplication::translate("ComparisonDialog", "...", 0, QApplication::UnicodeUTF8));
        preciseGroupBox->setTitle(QApplication::translate("ComparisonDialog", "Precise results", 0, QApplication::UnicodeUTF8));
        octreeLevelCheckBox->setText(QApplication::translate("ComparisonDialog", "Octree Level", 0, QApplication::UnicodeUTF8));
        maxDistCheckBox->setText(QApplication::translate("ComparisonDialog", "Max. dist", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        signedDistCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "compute signed distances (slower)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        signedDistCheckBox->setStatusTip(QApplication::translate("ComparisonDialog", "compute signed distances (slower)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        signedDistCheckBox->setText(QApplication::translate("ComparisonDialog", "signed distances", 0, QApplication::UnicodeUTF8));
        flipNormalsCheckBox->setText(QApplication::translate("ComparisonDialog", "flip normals", 0, QApplication::UnicodeUTF8));
        multiThreadedCheckBox->setText(QApplication::translate("ComparisonDialog", "multi-threaded", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        split3DCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "Generate 3 supplementary scalar fields with distances along each dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        split3DCheckBox->setStatusTip(QApplication::translate("ComparisonDialog", "Generate 3 supplementary scalar fields with distances along each dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        split3DCheckBox->setText(QApplication::translate("ComparisonDialog", "split X,Y and Z components", 0, QApplication::UnicodeUTF8));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(generalParamsTab), QApplication::translate("ComparisonDialog", "General parameters", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ComparisonDialog", "Local model", 0, QApplication::UnicodeUTF8));
        lmKNNRadioButton->setText(QApplication::translate("ComparisonDialog", "Points (kNN)", 0, QApplication::UnicodeUTF8));
        lmRadiusRadioButton->setText(QApplication::translate("ComparisonDialog", "Radius (Sphere)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lmOptimizeCheckBox->setToolTip(QApplication::translate("ComparisonDialog", "faster but more ... approximate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lmOptimizeCheckBox->setText(QApplication::translate("ComparisonDialog", "use the same model for all its points", 0, QApplication::UnicodeUTF8));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(localModelingTab), QApplication::translate("ComparisonDialog", "Local modeling", 0, QApplication::UnicodeUTF8));
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
