/********************************************************************************
** Form generated from reading UI file 'sensorProjectDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORPROJECTDLG_H
#define UI_SENSORPROJECTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SensorProjectDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QComboBox *rotationOrderComboBox;
    QTabWidget *propertiesTabWidget;
    QWidget *tabPosition;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QLineEdit *posXEdit;
    QLabel *label_3;
    QLineEdit *posYEdit;
    QLabel *label_4;
    QLineEdit *posZEdit;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QLabel *label_5;
    QDoubleSpinBox *baseSpinBox;
    QSpacerItem *spacerItem2;
    QWidget *tabOrientation;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout3;
    QLabel *label_6;
    QLineEdit *x1rot;
    QLineEdit *x2rot;
    QLineEdit *x3rot;
    QHBoxLayout *hboxLayout4;
    QLabel *label_7;
    QLineEdit *y1rot;
    QLineEdit *y2rot;
    QLineEdit *y3rot;
    QHBoxLayout *hboxLayout5;
    QLabel *label_8;
    QLineEdit *z1rot;
    QLineEdit *z2rot;
    QLineEdit *z3rot;
    QHBoxLayout *hboxLayout6;
    QCheckBox *axisMatCheckBox;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QWidget *tabSteps;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout7;
    QLabel *label_9;
    QDoubleSpinBox *dPhiSpinBox;
    QHBoxLayout *hboxLayout8;
    QLabel *label_10;
    QDoubleSpinBox *dThetaSpinBox;
    QSpacerItem *spacerItem5;
    QWidget *tabOther;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout9;
    QSpacerItem *spacerItem6;
    QLabel *label_11;
    QDoubleSpinBox *uncertaintyDoubleSpinBox;
    QHBoxLayout *hboxLayout10;
    QSpacerItem *spacerItem7;
    QLabel *label_12;
    QDoubleSpinBox *maxRangeDoubleSpinBox;
    QSpacerItem *spacerItem8;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SensorProjectDialog)
    {
        if (SensorProjectDialog->objectName().isEmpty())
            SensorProjectDialog->setObjectName(QString::fromUtf8("SensorProjectDialog"));
        SensorProjectDialog->resize(400, 235);
        vboxLayout = new QVBoxLayout(SensorProjectDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label = new QLabel(SensorProjectDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        rotationOrderComboBox = new QComboBox(SensorProjectDialog);
        rotationOrderComboBox->setObjectName(QString::fromUtf8("rotationOrderComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rotationOrderComboBox->sizePolicy().hasHeightForWidth());
        rotationOrderComboBox->setSizePolicy(sizePolicy);
        rotationOrderComboBox->setEditable(false);
        rotationOrderComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        hboxLayout->addWidget(rotationOrderComboBox);


        vboxLayout->addLayout(hboxLayout);

        propertiesTabWidget = new QTabWidget(SensorProjectDialog);
        propertiesTabWidget->setObjectName(QString::fromUtf8("propertiesTabWidget"));
        tabPosition = new QWidget();
        tabPosition->setObjectName(QString::fromUtf8("tabPosition"));
        vboxLayout1 = new QVBoxLayout(tabPosition);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(tabPosition);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        posXEdit = new QLineEdit(tabPosition);
        posXEdit->setObjectName(QString::fromUtf8("posXEdit"));

        hboxLayout1->addWidget(posXEdit);

        label_3 = new QLabel(tabPosition);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        posYEdit = new QLineEdit(tabPosition);
        posYEdit->setObjectName(QString::fromUtf8("posYEdit"));

        hboxLayout1->addWidget(posYEdit);

        label_4 = new QLabel(tabPosition);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout1->addWidget(label_4);

        posZEdit = new QLineEdit(tabPosition);
        posZEdit->setObjectName(QString::fromUtf8("posZEdit"));

        hboxLayout1->addWidget(posZEdit);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        label_5 = new QLabel(tabPosition);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout2->addWidget(label_5);

        baseSpinBox = new QDoubleSpinBox(tabPosition);
        baseSpinBox->setObjectName(QString::fromUtf8("baseSpinBox"));
        sizePolicy.setHeightForWidth(baseSpinBox->sizePolicy().hasHeightForWidth());
        baseSpinBox->setSizePolicy(sizePolicy);
        baseSpinBox->setMinimum(-1e+12);
        baseSpinBox->setMaximum(1e+12);
        baseSpinBox->setSingleStep(0.1);

        hboxLayout2->addWidget(baseSpinBox);


        vboxLayout1->addLayout(hboxLayout2);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);

        propertiesTabWidget->addTab(tabPosition, QString());
        tabOrientation = new QWidget();
        tabOrientation->setObjectName(QString::fromUtf8("tabOrientation"));
        vboxLayout2 = new QVBoxLayout(tabOrientation);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_6 = new QLabel(tabOrientation);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout3->addWidget(label_6);

        x1rot = new QLineEdit(tabOrientation);
        x1rot->setObjectName(QString::fromUtf8("x1rot"));
        x1rot->setEnabled(false);

        hboxLayout3->addWidget(x1rot);

        x2rot = new QLineEdit(tabOrientation);
        x2rot->setObjectName(QString::fromUtf8("x2rot"));
        x2rot->setEnabled(false);

        hboxLayout3->addWidget(x2rot);

        x3rot = new QLineEdit(tabOrientation);
        x3rot->setObjectName(QString::fromUtf8("x3rot"));
        x3rot->setEnabled(false);

        hboxLayout3->addWidget(x3rot);


        vboxLayout2->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_7 = new QLabel(tabOrientation);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        hboxLayout4->addWidget(label_7);

        y1rot = new QLineEdit(tabOrientation);
        y1rot->setObjectName(QString::fromUtf8("y1rot"));
        y1rot->setEnabled(false);

        hboxLayout4->addWidget(y1rot);

        y2rot = new QLineEdit(tabOrientation);
        y2rot->setObjectName(QString::fromUtf8("y2rot"));
        y2rot->setEnabled(false);

        hboxLayout4->addWidget(y2rot);

        y3rot = new QLineEdit(tabOrientation);
        y3rot->setObjectName(QString::fromUtf8("y3rot"));
        y3rot->setEnabled(false);

        hboxLayout4->addWidget(y3rot);


        vboxLayout2->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_8 = new QLabel(tabOrientation);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        hboxLayout5->addWidget(label_8);

        z1rot = new QLineEdit(tabOrientation);
        z1rot->setObjectName(QString::fromUtf8("z1rot"));
        z1rot->setEnabled(false);

        hboxLayout5->addWidget(z1rot);

        z2rot = new QLineEdit(tabOrientation);
        z2rot->setObjectName(QString::fromUtf8("z2rot"));
        z2rot->setEnabled(false);

        hboxLayout5->addWidget(z2rot);

        z3rot = new QLineEdit(tabOrientation);
        z3rot->setObjectName(QString::fromUtf8("z3rot"));
        z3rot->setEnabled(false);

        hboxLayout5->addWidget(z3rot);


        vboxLayout2->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        axisMatCheckBox = new QCheckBox(tabOrientation);
        axisMatCheckBox->setObjectName(QString::fromUtf8("axisMatCheckBox"));
        axisMatCheckBox->setChecked(true);

        hboxLayout6->addWidget(axisMatCheckBox);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem3);


        vboxLayout2->addLayout(hboxLayout6);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem4);

        propertiesTabWidget->addTab(tabOrientation, QString());
        tabSteps = new QWidget();
        tabSteps->setObjectName(QString::fromUtf8("tabSteps"));
        vboxLayout3 = new QVBoxLayout(tabSteps);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        label_9 = new QLabel(tabSteps);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        hboxLayout7->addWidget(label_9);

        dPhiSpinBox = new QDoubleSpinBox(tabSteps);
        dPhiSpinBox->setObjectName(QString::fromUtf8("dPhiSpinBox"));
        dPhiSpinBox->setDecimals(6);
        dPhiSpinBox->setMaximum(360);
        dPhiSpinBox->setSingleStep(1e-06);
        dPhiSpinBox->setValue(0.005);

        hboxLayout7->addWidget(dPhiSpinBox);


        vboxLayout3->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        label_10 = new QLabel(tabSteps);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        hboxLayout8->addWidget(label_10);

        dThetaSpinBox = new QDoubleSpinBox(tabSteps);
        dThetaSpinBox->setObjectName(QString::fromUtf8("dThetaSpinBox"));
        dThetaSpinBox->setDecimals(6);
        dThetaSpinBox->setMaximum(360);
        dThetaSpinBox->setSingleStep(1e-06);
        dThetaSpinBox->setValue(0.005);

        hboxLayout8->addWidget(dThetaSpinBox);


        vboxLayout3->addLayout(hboxLayout8);

        spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem5);

        propertiesTabWidget->addTab(tabSteps, QString());
        tabOther = new QWidget();
        tabOther->setObjectName(QString::fromUtf8("tabOther"));
        vboxLayout4 = new QVBoxLayout(tabOther);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem6);

        label_11 = new QLabel(tabOther);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        hboxLayout9->addWidget(label_11);

        uncertaintyDoubleSpinBox = new QDoubleSpinBox(tabOther);
        uncertaintyDoubleSpinBox->setObjectName(QString::fromUtf8("uncertaintyDoubleSpinBox"));
        sizePolicy.setHeightForWidth(uncertaintyDoubleSpinBox->sizePolicy().hasHeightForWidth());
        uncertaintyDoubleSpinBox->setSizePolicy(sizePolicy);
        uncertaintyDoubleSpinBox->setDecimals(4);
        uncertaintyDoubleSpinBox->setSingleStep(0.01);
        uncertaintyDoubleSpinBox->setValue(0.01);

        hboxLayout9->addWidget(uncertaintyDoubleSpinBox);


        vboxLayout4->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem7);

        label_12 = new QLabel(tabOther);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        hboxLayout10->addWidget(label_12);

        maxRangeDoubleSpinBox = new QDoubleSpinBox(tabOther);
        maxRangeDoubleSpinBox->setObjectName(QString::fromUtf8("maxRangeDoubleSpinBox"));
        sizePolicy.setHeightForWidth(maxRangeDoubleSpinBox->sizePolicy().hasHeightForWidth());
        maxRangeDoubleSpinBox->setSizePolicy(sizePolicy);
        maxRangeDoubleSpinBox->setMaximum(1e+12);
        maxRangeDoubleSpinBox->setValue(1e+12);

        hboxLayout10->addWidget(maxRangeDoubleSpinBox);


        vboxLayout4->addLayout(hboxLayout10);

        spacerItem8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem8);

        propertiesTabWidget->addTab(tabOther, QString());

        vboxLayout->addWidget(propertiesTabWidget);

        buttonBox = new QDialogButtonBox(SensorProjectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(SensorProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SensorProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SensorProjectDialog, SLOT(reject()));

        propertiesTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SensorProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *SensorProjectDialog)
    {
        SensorProjectDialog->setWindowTitle(QApplication::translate("SensorProjectDialog", "Sensor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("SensorProjectDialog", "theta=longitudinal (E-W) / phi=latitudinal (N-S)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SensorProjectDialog", "rotation order", 0, QApplication::UnicodeUTF8));
        rotationOrderComboBox->clear();
        rotationOrderComboBox->insertItems(0, QStringList()
         << QApplication::translate("SensorProjectDialog", "theta, phi (GS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SensorProjectDialog", "phi, theta (Soisic)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        rotationOrderComboBox->setToolTip(QApplication::translate("SensorProjectDialog", "theta=longitudinal (E-W) / phi=latitudinal (N-S)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SensorProjectDialog", "X", 0, QApplication::UnicodeUTF8));
        posXEdit->setText(QApplication::translate("SensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SensorProjectDialog", "Y", 0, QApplication::UnicodeUTF8));
        posYEdit->setText(QApplication::translate("SensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SensorProjectDialog", "Z", 0, QApplication::UnicodeUTF8));
        posZEdit->setText(QApplication::translate("SensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("SensorProjectDialog", "distance between sensor and emitter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("SensorProjectDialog", "Sensor base", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        baseSpinBox->setToolTip(QApplication::translate("SensorProjectDialog", "distance between sensor and emitter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabPosition), QApplication::translate("SensorProjectDialog", "Position (center)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SensorProjectDialog", "X", 0, QApplication::UnicodeUTF8));
        x1rot->setText(QApplication::translate("SensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
        x2rot->setText(QApplication::translate("SensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        x3rot->setText(QApplication::translate("SensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SensorProjectDialog", "Y", 0, QApplication::UnicodeUTF8));
        y1rot->setText(QApplication::translate("SensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        y2rot->setText(QApplication::translate("SensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
        y3rot->setText(QApplication::translate("SensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SensorProjectDialog", "Z", 0, QApplication::UnicodeUTF8));
        z1rot->setText(QApplication::translate("SensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        z2rot->setText(QApplication::translate("SensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        z3rot->setText(QApplication::translate("SensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
        axisMatCheckBox->setText(QApplication::translate("SensorProjectDialog", "Identity", 0, QApplication::UnicodeUTF8));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOrientation), QApplication::translate("SensorProjectDialog", "Orientation", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SensorProjectDialog", "dPhi (degrees)", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("SensorProjectDialog", "dTheta (degrees)", 0, QApplication::UnicodeUTF8));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabSteps), QApplication::translate("SensorProjectDialog", "Angular steps", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SensorProjectDialog", "Uncertainty", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("SensorProjectDialog", "Max. range", 0, QApplication::UnicodeUTF8));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOther), QApplication::translate("SensorProjectDialog", "Other", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SensorProjectDialog: public Ui_SensorProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORPROJECTDLG_H
