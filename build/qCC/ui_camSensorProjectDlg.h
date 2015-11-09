/********************************************************************************
** Form generated from reading UI file 'camSensorProjectDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMSENSORPROJECTDLG_H
#define UI_CAMSENSORPROJECTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CamSensorProjectDialog
{
public:
    QVBoxLayout *verticalLayout;
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
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QLineEdit *posXEdit;
    QLineEdit *posYEdit;
    QLineEdit *posZEdit;
    QWidget *tabOther;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *focalDoubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *fovDoubleSpinBox;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QSpinBox *arrayWSpinBox;
    QLabel *label_14;
    QSpinBox *arrayHSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *pixWDoubleSpinBox;
    QLabel *label_15;
    QDoubleSpinBox *pixHDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_11;
    QDoubleSpinBox *zNearDoubleSpinBox;
    QLabel *label_12;
    QDoubleSpinBox *zFarDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *skewDoubleSpinBox;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *distInfoTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CamSensorProjectDialog)
    {
        if (CamSensorProjectDialog->objectName().isEmpty())
            CamSensorProjectDialog->setObjectName(QString::fromUtf8("CamSensorProjectDialog"));
        CamSensorProjectDialog->resize(400, 272);
        verticalLayout = new QVBoxLayout(CamSensorProjectDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        propertiesTabWidget = new QTabWidget(CamSensorProjectDialog);
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

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem, 4, 2, 1, 1);

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
        tabOther = new QWidget();
        tabOther->setObjectName(QString::fromUtf8("tabOther"));
        formLayout = new QFormLayout(tabOther);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(tabOther);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        focalDoubleSpinBox = new QDoubleSpinBox(tabOther);
        focalDoubleSpinBox->setObjectName(QString::fromUtf8("focalDoubleSpinBox"));
        focalDoubleSpinBox->setDecimals(6);
        focalDoubleSpinBox->setMaximum(1e+09);
        focalDoubleSpinBox->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, focalDoubleSpinBox);

        label_5 = new QLabel(tabOther);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        fovDoubleSpinBox = new QDoubleSpinBox(tabOther);
        fovDoubleSpinBox->setObjectName(QString::fromUtf8("fovDoubleSpinBox"));
        fovDoubleSpinBox->setMaximum(180);
        fovDoubleSpinBox->setValue(45);

        formLayout->setWidget(1, QFormLayout::FieldRole, fovDoubleSpinBox);

        label_13 = new QLabel(tabOther);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        arrayWSpinBox = new QSpinBox(tabOther);
        arrayWSpinBox->setObjectName(QString::fromUtf8("arrayWSpinBox"));
        arrayWSpinBox->setMaximum(65536);
        arrayWSpinBox->setSingleStep(100);
        arrayWSpinBox->setValue(800);

        horizontalLayout->addWidget(arrayWSpinBox);

        label_14 = new QLabel(tabOther);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout->addWidget(label_14);

        arrayHSpinBox = new QSpinBox(tabOther);
        arrayHSpinBox->setObjectName(QString::fromUtf8("arrayHSpinBox"));
        arrayHSpinBox->setMaximum(65536);
        arrayHSpinBox->setSingleStep(100);
        arrayHSpinBox->setValue(600);

        horizontalLayout->addWidget(arrayHSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_3 = new QLabel(tabOther);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pixWDoubleSpinBox = new QDoubleSpinBox(tabOther);
        pixWDoubleSpinBox->setObjectName(QString::fromUtf8("pixWDoubleSpinBox"));
        pixWDoubleSpinBox->setDecimals(6);
        pixWDoubleSpinBox->setMaximum(1e+09);
        pixWDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(pixWDoubleSpinBox);

        label_15 = new QLabel(tabOther);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_2->addWidget(label_15);

        pixHDoubleSpinBox = new QDoubleSpinBox(tabOther);
        pixHDoubleSpinBox->setObjectName(QString::fromUtf8("pixHDoubleSpinBox"));
        pixHDoubleSpinBox->setDecimals(6);
        pixHDoubleSpinBox->setMaximum(1e+09);
        pixHDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(pixHDoubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);

        label_11 = new QLabel(tabOther);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_11);

        zNearDoubleSpinBox = new QDoubleSpinBox(tabOther);
        zNearDoubleSpinBox->setObjectName(QString::fromUtf8("zNearDoubleSpinBox"));
        zNearDoubleSpinBox->setDecimals(6);
        zNearDoubleSpinBox->setMaximum(1e+09);

        formLayout->setWidget(4, QFormLayout::FieldRole, zNearDoubleSpinBox);

        label_12 = new QLabel(tabOther);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_12);

        zFarDoubleSpinBox = new QDoubleSpinBox(tabOther);
        zFarDoubleSpinBox->setObjectName(QString::fromUtf8("zFarDoubleSpinBox"));
        zFarDoubleSpinBox->setDecimals(6);
        zFarDoubleSpinBox->setMaximum(1e+09);
        zFarDoubleSpinBox->setValue(100);

        formLayout->setWidget(5, QFormLayout::FieldRole, zFarDoubleSpinBox);

        label_4 = new QLabel(tabOther);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        skewDoubleSpinBox = new QDoubleSpinBox(tabOther);
        skewDoubleSpinBox->setObjectName(QString::fromUtf8("skewDoubleSpinBox"));
        skewDoubleSpinBox->setMaximum(1e+09);

        formLayout->setWidget(6, QFormLayout::FieldRole, skewDoubleSpinBox);

        propertiesTabWidget->addTab(tabOther, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        distInfoTextEdit = new QTextEdit(tab);
        distInfoTextEdit->setObjectName(QString::fromUtf8("distInfoTextEdit"));
        distInfoTextEdit->setReadOnly(true);

        verticalLayout_2->addWidget(distInfoTextEdit);

        propertiesTabWidget->addTab(tab, QString());

        verticalLayout->addWidget(propertiesTabWidget);

        buttonBox = new QDialogButtonBox(CamSensorProjectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CamSensorProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CamSensorProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CamSensorProjectDialog, SLOT(reject()));

        propertiesTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CamSensorProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *CamSensorProjectDialog)
    {
        CamSensorProjectDialog->setWindowTitle(QApplication::translate("CamSensorProjectDialog", "Sensor parameters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("CamSensorProjectDialog", "sensor front direction (yaw = 0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("CamSensorProjectDialog", "X", 0, QApplication::UnicodeUTF8));
        x1rot->setText(QApplication::translate("CamSensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
        x2rot->setText(QApplication::translate("CamSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        x3rot->setText(QApplication::translate("CamSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("CamSensorProjectDialog", "sensor lateral direction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("CamSensorProjectDialog", "Y", 0, QApplication::UnicodeUTF8));
        y1rot->setText(QApplication::translate("CamSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        y2rot->setText(QApplication::translate("CamSensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
        y3rot->setText(QApplication::translate("CamSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("CamSensorProjectDialog", "sensor vertical direction (pitch = 0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("CamSensorProjectDialog", "Z", 0, QApplication::UnicodeUTF8));
        z1rot->setText(QApplication::translate("CamSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        z2rot->setText(QApplication::translate("CamSensorProjectDialog", "0", 0, QApplication::UnicodeUTF8));
        z3rot->setText(QApplication::translate("CamSensorProjectDialog", "1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("CamSensorProjectDialog", "sensor center", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("CamSensorProjectDialog", "C", 0, QApplication::UnicodeUTF8));
        posXEdit->setText(QApplication::translate("CamSensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
        posYEdit->setText(QApplication::translate("CamSensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
        posZEdit->setText(QApplication::translate("CamSensorProjectDialog", "0.0", 0, QApplication::UnicodeUTF8));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOrientation), QApplication::translate("CamSensorProjectDialog", "Position + Orientation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CamSensorProjectDialog", "focal", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        focalDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Focal (in pixels)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        focalDoubleSpinBox->setSuffix(QApplication::translate("CamSensorProjectDialog", " pix", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CamSensorProjectDialog", "vert. f.o.v.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fovDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Vertical field of view (degrees)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fovDoubleSpinBox->setSuffix(QApplication::translate("CamSensorProjectDialog", " deg.", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CamSensorProjectDialog", "array size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        arrayWSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "CCD array width (pixels)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("CamSensorProjectDialog", "x", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        arrayHSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "CCD array height (pixels)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("CamSensorProjectDialog", "Pixel size (metric units)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("CamSensorProjectDialog", "pixel size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pixWDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "CCD pixel width (metric units)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("CamSensorProjectDialog", "x", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pixHDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "CCD pixel height (metric units)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("CamSensorProjectDialog", "zNear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        zNearDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Near cutting plane (CCD pixel width (metric units - for display)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("CamSensorProjectDialog", "zFar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        zFarDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Far cutting plane (CCD pixel width (metric units - for display)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("CamSensorProjectDialog", "skew", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        skewDoubleSpinBox->setToolTip(QApplication::translate("CamSensorProjectDialog", "Skew parameter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOther), QApplication::translate("CamSensorProjectDialog", "Intrinsic params", 0, QApplication::UnicodeUTF8));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tab), QApplication::translate("CamSensorProjectDialog", "Distortion / uncertainty", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CamSensorProjectDialog: public Ui_CamSensorProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMSENSORPROJECTDLG_H
