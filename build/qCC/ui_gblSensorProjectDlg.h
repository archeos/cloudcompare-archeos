/********************************************************************************
** Form generated from reading UI file 'gblSensorProjectDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GBLSENSORPROJECTDLG_H
#define UI_GBLSENSORPROJECTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GBLSensorProjectDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QComboBox *rotationOrderComboBox;
    QDialogButtonBox *buttonBox;
    QTabWidget *propertiesTabWidget;
    QWidget *tabOrientation;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *x1rot;
    QLineEdit *x2rot;
    QLineEdit *x3rot;
    QLabel *label_7;
    QLineEdit *y1rot;
    QLineEdit *y2rot;
    QLineEdit *y3rot;
    QLabel *label_8;
    QLineEdit *z1rot;
    QLineEdit *z2rot;
    QLineEdit *z3rot;
    QSpacerItem *spacerItem1;
    QLabel *label_2;
    QLineEdit *posXEdit;
    QLineEdit *posYEdit;
    QLineEdit *posZEdit;
    QWidget *tabSteps;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *label_9;
    QDoubleSpinBox *yawStepSpinBox;
    QHBoxLayout *hboxLayout2;
    QLabel *label_10;
    QDoubleSpinBox *pitchStepSpinBox;
    QSpacerItem *spacerItem2;
    QWidget *tabOther;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout3;
    QLabel *label_11;
    QDoubleSpinBox *uncertaintyDoubleSpinBox;
    QHBoxLayout *hboxLayout4;
    QLabel *label_12;
    QDoubleSpinBox *maxRangeDoubleSpinBox;
    QSpacerItem *spacerItem3;

    void setupUi(QDialog *GBLSensorProjectDialog)
    {
        if (GBLSensorProjectDialog->objectName().isEmpty())
            GBLSensorProjectDialog->setObjectName(QString::fromUtf8("GBLSensorProjectDialog"));
        GBLSensorProjectDialog->resize(400, 250);
        gridLayout = new QGridLayout(GBLSensorProjectDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label = new QLabel(GBLSensorProjectDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        rotationOrderComboBox = new QComboBox(GBLSensorProjectDialog);
        rotationOrderComboBox->setObjectName(QString::fromUtf8("rotationOrderComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rotationOrderComboBox->sizePolicy().hasHeightForWidth());
        rotationOrderComboBox->setSizePolicy(sizePolicy);
        rotationOrderComboBox->setEditable(false);
        rotationOrderComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout->addWidget(rotationOrderComboBox);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(GBLSensorProjectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        propertiesTabWidget = new QTabWidget(GBLSensorProjectDialog);
        propertiesTabWidget->setObjectName(QString::fromUtf8("propertiesTabWidget"));
        tabOrientation = new QWidget();
        tabOrientation->setObjectName(QString::fromUtf8("tabOrientation"));
        gridLayout_2 = new QGridLayout(tabOrientation);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(tabOrientation);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        x1rot = new QLineEdit(tabOrientation);
        x1rot->setObjectName(QString::fromUtf8("x1rot"));

        gridLayout_2->addWidget(x1rot, 1, 1, 1, 1);

        x2rot = new QLineEdit(tabOrientation);
        x2rot->setObjectName(QString::fromUtf8("x2rot"));

        gridLayout_2->addWidget(x2rot, 1, 2, 1, 1);

        x3rot = new QLineEdit(tabOrientation);
        x3rot->setObjectName(QString::fromUtf8("x3rot"));

        gridLayout_2->addWidget(x3rot, 1, 3, 1, 1);

        label_7 = new QLabel(tabOrientation);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        y1rot = new QLineEdit(tabOrientation);
        y1rot->setObjectName(QString::fromUtf8("y1rot"));

        gridLayout_2->addWidget(y1rot, 2, 1, 1, 1);

        y2rot = new QLineEdit(tabOrientation);
        y2rot->setObjectName(QString::fromUtf8("y2rot"));

        gridLayout_2->addWidget(y2rot, 2, 2, 1, 1);

        y3rot = new QLineEdit(tabOrientation);
        y3rot->setObjectName(QString::fromUtf8("y3rot"));

        gridLayout_2->addWidget(y3rot, 2, 3, 1, 1);

        label_8 = new QLabel(tabOrientation);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        z1rot = new QLineEdit(tabOrientation);
        z1rot->setObjectName(QString::fromUtf8("z1rot"));

        gridLayout_2->addWidget(z1rot, 3, 1, 1, 1);

        z2rot = new QLineEdit(tabOrientation);
        z2rot->setObjectName(QString::fromUtf8("z2rot"));

        gridLayout_2->addWidget(z2rot, 3, 2, 1, 1);

        z3rot = new QLineEdit(tabOrientation);
        z3rot->setObjectName(QString::fromUtf8("z3rot"));

        gridLayout_2->addWidget(z3rot, 3, 3, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem1, 4, 2, 1, 1);

        label_2 = new QLabel(tabOrientation);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        posXEdit = new QLineEdit(tabOrientation);
        posXEdit->setObjectName(QString::fromUtf8("posXEdit"));

        gridLayout_2->addWidget(posXEdit, 0, 1, 1, 1);

        posYEdit = new QLineEdit(tabOrientation);
        posYEdit->setObjectName(QString::fromUtf8("posYEdit"));

        gridLayout_2->addWidget(posYEdit, 0, 2, 1, 1);

        posZEdit = new QLineEdit(tabOrientation);
        posZEdit->setObjectName(QString::fromUtf8("posZEdit"));

        gridLayout_2->addWidget(posZEdit, 0, 3, 1, 1);

        propertiesTabWidget->addTab(tabOrientation, QString());
        tabSteps = new QWidget();
        tabSteps->setObjectName(QString::fromUtf8("tabSteps"));
        vboxLayout = new QVBoxLayout(tabSteps);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_9 = new QLabel(tabSteps);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        hboxLayout1->addWidget(label_9);

        yawStepSpinBox = new QDoubleSpinBox(tabSteps);
        yawStepSpinBox->setObjectName(QString::fromUtf8("yawStepSpinBox"));
        yawStepSpinBox->setDecimals(6);
        yawStepSpinBox->setMaximum(360);
        yawStepSpinBox->setSingleStep(1e-06);
        yawStepSpinBox->setValue(0.005);

        hboxLayout1->addWidget(yawStepSpinBox);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_10 = new QLabel(tabSteps);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        hboxLayout2->addWidget(label_10);

        pitchStepSpinBox = new QDoubleSpinBox(tabSteps);
        pitchStepSpinBox->setObjectName(QString::fromUtf8("pitchStepSpinBox"));
        pitchStepSpinBox->setDecimals(6);
        pitchStepSpinBox->setMaximum(360);
        pitchStepSpinBox->setSingleStep(1e-06);
        pitchStepSpinBox->setValue(0.005);

        hboxLayout2->addWidget(pitchStepSpinBox);


        vboxLayout->addLayout(hboxLayout2);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        propertiesTabWidget->addTab(tabSteps, QString());
        tabOther = new QWidget();
        tabOther->setObjectName(QString::fromUtf8("tabOther"));
        vboxLayout1 = new QVBoxLayout(tabOther);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_11 = new QLabel(tabOther);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        hboxLayout3->addWidget(label_11);

        uncertaintyDoubleSpinBox = new QDoubleSpinBox(tabOther);
        uncertaintyDoubleSpinBox->setObjectName(QString::fromUtf8("uncertaintyDoubleSpinBox"));
        uncertaintyDoubleSpinBox->setDecimals(4);
        uncertaintyDoubleSpinBox->setSingleStep(0.01);
        uncertaintyDoubleSpinBox->setValue(0.01);

        hboxLayout3->addWidget(uncertaintyDoubleSpinBox);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_12 = new QLabel(tabOther);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        hboxLayout4->addWidget(label_12);

        maxRangeDoubleSpinBox = new QDoubleSpinBox(tabOther);
        maxRangeDoubleSpinBox->setObjectName(QString::fromUtf8("maxRangeDoubleSpinBox"));
        maxRangeDoubleSpinBox->setMaximum(1e+12);
        maxRangeDoubleSpinBox->setValue(1e+12);

        hboxLayout4->addWidget(maxRangeDoubleSpinBox);


        vboxLayout1->addLayout(hboxLayout4);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem3);

        propertiesTabWidget->addTab(tabOther, QString());

        gridLayout->addWidget(propertiesTabWidget, 1, 0, 1, 1);


        retranslateUi(GBLSensorProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GBLSensorProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GBLSensorProjectDialog, SLOT(reject()));

        propertiesTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GBLSensorProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *GBLSensorProjectDialog)
    {
        GBLSensorProjectDialog->setWindowTitle(QApplication::translate("GBLSensorProjectDialog", "Sensor parameters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("GBLSensorProjectDialog", "theta=longitudinal (E-W) / phi=latitudinal (N-S)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("GBLSensorProjectDialog", "rotation order", 0, QApplication::UnicodeUTF8));
        rotationOrderComboBox->clear();
        rotationOrderComboBox->insertItems(0, QStringList()
         << QApplication::translate("GBLSensorProjectDialog", "yaw then pitch (default)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GBLSensorProjectDialog", "pitch then yaw", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        rotationOrderComboBox->setToolTip(QApplication::translate("GBLSensorProjectDialog", "theta=longitudinal (E-W) / phi=latitudinal (N-S)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("GBLSensorProjectDialog", "sensor front direction (yaw = 0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("GBLSensorProjectDialog", "X", 0, QApplication::UnicodeUTF8));
        x1rot->setText(QApplication::translate("GBLSensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
        x2rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        x3rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("GBLSensorProjectDialog", "sensor lateral direction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("GBLSensorProjectDialog", "Y", 0, QApplication::UnicodeUTF8));
        y1rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        y2rot->setText(QApplication::translate("GBLSensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
        y3rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("GBLSensorProjectDialog", "sensor vertical direction (pitch = 0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("GBLSensorProjectDialog", "Z", 0, QApplication::UnicodeUTF8));
        z1rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        z2rot->setText(QApplication::translate("GBLSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        z3rot->setText(QApplication::translate("GBLSensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("GBLSensorProjectDialog", "sensor center", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("GBLSensorProjectDialog", "C", 0, QApplication::UnicodeUTF8));
        posXEdit->setText(QApplication::translate("GBLSensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
        posYEdit->setText(QApplication::translate("GBLSensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
        posZEdit->setText(QApplication::translate("GBLSensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOrientation), QApplication::translate("GBLSensorProjectDialog", "Position + Orientation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("GBLSensorProjectDialog", "Rotation around the vertical axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("GBLSensorProjectDialog", "Yaw (degrees)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("GBLSensorProjectDialog", "Rotation around the lateral axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("GBLSensorProjectDialog", "Pitch (degrees)", 0, QApplication::UnicodeUTF8));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabSteps), QApplication::translate("GBLSensorProjectDialog", "Angular steps", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("GBLSensorProjectDialog", "Depth buffer 'uncertainty'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("GBLSensorProjectDialog", "Uncertainty", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("GBLSensorProjectDialog", "Sensor max range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("GBLSensorProjectDialog", "Max. range", 0, QApplication::UnicodeUTF8));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOther), QApplication::translate("GBLSensorProjectDialog", "Other", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GBLSensorProjectDialog: public Ui_GBLSensorProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GBLSENSORPROJECTDLG_H
