/********************************************************************************
** Form generated from reading UI file 'roleChoiceDlg.ui'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLECHOICEDLG_H
#define UI_ROLECHOICEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RoleChoiceDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *firstColorButton;
    QLabel *firstlabel;
    QLineEdit *firstLineEdit;
    QHBoxLayout *hboxLayout1;
    QToolButton *secondColorButton;
    QLabel *secondlabel;
    QLineEdit *secondLineEdit;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem;
    QPushButton *swapButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RoleChoiceDialog)
    {
        if (RoleChoiceDialog->objectName().isEmpty())
            RoleChoiceDialog->setObjectName(QString::fromUtf8("RoleChoiceDialog"));
        RoleChoiceDialog->resize(350, 102);
        RoleChoiceDialog->setMinimumSize(QSize(0, 102));
        RoleChoiceDialog->setMaximumSize(QSize(16777215, 102));
        vboxLayout = new QVBoxLayout(RoleChoiceDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        firstColorButton = new QToolButton(RoleChoiceDialog);
        firstColorButton->setObjectName(QString::fromUtf8("firstColorButton"));
        firstColorButton->setEnabled(false);

        hboxLayout->addWidget(firstColorButton);

        firstlabel = new QLabel(RoleChoiceDialog);
        firstlabel->setObjectName(QString::fromUtf8("firstlabel"));

        hboxLayout->addWidget(firstlabel);

        firstLineEdit = new QLineEdit(RoleChoiceDialog);
        firstLineEdit->setObjectName(QString::fromUtf8("firstLineEdit"));
        firstLineEdit->setReadOnly(true);

        hboxLayout->addWidget(firstLineEdit);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        secondColorButton = new QToolButton(RoleChoiceDialog);
        secondColorButton->setObjectName(QString::fromUtf8("secondColorButton"));
        secondColorButton->setEnabled(false);

        hboxLayout1->addWidget(secondColorButton);

        secondlabel = new QLabel(RoleChoiceDialog);
        secondlabel->setObjectName(QString::fromUtf8("secondlabel"));

        hboxLayout1->addWidget(secondlabel);

        secondLineEdit = new QLineEdit(RoleChoiceDialog);
        secondLineEdit->setObjectName(QString::fromUtf8("secondLineEdit"));
        secondLineEdit->setReadOnly(true);

        hboxLayout1->addWidget(secondLineEdit);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        swapButton = new QPushButton(RoleChoiceDialog);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));

        hboxLayout2->addWidget(swapButton);

        buttonBox = new QDialogButtonBox(RoleChoiceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        hboxLayout2->addWidget(buttonBox);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(RoleChoiceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RoleChoiceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RoleChoiceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RoleChoiceDialog);
    } // setupUi

    void retranslateUi(QDialog *RoleChoiceDialog)
    {
        RoleChoiceDialog->setWindowTitle(QApplication::translate("RoleChoiceDialog", "Choose role", 0, QApplication::UnicodeUTF8));
        firstColorButton->setText(QString());
        firstlabel->setText(QApplication::translate("RoleChoiceDialog", "Compared", 0, QApplication::UnicodeUTF8));
        secondColorButton->setText(QString());
        secondlabel->setText(QApplication::translate("RoleChoiceDialog", "Reference", 0, QApplication::UnicodeUTF8));
        swapButton->setText(QApplication::translate("RoleChoiceDialog", "Swap", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RoleChoiceDialog: public Ui_RoleChoiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLECHOICEDLG_H
