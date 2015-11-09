/********************************************************************************
** Form generated from reading UI file 'pickEntityDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKENTITYDLG_H
#define UI_PICKENTITYDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PickEntityDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PickEntityDlg)
    {
        if (PickEntityDlg->objectName().isEmpty())
            PickEntityDlg->setObjectName(QString::fromUtf8("PickEntityDlg"));
        PickEntityDlg->resize(400, 300);
        verticalLayout = new QVBoxLayout(PickEntityDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(PickEntityDlg);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(PickEntityDlg);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PickEntityDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PickEntityDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), PickEntityDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PickEntityDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(PickEntityDlg);
    } // setupUi

    void retranslateUi(QDialog *PickEntityDlg)
    {
        PickEntityDlg->setWindowTitle(QApplication::translate("PickEntityDlg", "Select an entity", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PickEntityDlg", "Please select an entity:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PickEntityDlg: public Ui_PickEntityDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKENTITYDLG_H
