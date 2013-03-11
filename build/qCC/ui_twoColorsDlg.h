/********************************************************************************
** Form generated from reading UI file 'twoColorsDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOCOLORSDLG_H
#define UI_TWOCOLORSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TwoColorChoiceDialog
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *defaultRampCheckBox;
    QGroupBox *customRampGroupBox;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QToolButton *firstColorButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QLabel *label_2;
    QToolButton *secondColorButton;
    QHBoxLayout *hboxLayout3;
    QLabel *label_3;
    QComboBox *directionComboBox;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TwoColorChoiceDialog)
    {
        if (TwoColorChoiceDialog->objectName().isEmpty())
            TwoColorChoiceDialog->setObjectName(QString::fromUtf8("TwoColorChoiceDialog"));
        TwoColorChoiceDialog->resize(260, 163);
        TwoColorChoiceDialog->setMinimumSize(QSize(260, 163));
        TwoColorChoiceDialog->setMaximumSize(QSize(260, 163));
        vboxLayout = new QVBoxLayout(TwoColorChoiceDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        defaultRampCheckBox = new QCheckBox(TwoColorChoiceDialog);
        defaultRampCheckBox->setObjectName(QString::fromUtf8("defaultRampCheckBox"));
        defaultRampCheckBox->setChecked(true);

        vboxLayout->addWidget(defaultRampCheckBox);

        customRampGroupBox = new QGroupBox(TwoColorChoiceDialog);
        customRampGroupBox->setObjectName(QString::fromUtf8("customRampGroupBox"));
        customRampGroupBox->setEnabled(false);
        hboxLayout = new QHBoxLayout(customRampGroupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(customRampGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        firstColorButton = new QToolButton(customRampGroupBox);
        firstColorButton->setObjectName(QString::fromUtf8("firstColorButton"));

        hboxLayout1->addWidget(firstColorButton);


        hboxLayout->addLayout(hboxLayout1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_2 = new QLabel(customRampGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout2->addWidget(label_2);

        secondColorButton = new QToolButton(customRampGroupBox);
        secondColorButton->setObjectName(QString::fromUtf8("secondColorButton"));

        hboxLayout2->addWidget(secondColorButton);


        hboxLayout->addLayout(hboxLayout2);


        vboxLayout->addWidget(customRampGroupBox);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_3 = new QLabel(TwoColorChoiceDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout3->addWidget(label_3);

        directionComboBox = new QComboBox(TwoColorChoiceDialog);
        directionComboBox->setObjectName(QString::fromUtf8("directionComboBox"));

        hboxLayout3->addWidget(directionComboBox);


        vboxLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(TwoColorChoiceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        hboxLayout4->addWidget(buttonBox);


        vboxLayout->addLayout(hboxLayout4);


        retranslateUi(TwoColorChoiceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TwoColorChoiceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TwoColorChoiceDialog, SLOT(reject()));
        QObject::connect(defaultRampCheckBox, SIGNAL(toggled(bool)), customRampGroupBox, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(TwoColorChoiceDialog);
    } // setupUi

    void retranslateUi(QDialog *TwoColorChoiceDialog)
    {
        TwoColorChoiceDialog->setWindowTitle(QApplication::translate("TwoColorChoiceDialog", "Gradient color", 0, QApplication::UnicodeUTF8));
        defaultRampCheckBox->setText(QApplication::translate("TwoColorChoiceDialog", "Use default ramp", 0, QApplication::UnicodeUTF8));
        customRampGroupBox->setTitle(QApplication::translate("TwoColorChoiceDialog", "Custom ramp", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TwoColorChoiceDialog", "First color", 0, QApplication::UnicodeUTF8));
        firstColorButton->setText(QApplication::translate("TwoColorChoiceDialog", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TwoColorChoiceDialog", "Second color", 0, QApplication::UnicodeUTF8));
        secondColorButton->setText(QApplication::translate("TwoColorChoiceDialog", "...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TwoColorChoiceDialog", "direction", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TwoColorChoiceDialog: public Ui_TwoColorChoiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOCOLORSDLG_H
