/********************************************************************************
** Form generated from reading UI file 'unrollDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNROLLDLG_H
#define UI_UNROLLDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UnrollDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QComboBox *comboBoxUnrollShapeType;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QComboBox *comboBoxAxisDimension;
    QLabel *labelAngle;
    QDoubleSpinBox *doubleSpinBoxAngle;
    QLabel *radiusLabel;
    QDoubleSpinBox *doubleSpinBoxRadius;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBoxAxisPosition;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *label1;
    QDoubleSpinBox *doubleSpinBoxAxisX;
    QSpacerItem *spacerItem2;
    QLabel *label2;
    QDoubleSpinBox *doubleSpinBoxAxisY;
    QSpacerItem *spacerItem3;
    QLabel *label3;
    QDoubleSpinBox *doubleSpinBoxAxisZ;
    QHBoxLayout *hboxLayout3;
    QCheckBox *checkBoxAuto;
    QSpacerItem *spacerItem4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UnrollDialog)
    {
        if (UnrollDialog->objectName().isEmpty())
            UnrollDialog->setObjectName(QString::fromUtf8("UnrollDialog"));
        UnrollDialog->resize(507, 186);
        vboxLayout = new QVBoxLayout(UnrollDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_3 = new QLabel(UnrollDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);

        comboBoxUnrollShapeType = new QComboBox(UnrollDialog);
        comboBoxUnrollShapeType->setObjectName(QString::fromUtf8("comboBoxUnrollShapeType"));

        hboxLayout->addWidget(comboBoxUnrollShapeType);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(UnrollDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout1->addWidget(label);

        comboBoxAxisDimension = new QComboBox(UnrollDialog);
        comboBoxAxisDimension->setObjectName(QString::fromUtf8("comboBoxAxisDimension"));

        hboxLayout1->addWidget(comboBoxAxisDimension);

        labelAngle = new QLabel(UnrollDialog);
        labelAngle->setObjectName(QString::fromUtf8("labelAngle"));

        hboxLayout1->addWidget(labelAngle);

        doubleSpinBoxAngle = new QDoubleSpinBox(UnrollDialog);
        doubleSpinBoxAngle->setObjectName(QString::fromUtf8("doubleSpinBoxAngle"));
        doubleSpinBoxAngle->setDecimals(2);
        doubleSpinBoxAngle->setMaximum(180);
        doubleSpinBoxAngle->setValue(15);

        hboxLayout1->addWidget(doubleSpinBoxAngle);

        radiusLabel = new QLabel(UnrollDialog);
        radiusLabel->setObjectName(QString::fromUtf8("radiusLabel"));
        radiusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout1->addWidget(radiusLabel);

        doubleSpinBoxRadius = new QDoubleSpinBox(UnrollDialog);
        doubleSpinBoxRadius->setObjectName(QString::fromUtf8("doubleSpinBoxRadius"));
        doubleSpinBoxRadius->setDecimals(6);
        doubleSpinBoxRadius->setMaximum(1e+09);
        doubleSpinBoxRadius->setValue(100);

        hboxLayout1->addWidget(doubleSpinBoxRadius);

        spacerItem1 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout1);

        groupBoxAxisPosition = new QGroupBox(UnrollDialog);
        groupBoxAxisPosition->setObjectName(QString::fromUtf8("groupBoxAxisPosition"));
        vboxLayout1 = new QVBoxLayout(groupBoxAxisPosition);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label1 = new QLabel(groupBoxAxisPosition);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label1);

        doubleSpinBoxAxisX = new QDoubleSpinBox(groupBoxAxisPosition);
        doubleSpinBoxAxisX->setObjectName(QString::fromUtf8("doubleSpinBoxAxisX"));
        doubleSpinBoxAxisX->setEnabled(true);
        doubleSpinBoxAxisX->setDecimals(6);
        doubleSpinBoxAxisX->setMinimum(-1e+09);
        doubleSpinBoxAxisX->setMaximum(1e+09);

        hboxLayout2->addWidget(doubleSpinBoxAxisX);

        spacerItem2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        label2 = new QLabel(groupBoxAxisPosition);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label2);

        doubleSpinBoxAxisY = new QDoubleSpinBox(groupBoxAxisPosition);
        doubleSpinBoxAxisY->setObjectName(QString::fromUtf8("doubleSpinBoxAxisY"));
        doubleSpinBoxAxisY->setEnabled(true);
        doubleSpinBoxAxisY->setDecimals(6);
        doubleSpinBoxAxisY->setMinimum(-1e+09);
        doubleSpinBoxAxisY->setMaximum(1e+09);

        hboxLayout2->addWidget(doubleSpinBoxAxisY);

        spacerItem3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        label3 = new QLabel(groupBoxAxisPosition);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label3);

        doubleSpinBoxAxisZ = new QDoubleSpinBox(groupBoxAxisPosition);
        doubleSpinBoxAxisZ->setObjectName(QString::fromUtf8("doubleSpinBoxAxisZ"));
        doubleSpinBoxAxisZ->setEnabled(true);
        doubleSpinBoxAxisZ->setDecimals(6);
        doubleSpinBoxAxisZ->setMinimum(-1e+09);
        doubleSpinBoxAxisZ->setMaximum(1e+09);

        hboxLayout2->addWidget(doubleSpinBoxAxisZ);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        checkBoxAuto = new QCheckBox(groupBoxAxisPosition);
        checkBoxAuto->setObjectName(QString::fromUtf8("checkBoxAuto"));
        checkBoxAuto->setEnabled(true);
        checkBoxAuto->setChecked(false);

        hboxLayout3->addWidget(checkBoxAuto);

        spacerItem4 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);


        vboxLayout1->addLayout(hboxLayout3);


        vboxLayout->addWidget(groupBoxAxisPosition);

        buttonBox = new QDialogButtonBox(UnrollDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(UnrollDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UnrollDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UnrollDialog, SLOT(reject()));

        comboBoxAxisDimension->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(UnrollDialog);
    } // setupUi

    void retranslateUi(QDialog *UnrollDialog)
    {
        UnrollDialog->setWindowTitle(QApplication::translate("UnrollDialog", "Unroll", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UnrollDialog", "Type", 0, QApplication::UnicodeUTF8));
        comboBoxUnrollShapeType->clear();
        comboBoxUnrollShapeType->insertItems(0, QStringList()
         << QApplication::translate("UnrollDialog", "Cylinder", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UnrollDialog", "Cone", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("UnrollDialog", "Axis", 0, QApplication::UnicodeUTF8));
        comboBoxAxisDimension->clear();
        comboBoxAxisDimension->insertItems(0, QStringList()
         << QApplication::translate("UnrollDialog", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UnrollDialog", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UnrollDialog", "Z", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        labelAngle->setToolTip(QApplication::translate("UnrollDialog", "Cone angle (0-180\302\260)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelAngle->setText(QApplication::translate("UnrollDialog", "Half angle (degrees)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxAngle->setToolTip(QApplication::translate("UnrollDialog", "Cone angle (0-180\302\260)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinBoxAngle->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        radiusLabel->setToolTip(QApplication::translate("UnrollDialog", "Cylinder (or cone base) radius", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radiusLabel->setText(QApplication::translate("UnrollDialog", "Radius", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxRadius->setToolTip(QApplication::translate("UnrollDialog", "Cylinder (or cone base) radius", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBoxAxisPosition->setTitle(QApplication::translate("UnrollDialog", "Axis position", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("UnrollDialog", "X", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("UnrollDialog", "Y", 0, QApplication::UnicodeUTF8));
        label3->setText(QApplication::translate("UnrollDialog", "Z", 0, QApplication::UnicodeUTF8));
        checkBoxAuto->setText(QApplication::translate("UnrollDialog", "Auto (gravity center)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UnrollDialog: public Ui_UnrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNROLLDLG_H
