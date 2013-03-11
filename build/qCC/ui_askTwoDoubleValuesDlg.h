/********************************************************************************
** Form generated from reading UI file 'askTwoDoubleValuesDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKTWODOUBLEVALUESDLG_H
#define UI_ASKTWODOUBLEVALUESDLG_H

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

class Ui_AskTwoDoubleValuesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label1;
    QDoubleSpinBox *doubleSpinBox1;
    QSpacerItem *spacerItem;
    QLabel *label2;
    QDoubleSpinBox *doubleSpinBox2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskTwoDoubleValuesDialog)
    {
        if (AskTwoDoubleValuesDialog->objectName().isEmpty())
            AskTwoDoubleValuesDialog->setObjectName(QString::fromUtf8("AskTwoDoubleValuesDialog"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskTwoDoubleValuesDialog->sizePolicy().hasHeightForWidth());
        AskTwoDoubleValuesDialog->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(AskTwoDoubleValuesDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label1 = new QLabel(AskTwoDoubleValuesDialog);
        label1->setObjectName(QString::fromUtf8("label1"));

        hboxLayout->addWidget(label1);

        doubleSpinBox1 = new QDoubleSpinBox(AskTwoDoubleValuesDialog);
        doubleSpinBox1->setObjectName(QString::fromUtf8("doubleSpinBox1"));

        hboxLayout->addWidget(doubleSpinBox1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label2 = new QLabel(AskTwoDoubleValuesDialog);
        label2->setObjectName(QString::fromUtf8("label2"));

        hboxLayout->addWidget(label2);

        doubleSpinBox2 = new QDoubleSpinBox(AskTwoDoubleValuesDialog);
        doubleSpinBox2->setObjectName(QString::fromUtf8("doubleSpinBox2"));

        hboxLayout->addWidget(doubleSpinBox2);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(AskTwoDoubleValuesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AskTwoDoubleValuesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskTwoDoubleValuesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskTwoDoubleValuesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskTwoDoubleValuesDialog);
    } // setupUi

    void retranslateUi(QDialog *AskTwoDoubleValuesDialog)
    {
        AskTwoDoubleValuesDialog->setWindowTitle(QApplication::translate("AskTwoDoubleValuesDialog", "Set Two Values", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("AskTwoDoubleValuesDialog", "Value 1", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("AskTwoDoubleValuesDialog", "Value 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AskTwoDoubleValuesDialog: public Ui_AskTwoDoubleValuesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKTWODOUBLEVALUESDLG_H
