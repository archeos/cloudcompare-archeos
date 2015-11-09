/********************************************************************************
** Form generated from reading UI file 'scalarFieldFromColorDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCALARFIELDFROMCOLORDLG_H
#define UI_SCALARFIELDFROMCOLORDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_scalarFieldFromColorDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxR;
    QCheckBox *checkBoxG;
    QCheckBox *checkBoxB;
    QCheckBox *checkBoxComposite;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *scalarFieldFromColorDlg)
    {
        if (scalarFieldFromColorDlg->objectName().isEmpty())
            scalarFieldFromColorDlg->setObjectName(QString::fromUtf8("scalarFieldFromColorDlg"));
        scalarFieldFromColorDlg->resize(174, 150);
        verticalLayout_2 = new QVBoxLayout(scalarFieldFromColorDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxR = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxR->setObjectName(QString::fromUtf8("checkBoxR"));
        checkBoxR->setChecked(true);

        verticalLayout->addWidget(checkBoxR);

        checkBoxG = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxG->setObjectName(QString::fromUtf8("checkBoxG"));
        checkBoxG->setChecked(true);

        verticalLayout->addWidget(checkBoxG);

        checkBoxB = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxB->setObjectName(QString::fromUtf8("checkBoxB"));
        checkBoxB->setChecked(true);

        verticalLayout->addWidget(checkBoxB);

        checkBoxComposite = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxComposite->setObjectName(QString::fromUtf8("checkBoxComposite"));
        checkBoxComposite->setChecked(true);

        verticalLayout->addWidget(checkBoxComposite);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(scalarFieldFromColorDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(scalarFieldFromColorDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), scalarFieldFromColorDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), scalarFieldFromColorDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(scalarFieldFromColorDlg);
    } // setupUi

    void retranslateUi(QDialog *scalarFieldFromColorDlg)
    {
        scalarFieldFromColorDlg->setWindowTitle(QApplication::translate("scalarFieldFromColorDlg", "SF from RGB", 0, QApplication::UnicodeUTF8));
        checkBoxR->setText(QApplication::translate("scalarFieldFromColorDlg", "R Channel", 0, QApplication::UnicodeUTF8));
        checkBoxG->setText(QApplication::translate("scalarFieldFromColorDlg", "G Channel", 0, QApplication::UnicodeUTF8));
        checkBoxB->setText(QApplication::translate("scalarFieldFromColorDlg", "B Channel", 0, QApplication::UnicodeUTF8));
        checkBoxComposite->setText(QApplication::translate("scalarFieldFromColorDlg", "Composite = (R+G+B)/3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class scalarFieldFromColorDlg: public Ui_scalarFieldFromColorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCALARFIELDFROMCOLORDLG_H
