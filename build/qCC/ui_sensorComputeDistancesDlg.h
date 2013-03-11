/********************************************************************************
** Form generated from reading UI file 'sensorComputeDistancesDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCOMPUTEDISTANCESDLG_H
#define UI_SENSORCOMPUTEDISTANCESDLG_H

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

class Ui_sensorComputeDistancesDlg
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkSquaredDistance;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *sensorComputeDistancesDlg)
    {
        if (sensorComputeDistancesDlg->objectName().isEmpty())
            sensorComputeDistancesDlg->setObjectName(QString::fromUtf8("sensorComputeDistancesDlg"));
        sensorComputeDistancesDlg->resize(178, 67);
        verticalLayout = new QVBoxLayout(sensorComputeDistancesDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkSquaredDistance = new QCheckBox(sensorComputeDistancesDlg);
        checkSquaredDistance->setObjectName(QString::fromUtf8("checkSquaredDistance"));

        verticalLayout->addWidget(checkSquaredDistance);

        buttonBox = new QDialogButtonBox(sensorComputeDistancesDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sensorComputeDistancesDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), sensorComputeDistancesDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sensorComputeDistancesDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(sensorComputeDistancesDlg);
    } // setupUi

    void retranslateUi(QDialog *sensorComputeDistancesDlg)
    {
        sensorComputeDistancesDlg->setWindowTitle(QApplication::translate("sensorComputeDistancesDlg", "Sensor range computation", 0, QApplication::UnicodeUTF8));
        checkSquaredDistance->setText(QApplication::translate("sensorComputeDistancesDlg", "Squared distances", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sensorComputeDistancesDlg: public Ui_sensorComputeDistancesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCOMPUTEDISTANCESDLG_H
