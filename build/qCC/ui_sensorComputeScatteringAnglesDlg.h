/********************************************************************************
** Form generated from reading UI file 'sensorComputeScatteringAnglesDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCOMPUTESCATTERINGANGLESDLG_H
#define UI_SENSORCOMPUTESCATTERINGANGLESDLG_H

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

class Ui_sensorComputeScatteringAnglesDlg
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *anglesToDegCheckbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *sensorComputeScatteringAnglesDlg)
    {
        if (sensorComputeScatteringAnglesDlg->objectName().isEmpty())
            sensorComputeScatteringAnglesDlg->setObjectName(QString::fromUtf8("sensorComputeScatteringAnglesDlg"));
        sensorComputeScatteringAnglesDlg->resize(178, 67);
        verticalLayout = new QVBoxLayout(sensorComputeScatteringAnglesDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        anglesToDegCheckbox = new QCheckBox(sensorComputeScatteringAnglesDlg);
        anglesToDegCheckbox->setObjectName(QString::fromUtf8("anglesToDegCheckbox"));

        verticalLayout->addWidget(anglesToDegCheckbox);

        buttonBox = new QDialogButtonBox(sensorComputeScatteringAnglesDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sensorComputeScatteringAnglesDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), sensorComputeScatteringAnglesDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sensorComputeScatteringAnglesDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(sensorComputeScatteringAnglesDlg);
    } // setupUi

    void retranslateUi(QDialog *sensorComputeScatteringAnglesDlg)
    {
        sensorComputeScatteringAnglesDlg->setWindowTitle(QApplication::translate("sensorComputeScatteringAnglesDlg", "Compute scattering angles", 0, QApplication::UnicodeUTF8));
        anglesToDegCheckbox->setText(QApplication::translate("sensorComputeScatteringAnglesDlg", "Convert angles to degree", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sensorComputeScatteringAnglesDlg: public Ui_sensorComputeScatteringAnglesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCOMPUTESCATTERINGANGLESDLG_H
