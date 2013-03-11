/********************************************************************************
** Form generated from reading UI file 'askThreeDoubleValuesDlg.ui'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKTHREEDOUBLEVALUESDLG_H
#define UI_ASKTHREEDOUBLEVALUESDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskThreeDoubleValuesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label1;
    QDoubleSpinBox *doubleSpinBox1;
    QSpacerItem *spacerItem;
    QLabel *label2;
    QDoubleSpinBox *doubleSpinBox2;
    QSpacerItem *spacerItem1;
    QLabel *label3;
    QDoubleSpinBox *doubleSpinBox3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskThreeDoubleValuesDialog)
    {
        if (AskThreeDoubleValuesDialog->objectName().isEmpty())
            AskThreeDoubleValuesDialog->setObjectName(QString::fromUtf8("AskThreeDoubleValuesDialog"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskThreeDoubleValuesDialog->sizePolicy().hasHeightForWidth());
        AskThreeDoubleValuesDialog->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(AskThreeDoubleValuesDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label1 = new QLabel(AskThreeDoubleValuesDialog);
        label1->setObjectName(QString::fromUtf8("label1"));

        hboxLayout->addWidget(label1);

        doubleSpinBox1 = new QDoubleSpinBox(AskThreeDoubleValuesDialog);
        doubleSpinBox1->setObjectName(QString::fromUtf8("doubleSpinBox1"));

        hboxLayout->addWidget(doubleSpinBox1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label2 = new QLabel(AskThreeDoubleValuesDialog);
        label2->setObjectName(QString::fromUtf8("label2"));

        hboxLayout->addWidget(label2);

        doubleSpinBox2 = new QDoubleSpinBox(AskThreeDoubleValuesDialog);
        doubleSpinBox2->setObjectName(QString::fromUtf8("doubleSpinBox2"));

        hboxLayout->addWidget(doubleSpinBox2);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        label3 = new QLabel(AskThreeDoubleValuesDialog);
        label3->setObjectName(QString::fromUtf8("label3"));

        hboxLayout->addWidget(label3);

        doubleSpinBox3 = new QDoubleSpinBox(AskThreeDoubleValuesDialog);
        doubleSpinBox3->setObjectName(QString::fromUtf8("doubleSpinBox3"));

        hboxLayout->addWidget(doubleSpinBox3);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(AskThreeDoubleValuesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AskThreeDoubleValuesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskThreeDoubleValuesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskThreeDoubleValuesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskThreeDoubleValuesDialog);
    } // setupUi

    void retranslateUi(QDialog *AskThreeDoubleValuesDialog)
    {
        AskThreeDoubleValuesDialog->setWindowTitle(QApplication::translate("AskThreeDoubleValuesDialog", "Set Three Values", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("AskThreeDoubleValuesDialog", "Value 1", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("AskThreeDoubleValuesDialog", "Value 2", 0, QApplication::UnicodeUTF8));
        label3->setText(QApplication::translate("AskThreeDoubleValuesDialog", "Value 3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AskThreeDoubleValuesDialog: public Ui_AskThreeDoubleValuesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKTHREEDOUBLEVALUESDLG_H
