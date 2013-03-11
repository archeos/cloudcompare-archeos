/********************************************************************************
** Form generated from reading UI file 'hprDlg.ui'
**
** Created: Sun Mar 10 15:50:11 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRDLG_H
#define UI_HPRDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HPRDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QSpinBox *octreeLevelSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HPRDialog)
    {
        if (HPRDialog->objectName().isEmpty())
            HPRDialog->setObjectName(QString::fromUtf8("HPRDialog"));
        HPRDialog->resize(178, 72);
        vboxLayout = new QVBoxLayout(HPRDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(HPRDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        octreeLevelSpinBox = new QSpinBox(HPRDialog);
        octreeLevelSpinBox->setObjectName(QString::fromUtf8("octreeLevelSpinBox"));
        octreeLevelSpinBox->setValue(7);

        hboxLayout->addWidget(octreeLevelSpinBox);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(HPRDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(HPRDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HPRDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HPRDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HPRDialog);
    } // setupUi

    void retranslateUi(QDialog *HPRDialog)
    {
        HPRDialog->setWindowTitle(QApplication::translate("HPRDialog", "HPR", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HPRDialog", "Level", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        octreeLevelSpinBox->setToolTip(QApplication::translate("HPRDialog", "Octree Level (for point cloud shape approx.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class HPRDialog: public Ui_HPRDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRDLG_H
