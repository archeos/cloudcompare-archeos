/********************************************************************************
** Form generated from reading UI file 'primitiveFactoryDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMITIVEFACTORYDLG_H
#define UI_PRIMITIVEFACTORYDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrimitiveFactoryDlg
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *planeTab;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *planeWidthDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *planeHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *boxTab;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *boxDxDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *boxDyDoubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *boxDzDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *sphereTab;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QDoubleSpinBox *sphereRadiusDoubleSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *cylTab;
    QGridLayout *gridLayout_6;
    QFormLayout *formLayout_6;
    QLabel *label_7;
    QDoubleSpinBox *cylRadiusDoubleSpinBox;
    QLabel *label_8;
    QDoubleSpinBox *cylHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QWidget *coneTab;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_4;
    QLabel *label_10;
    QDoubleSpinBox *coneTopRadiusDoubleSpinBox;
    QLabel *label_9;
    QDoubleSpinBox *coneBottomRadiusDoubleSpinBox;
    QLabel *label_11;
    QDoubleSpinBox *coneHeightDoubleSpinBox;
    QGroupBox *snoutGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    QDoubleSpinBox *coneXOffsetDoubleSpinBox;
    QLabel *label_13;
    QDoubleSpinBox *coneYOffsetDoubleSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *torusTab;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_5;
    QLabel *label_14;
    QDoubleSpinBox *torusInsideRadiusDoubleSpinBox;
    QLabel *label_15;
    QDoubleSpinBox *torusOutsideRadiusDoubleSpinBox;
    QLabel *label_16;
    QDoubleSpinBox *torusAngleDoubleSpinBox;
    QGroupBox *torusRectGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QDoubleSpinBox *torusRectSectionHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QWidget *dishTab;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_13;
    QLabel *label_18;
    QDoubleSpinBox *dishRadiusDoubleSpinBox;
    QLabel *label_19;
    QDoubleSpinBox *dishHeightDoubleSpinBox;
    QGroupBox *dishEllipsoidGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_39;
    QDoubleSpinBox *dishRadius2DoubleSpinBox;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_40;
    QSpinBox *precisionSpinBox;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *createPushButton;
    QPushButton *closePushButton;
    QSpacerItem *verticalSpacer_14;

    void setupUi(QDialog *PrimitiveFactoryDlg)
    {
        if (PrimitiveFactoryDlg->objectName().isEmpty())
            PrimitiveFactoryDlg->setObjectName(QString::fromUtf8("PrimitiveFactoryDlg"));
        PrimitiveFactoryDlg->resize(615, 300);
        verticalLayout_6 = new QVBoxLayout(PrimitiveFactoryDlg);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tabWidget = new QTabWidget(PrimitiveFactoryDlg);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        planeTab = new QWidget();
        planeTab->setObjectName(QString::fromUtf8("planeTab"));
        gridLayout = new QGridLayout(planeTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(planeTab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        planeWidthDoubleSpinBox = new QDoubleSpinBox(planeTab);
        planeWidthDoubleSpinBox->setObjectName(QString::fromUtf8("planeWidthDoubleSpinBox"));
        planeWidthDoubleSpinBox->setDecimals(6);
        planeWidthDoubleSpinBox->setMinimum(1e-06);
        planeWidthDoubleSpinBox->setMaximum(1e+08);
        planeWidthDoubleSpinBox->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, planeWidthDoubleSpinBox);

        label_2 = new QLabel(planeTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        planeHeightDoubleSpinBox = new QDoubleSpinBox(planeTab);
        planeHeightDoubleSpinBox->setObjectName(QString::fromUtf8("planeHeightDoubleSpinBox"));
        planeHeightDoubleSpinBox->setDecimals(6);
        planeHeightDoubleSpinBox->setMinimum(1e-06);
        planeHeightDoubleSpinBox->setMaximum(1e+08);
        planeHeightDoubleSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, planeHeightDoubleSpinBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(333, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/primPlane.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(planeTab, icon, QString());
        boxTab = new QWidget();
        boxTab->setObjectName(QString::fromUtf8("boxTab"));
        gridLayout_2 = new QGridLayout(boxTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(boxTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        boxDxDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDxDoubleSpinBox->setObjectName(QString::fromUtf8("boxDxDoubleSpinBox"));
        boxDxDoubleSpinBox->setDecimals(6);
        boxDxDoubleSpinBox->setMinimum(1e-06);
        boxDxDoubleSpinBox->setMaximum(1e+08);
        boxDxDoubleSpinBox->setValue(1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, boxDxDoubleSpinBox);

        label_4 = new QLabel(boxTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        boxDyDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDyDoubleSpinBox->setObjectName(QString::fromUtf8("boxDyDoubleSpinBox"));
        boxDyDoubleSpinBox->setDecimals(6);
        boxDyDoubleSpinBox->setMinimum(1e-06);
        boxDyDoubleSpinBox->setMaximum(1e+08);
        boxDyDoubleSpinBox->setValue(1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, boxDyDoubleSpinBox);

        label_5 = new QLabel(boxTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        boxDzDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDzDoubleSpinBox->setObjectName(QString::fromUtf8("boxDzDoubleSpinBox"));
        boxDzDoubleSpinBox->setDecimals(6);
        boxDzDoubleSpinBox->setMinimum(1e-06);
        boxDzDoubleSpinBox->setMaximum(1e+08);
        boxDzDoubleSpinBox->setValue(1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, boxDzDoubleSpinBox);


        gridLayout_2->addLayout(formLayout_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(334, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/primBox.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(boxTab, icon1, QString());
        sphereTab = new QWidget();
        sphereTab->setObjectName(QString::fromUtf8("sphereTab"));
        gridLayout_3 = new QGridLayout(sphereTab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(sphereTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        sphereRadiusDoubleSpinBox = new QDoubleSpinBox(sphereTab);
        sphereRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("sphereRadiusDoubleSpinBox"));
        sphereRadiusDoubleSpinBox->setDecimals(6);
        sphereRadiusDoubleSpinBox->setMinimum(1e-06);
        sphereRadiusDoubleSpinBox->setMaximum(1e+08);
        sphereRadiusDoubleSpinBox->setValue(2);

        horizontalLayout->addWidget(sphereRadiusDoubleSpinBox);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(317, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 136, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 1, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/primSphere.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(sphereTab, icon2, QString());
        cylTab = new QWidget();
        cylTab->setObjectName(QString::fromUtf8("cylTab"));
        gridLayout_6 = new QGridLayout(cylTab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_7 = new QLabel(cylTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_7);

        cylRadiusDoubleSpinBox = new QDoubleSpinBox(cylTab);
        cylRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("cylRadiusDoubleSpinBox"));
        cylRadiusDoubleSpinBox->setDecimals(6);
        cylRadiusDoubleSpinBox->setMinimum(1e-06);
        cylRadiusDoubleSpinBox->setMaximum(1e+08);
        cylRadiusDoubleSpinBox->setValue(2);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, cylRadiusDoubleSpinBox);

        label_8 = new QLabel(cylTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_8);

        cylHeightDoubleSpinBox = new QDoubleSpinBox(cylTab);
        cylHeightDoubleSpinBox->setObjectName(QString::fromUtf8("cylHeightDoubleSpinBox"));
        cylHeightDoubleSpinBox->setDecimals(6);
        cylHeightDoubleSpinBox->setMinimum(1e-06);
        cylHeightDoubleSpinBox->setMaximum(1e+08);
        cylHeightDoubleSpinBox->setValue(5);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, cylHeightDoubleSpinBox);


        gridLayout_6->addLayout(formLayout_6, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(316, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 1, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/primCylinder.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(cylTab, icon3, QString());
        coneTab = new QWidget();
        coneTab->setObjectName(QString::fromUtf8("coneTab"));
        gridLayout_4 = new QGridLayout(coneTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_10 = new QLabel(coneTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        coneTopRadiusDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneTopRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("coneTopRadiusDoubleSpinBox"));
        coneTopRadiusDoubleSpinBox->setDecimals(6);
        coneTopRadiusDoubleSpinBox->setMinimum(0);
        coneTopRadiusDoubleSpinBox->setMaximum(1e+08);
        coneTopRadiusDoubleSpinBox->setValue(0);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, coneTopRadiusDoubleSpinBox);

        label_9 = new QLabel(coneTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_9);

        coneBottomRadiusDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneBottomRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("coneBottomRadiusDoubleSpinBox"));
        coneBottomRadiusDoubleSpinBox->setDecimals(6);
        coneBottomRadiusDoubleSpinBox->setMinimum(0);
        coneBottomRadiusDoubleSpinBox->setMaximum(1e+08);
        coneBottomRadiusDoubleSpinBox->setValue(2);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, coneBottomRadiusDoubleSpinBox);

        label_11 = new QLabel(coneTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_11);

        coneHeightDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneHeightDoubleSpinBox->setObjectName(QString::fromUtf8("coneHeightDoubleSpinBox"));
        coneHeightDoubleSpinBox->setDecimals(6);
        coneHeightDoubleSpinBox->setMinimum(1e-06);
        coneHeightDoubleSpinBox->setMaximum(1e+08);
        coneHeightDoubleSpinBox->setValue(3);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, coneHeightDoubleSpinBox);


        verticalLayout->addLayout(formLayout_4);

        snoutGroupBox = new QGroupBox(coneTab);
        snoutGroupBox->setObjectName(QString::fromUtf8("snoutGroupBox"));
        snoutGroupBox->setCheckable(true);
        snoutGroupBox->setChecked(false);
        formLayout_3 = new QFormLayout(snoutGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_12 = new QLabel(snoutGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        coneXOffsetDoubleSpinBox = new QDoubleSpinBox(snoutGroupBox);
        coneXOffsetDoubleSpinBox->setObjectName(QString::fromUtf8("coneXOffsetDoubleSpinBox"));
        coneXOffsetDoubleSpinBox->setDecimals(6);
        coneXOffsetDoubleSpinBox->setMinimum(0);
        coneXOffsetDoubleSpinBox->setMaximum(1e+08);
        coneXOffsetDoubleSpinBox->setValue(0);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, coneXOffsetDoubleSpinBox);

        label_13 = new QLabel(snoutGroupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_13);

        coneYOffsetDoubleSpinBox = new QDoubleSpinBox(snoutGroupBox);
        coneYOffsetDoubleSpinBox->setObjectName(QString::fromUtf8("coneYOffsetDoubleSpinBox"));
        coneYOffsetDoubleSpinBox->setDecimals(6);
        coneYOffsetDoubleSpinBox->setMinimum(0);
        coneYOffsetDoubleSpinBox->setMaximum(1e+08);
        coneYOffsetDoubleSpinBox->setValue(0);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, coneYOffsetDoubleSpinBox);


        verticalLayout->addWidget(snoutGroupBox);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 0, 1, 1);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/primCone.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(coneTab, icon4, QString());
        torusTab = new QWidget();
        torusTab->setObjectName(QString::fromUtf8("torusTab"));
        gridLayout_5 = new QGridLayout(torusTab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_14 = new QLabel(torusTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_14);

        torusInsideRadiusDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusInsideRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("torusInsideRadiusDoubleSpinBox"));
        torusInsideRadiusDoubleSpinBox->setDecimals(6);
        torusInsideRadiusDoubleSpinBox->setMinimum(1e-06);
        torusInsideRadiusDoubleSpinBox->setMaximum(1e+08);
        torusInsideRadiusDoubleSpinBox->setValue(1);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, torusInsideRadiusDoubleSpinBox);

        label_15 = new QLabel(torusTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_15);

        torusOutsideRadiusDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusOutsideRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("torusOutsideRadiusDoubleSpinBox"));
        torusOutsideRadiusDoubleSpinBox->setDecimals(6);
        torusOutsideRadiusDoubleSpinBox->setMinimum(1e-06);
        torusOutsideRadiusDoubleSpinBox->setMaximum(1e+08);
        torusOutsideRadiusDoubleSpinBox->setValue(1.5);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, torusOutsideRadiusDoubleSpinBox);

        label_16 = new QLabel(torusTab);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_16);

        torusAngleDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusAngleDoubleSpinBox->setObjectName(QString::fromUtf8("torusAngleDoubleSpinBox"));
        torusAngleDoubleSpinBox->setDecimals(6);
        torusAngleDoubleSpinBox->setMinimum(1e-06);
        torusAngleDoubleSpinBox->setMaximum(360);
        torusAngleDoubleSpinBox->setValue(360);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, torusAngleDoubleSpinBox);


        verticalLayout_2->addLayout(formLayout_5);

        torusRectGroupBox = new QGroupBox(torusTab);
        torusRectGroupBox->setObjectName(QString::fromUtf8("torusRectGroupBox"));
        torusRectGroupBox->setCheckable(true);
        torusRectGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(torusRectGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_17 = new QLabel(torusRectGroupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_2->addWidget(label_17);

        torusRectSectionHeightDoubleSpinBox = new QDoubleSpinBox(torusRectGroupBox);
        torusRectSectionHeightDoubleSpinBox->setObjectName(QString::fromUtf8("torusRectSectionHeightDoubleSpinBox"));
        torusRectSectionHeightDoubleSpinBox->setDecimals(6);
        torusRectSectionHeightDoubleSpinBox->setMinimum(1e-06);
        torusRectSectionHeightDoubleSpinBox->setMaximum(1e+08);
        torusRectSectionHeightDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(torusRectSectionHeightDoubleSpinBox);


        verticalLayout_2->addWidget(torusRectGroupBox);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(267, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 1, 0, 1, 1);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/primTorus.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(torusTab, icon5, QString());
        dishTab = new QWidget();
        dishTab->setObjectName(QString::fromUtf8("dishTab"));
        gridLayout_13 = new QGridLayout(dishTab);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        label_18 = new QLabel(dishTab);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_18);

        dishRadiusDoubleSpinBox = new QDoubleSpinBox(dishTab);
        dishRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("dishRadiusDoubleSpinBox"));
        dishRadiusDoubleSpinBox->setDecimals(6);
        dishRadiusDoubleSpinBox->setMinimum(1e-06);
        dishRadiusDoubleSpinBox->setMaximum(1e+08);
        dishRadiusDoubleSpinBox->setValue(1);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, dishRadiusDoubleSpinBox);

        label_19 = new QLabel(dishTab);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_19);

        dishHeightDoubleSpinBox = new QDoubleSpinBox(dishTab);
        dishHeightDoubleSpinBox->setObjectName(QString::fromUtf8("dishHeightDoubleSpinBox"));
        dishHeightDoubleSpinBox->setDecimals(6);
        dishHeightDoubleSpinBox->setMinimum(1e-06);
        dishHeightDoubleSpinBox->setMaximum(1e+08);
        dishHeightDoubleSpinBox->setValue(0.5);

        formLayout_13->setWidget(1, QFormLayout::FieldRole, dishHeightDoubleSpinBox);


        verticalLayout_5->addLayout(formLayout_13);

        dishEllipsoidGroupBox = new QGroupBox(dishTab);
        dishEllipsoidGroupBox->setObjectName(QString::fromUtf8("dishEllipsoidGroupBox"));
        dishEllipsoidGroupBox->setCheckable(true);
        dishEllipsoidGroupBox->setChecked(false);
        horizontalLayout_5 = new QHBoxLayout(dishEllipsoidGroupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_39 = new QLabel(dishEllipsoidGroupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_5->addWidget(label_39);

        dishRadius2DoubleSpinBox = new QDoubleSpinBox(dishEllipsoidGroupBox);
        dishRadius2DoubleSpinBox->setObjectName(QString::fromUtf8("dishRadius2DoubleSpinBox"));
        dishRadius2DoubleSpinBox->setDecimals(6);
        dishRadius2DoubleSpinBox->setMinimum(1e-06);
        dishRadius2DoubleSpinBox->setMaximum(1e+08);
        dishRadius2DoubleSpinBox->setValue(1);

        horizontalLayout_5->addWidget(dishRadius2DoubleSpinBox);


        verticalLayout_5->addWidget(dishEllipsoidGroupBox);


        gridLayout_13->addLayout(verticalLayout_5, 0, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_13, 0, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_13, 1, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/primDish.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(dishTab, icon6, QString());

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_40 = new QLabel(PrimitiveFactoryDlg);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_6->addWidget(label_40);

        precisionSpinBox = new QSpinBox(PrimitiveFactoryDlg);
        precisionSpinBox->setObjectName(QString::fromUtf8("precisionSpinBox"));
        precisionSpinBox->setMinimum(4);
        precisionSpinBox->setMaximum(65536);
        precisionSpinBox->setSingleStep(4);
        precisionSpinBox->setValue(24);

        horizontalLayout_6->addWidget(precisionSpinBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        createPushButton = new QPushButton(PrimitiveFactoryDlg);
        createPushButton->setObjectName(QString::fromUtf8("createPushButton"));

        horizontalLayout_6->addWidget(createPushButton);

        closePushButton = new QPushButton(PrimitiveFactoryDlg);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        horizontalLayout_6->addWidget(closePushButton);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer_14 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_14);


        retranslateUi(PrimitiveFactoryDlg);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(PrimitiveFactoryDlg);
    } // setupUi

    void retranslateUi(QDialog *PrimitiveFactoryDlg)
    {
        PrimitiveFactoryDlg->setWindowTitle(QApplication::translate("PrimitiveFactoryDlg", "Primitive factory", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PrimitiveFactoryDlg", "dx", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PrimitiveFactoryDlg", "dy", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(planeTab), QApplication::translate("PrimitiveFactoryDlg", "Plane", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PrimitiveFactoryDlg", "dx", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PrimitiveFactoryDlg", "dy", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PrimitiveFactoryDlg", "dz", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(boxTab), QApplication::translate("PrimitiveFactoryDlg", "Box", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PrimitiveFactoryDlg", "radius", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(sphereTab), QApplication::translate("PrimitiveFactoryDlg", "Sphere", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PrimitiveFactoryDlg", "radius", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PrimitiveFactoryDlg", "height", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(cylTab), QApplication::translate("PrimitiveFactoryDlg", "Cylinder", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PrimitiveFactoryDlg", "top radius", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PrimitiveFactoryDlg", "bottom radius", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PrimitiveFactoryDlg", "height", 0, QApplication::UnicodeUTF8));
        snoutGroupBox->setTitle(QApplication::translate("PrimitiveFactoryDlg", "Snout mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("PrimitiveFactoryDlg", "displacement of axes along X-axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_12->setStatusTip(QApplication::translate("PrimitiveFactoryDlg", "displacement of axes along X-axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_12->setText(QApplication::translate("PrimitiveFactoryDlg", "x offset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("PrimitiveFactoryDlg", "displacement of axes along Y-axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_13->setStatusTip(QApplication::translate("PrimitiveFactoryDlg", "displacement of axes along Y-axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_13->setText(QApplication::translate("PrimitiveFactoryDlg", "y offset", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(coneTab), QApplication::translate("PrimitiveFactoryDlg", "Cone", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("PrimitiveFactoryDlg", "inside radius", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("PrimitiveFactoryDlg", "outside radius", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("PrimitiveFactoryDlg", "angle (degrees)", 0, QApplication::UnicodeUTF8));
        torusRectGroupBox->setTitle(QApplication::translate("PrimitiveFactoryDlg", "Rectangular section", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("PrimitiveFactoryDlg", "inside radius", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(torusTab), QApplication::translate("PrimitiveFactoryDlg", "Torus", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("PrimitiveFactoryDlg", "radius", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("PrimitiveFactoryDlg", "height", 0, QApplication::UnicodeUTF8));
        dishEllipsoidGroupBox->setTitle(QApplication::translate("PrimitiveFactoryDlg", "Ellipsoid mode", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("PrimitiveFactoryDlg", "radius 2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(dishTab), QApplication::translate("PrimitiveFactoryDlg", "Dish", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("PrimitiveFactoryDlg", "Initial precision", 0, QApplication::UnicodeUTF8));
        createPushButton->setText(QApplication::translate("PrimitiveFactoryDlg", "Create", 0, QApplication::UnicodeUTF8));
        closePushButton->setText(QApplication::translate("PrimitiveFactoryDlg", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrimitiveFactoryDlg: public Ui_PrimitiveFactoryDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMITIVEFACTORYDLG_H
