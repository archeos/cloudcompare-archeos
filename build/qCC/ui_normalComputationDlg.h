/********************************************************************************
** Form generated from reading UI file 'normalComputationDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALCOMPUTATIONDLG_H
#define UI_NORMALCOMPUTATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NormalComputationDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *mixedSelectionLabel;
    QGroupBox *surfaceGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *localModelComboBox;
    QGroupBox *neighborsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *useScanGridRadioButton;
    QSpacerItem *horizontalSpacer;
    QFrame *gridKernelFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *gridKernelSpinBox;
    QFrame *useScanGridsFrame;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *useOctreeRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *localRadiusFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QToolButton *autoRadiusToolButton;
    QGroupBox *normalsOrientGroupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *scanGridsOrientRadioButton;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *preferredOrientRadioButton;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *preferredOrientationComboBox;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mstOrientRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *mstNeighborsSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NormalComputationDlg)
    {
        if (NormalComputationDlg->objectName().isEmpty())
            NormalComputationDlg->setObjectName(QString::fromUtf8("NormalComputationDlg"));
        NormalComputationDlg->resize(400, 362);
        verticalLayout_3 = new QVBoxLayout(NormalComputationDlg);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mixedSelectionLabel = new QLabel(NormalComputationDlg);
        mixedSelectionLabel->setObjectName(QString::fromUtf8("mixedSelectionLabel"));
        mixedSelectionLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        mixedSelectionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(mixedSelectionLabel);

        surfaceGroupBox = new QGroupBox(NormalComputationDlg);
        surfaceGroupBox->setObjectName(QString::fromUtf8("surfaceGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(surfaceGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, -1, -1);
        label = new QLabel(surfaceGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        localModelComboBox = new QComboBox(surfaceGroupBox);
        localModelComboBox->setObjectName(QString::fromUtf8("localModelComboBox"));

        horizontalLayout_2->addWidget(localModelComboBox);


        verticalLayout_3->addWidget(surfaceGroupBox);

        neighborsGroupBox = new QGroupBox(NormalComputationDlg);
        neighborsGroupBox->setObjectName(QString::fromUtf8("neighborsGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(neighborsGroupBox->sizePolicy().hasHeightForWidth());
        neighborsGroupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(neighborsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, -1, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        useScanGridRadioButton = new QRadioButton(neighborsGroupBox);
        useScanGridRadioButton->setObjectName(QString::fromUtf8("useScanGridRadioButton"));

        horizontalLayout_3->addWidget(useScanGridRadioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        gridKernelFrame = new QFrame(neighborsGroupBox);
        gridKernelFrame->setObjectName(QString::fromUtf8("gridKernelFrame"));
        gridKernelFrame->setEnabled(false);
        horizontalLayout = new QHBoxLayout(gridKernelFrame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(gridKernelFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        gridKernelSpinBox = new QSpinBox(gridKernelFrame);
        gridKernelSpinBox->setObjectName(QString::fromUtf8("gridKernelSpinBox"));
        gridKernelSpinBox->setMinimum(1);
        gridKernelSpinBox->setMaximum(10);
        gridKernelSpinBox->setValue(2);

        horizontalLayout->addWidget(gridKernelSpinBox);


        horizontalLayout_3->addWidget(gridKernelFrame);


        verticalLayout_2->addLayout(horizontalLayout_3);

        useScanGridsFrame = new QFrame(neighborsGroupBox);
        useScanGridsFrame->setObjectName(QString::fromUtf8("useScanGridsFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(useScanGridsFrame->sizePolicy().hasHeightForWidth());
        useScanGridsFrame->setSizePolicy(sizePolicy1);
        horizontalLayout_9 = new QHBoxLayout(useScanGridsFrame);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));

        verticalLayout_2->addWidget(useScanGridsFrame);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        useOctreeRadioButton = new QRadioButton(neighborsGroupBox);
        useOctreeRadioButton->setObjectName(QString::fromUtf8("useOctreeRadioButton"));
        useOctreeRadioButton->setChecked(true);

        horizontalLayout_10->addWidget(useOctreeRadioButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        localRadiusFrame = new QFrame(neighborsGroupBox);
        localRadiusFrame->setObjectName(QString::fromUtf8("localRadiusFrame"));
        horizontalLayout_8 = new QHBoxLayout(localRadiusFrame);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(localRadiusFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        radiusDoubleSpinBox = new QDoubleSpinBox(localRadiusFrame);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMinimum(1e-06);
        radiusDoubleSpinBox->setMaximum(1e+06);
        radiusDoubleSpinBox->setSingleStep(0.1);
        radiusDoubleSpinBox->setValue(1);

        horizontalLayout_8->addWidget(radiusDoubleSpinBox);

        autoRadiusToolButton = new QToolButton(localRadiusFrame);
        autoRadiusToolButton->setObjectName(QString::fromUtf8("autoRadiusToolButton"));

        horizontalLayout_8->addWidget(autoRadiusToolButton);


        horizontalLayout_10->addWidget(localRadiusFrame);


        verticalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout_3->addWidget(neighborsGroupBox);

        normalsOrientGroupBox = new QGroupBox(NormalComputationDlg);
        normalsOrientGroupBox->setObjectName(QString::fromUtf8("normalsOrientGroupBox"));
        sizePolicy.setHeightForWidth(normalsOrientGroupBox->sizePolicy().hasHeightForWidth());
        normalsOrientGroupBox->setSizePolicy(sizePolicy);
        normalsOrientGroupBox->setCheckable(true);
        verticalLayout = new QVBoxLayout(normalsOrientGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, -1, -1, -1);
        scanGridsOrientRadioButton = new QRadioButton(normalsOrientGroupBox);
        scanGridsOrientRadioButton->setObjectName(QString::fromUtf8("scanGridsOrientRadioButton"));

        verticalLayout->addWidget(scanGridsOrientRadioButton);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        preferredOrientRadioButton = new QRadioButton(normalsOrientGroupBox);
        preferredOrientRadioButton->setObjectName(QString::fromUtf8("preferredOrientRadioButton"));

        horizontalLayout_5->addWidget(preferredOrientRadioButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        preferredOrientationComboBox = new QComboBox(normalsOrientGroupBox);
        preferredOrientationComboBox->setObjectName(QString::fromUtf8("preferredOrientationComboBox"));
        preferredOrientationComboBox->setEnabled(false);
        preferredOrientationComboBox->setMaxVisibleItems(12);

        horizontalLayout_5->addWidget(preferredOrientationComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mstOrientRadioButton = new QRadioButton(normalsOrientGroupBox);
        mstOrientRadioButton->setObjectName(QString::fromUtf8("mstOrientRadioButton"));
        mstOrientRadioButton->setChecked(true);

        horizontalLayout_6->addWidget(mstOrientRadioButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        mstNeighborsSpinBox = new QSpinBox(normalsOrientGroupBox);
        mstNeighborsSpinBox->setObjectName(QString::fromUtf8("mstNeighborsSpinBox"));
        mstNeighborsSpinBox->setEnabled(true);
        mstNeighborsSpinBox->setMinimum(1);

        horizontalLayout_6->addWidget(mstNeighborsSpinBox);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_3->addWidget(normalsOrientGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(NormalComputationDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        buttonBox->raise();
        normalsOrientGroupBox->raise();
        mixedSelectionLabel->raise();
        surfaceGroupBox->raise();
        neighborsGroupBox->raise();

        retranslateUi(NormalComputationDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), NormalComputationDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NormalComputationDlg, SLOT(reject()));
        QObject::connect(useScanGridRadioButton, SIGNAL(toggled(bool)), gridKernelFrame, SLOT(setEnabled(bool)));
        QObject::connect(useOctreeRadioButton, SIGNAL(toggled(bool)), localRadiusFrame, SLOT(setEnabled(bool)));
        QObject::connect(preferredOrientRadioButton, SIGNAL(toggled(bool)), preferredOrientationComboBox, SLOT(setEnabled(bool)));
        QObject::connect(mstOrientRadioButton, SIGNAL(toggled(bool)), mstNeighborsSpinBox, SLOT(setEnabled(bool)));

        localModelComboBox->setCurrentIndex(0);
        preferredOrientationComboBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(NormalComputationDlg);
    } // setupUi

    void retranslateUi(QDialog *NormalComputationDlg)
    {
        NormalComputationDlg->setWindowTitle(QApplication::translate("NormalComputationDlg", "Compute normals", 0, QApplication::UnicodeUTF8));
        mixedSelectionLabel->setText(QApplication::translate("NormalComputationDlg", "Mixed selection: some clouds don't have scan grid(s)", 0, QApplication::UnicodeUTF8));
        surfaceGroupBox->setTitle(QApplication::translate("NormalComputationDlg", "Surface approximation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NormalComputationDlg", "Local surface model", 0, QApplication::UnicodeUTF8));
        localModelComboBox->clear();
        localModelComboBox->insertItems(0, QStringList()
         << QApplication::translate("NormalComputationDlg", "Plane", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "Quadric", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "Triangulation", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        localModelComboBox->setToolTip(QApplication::translate("NormalComputationDlg", "Local surface estimation model", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        neighborsGroupBox->setTitle(QApplication::translate("NormalComputationDlg", "Nieghbors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        useScanGridRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "Using scan grid(s) instead of the octree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        useScanGridRadioButton->setText(QApplication::translate("NormalComputationDlg", "use scan grid(s) whenever possible", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("NormalComputationDlg", "Each normal will be computed using the (2p+1)*(2p+1) neighbors in the grid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("NormalComputationDlg", "kernel size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gridKernelSpinBox->setToolTip(QApplication::translate("NormalComputationDlg", "Each normal will be computed using the (2p+1)*(2p+1) neighbors in the grid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        useOctreeRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "The octree works for any cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        useOctreeRadioButton->setText(QApplication::translate("NormalComputationDlg", "use octree", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("NormalComputationDlg", "Radius of the sphere in which the neighbors will be extracted", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("NormalComputationDlg", "radius", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radiusDoubleSpinBox->setToolTip(QApplication::translate("NormalComputationDlg", "Radius of the sphere in which the neighbors will be extracted", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        autoRadiusToolButton->setText(QApplication::translate("NormalComputationDlg", "Auto", 0, QApplication::UnicodeUTF8));
        normalsOrientGroupBox->setTitle(QApplication::translate("NormalComputationDlg", "Orientation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        scanGridsOrientRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "Using scan grid(s) is the most robust method", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        scanGridsOrientRadioButton->setText(QApplication::translate("NormalComputationDlg", "Use scan grid(s) whenever possible", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        preferredOrientRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "To give a hint on how to orient normals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        preferredOrientRadioButton->setText(QApplication::translate("NormalComputationDlg", "Use preferred orientation", 0, QApplication::UnicodeUTF8));
        preferredOrientationComboBox->clear();
        preferredOrientationComboBox->insertItems(0, QStringList()
         << QApplication::translate("NormalComputationDlg", "+X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "-X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "+Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "-Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "+Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "-Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "+Barycenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "- Barycenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "+ (0,0,0)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "- (0,0,0)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "Use previous normal", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        mstOrientRadioButton->setToolTip(QApplication::translate("NormalComputationDlg", "Generic 3D orientation algorithm", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mstOrientRadioButton->setText(QApplication::translate("NormalComputationDlg", "Use Minimum Spanning Tree", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mstNeighborsSpinBox->setToolTip(QApplication::translate("NormalComputationDlg", "Number of neighbors used to build the tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mstNeighborsSpinBox->setPrefix(QApplication::translate("NormalComputationDlg", "knn = ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NormalComputationDlg: public Ui_NormalComputationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALCOMPUTATIONDLG_H
