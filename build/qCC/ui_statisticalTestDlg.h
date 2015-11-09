/********************************************************************************
** Form generated from reading UI file 'statisticalTestDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICALTESTDLG_H
#define UI_STATISTICALTESTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StatisticalTestDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *param1Label;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *param1SpinBox;
    QLabel *param2Label;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *param2SpinBox;
    QDoubleSpinBox *param3SpinBox;
    QLabel *param3Label;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *probaSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *nLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *neighborsSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StatisticalTestDialog)
    {
        if (StatisticalTestDialog->objectName().isEmpty())
            StatisticalTestDialog->setObjectName(QString::fromUtf8("StatisticalTestDialog"));
        StatisticalTestDialog->resize(206, 217);
        verticalLayout = new QVBoxLayout(StatisticalTestDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(StatisticalTestDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        param1Label = new QLabel(groupBox);
        param1Label->setObjectName(QString::fromUtf8("param1Label"));

        gridLayout->addWidget(param1Label, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        param1SpinBox = new QDoubleSpinBox(groupBox);
        param1SpinBox->setObjectName(QString::fromUtf8("param1SpinBox"));
        param1SpinBox->setMaximumSize(QSize(120, 16777215));
        param1SpinBox->setDecimals(6);
        param1SpinBox->setMinimum(-1e+32);
        param1SpinBox->setMaximum(1e+32);
        param1SpinBox->setValue(0);

        gridLayout->addWidget(param1SpinBox, 0, 2, 1, 1);

        param2Label = new QLabel(groupBox);
        param2Label->setObjectName(QString::fromUtf8("param2Label"));

        gridLayout->addWidget(param2Label, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        param2SpinBox = new QDoubleSpinBox(groupBox);
        param2SpinBox->setObjectName(QString::fromUtf8("param2SpinBox"));
        param2SpinBox->setMaximumSize(QSize(120, 16777215));
        param2SpinBox->setDecimals(6);
        param2SpinBox->setMinimum(-1e+32);
        param2SpinBox->setMaximum(1e+32);
        param2SpinBox->setValue(40);

        gridLayout->addWidget(param2SpinBox, 1, 2, 1, 1);

        param3SpinBox = new QDoubleSpinBox(groupBox);
        param3SpinBox->setObjectName(QString::fromUtf8("param3SpinBox"));
        param3SpinBox->setMaximumSize(QSize(120, 16777215));
        param3SpinBox->setDecimals(6);
        param3SpinBox->setMinimum(-1e+09);
        param3SpinBox->setMaximum(1e+09);
        param3SpinBox->setSingleStep(1);
        param3SpinBox->setValue(0);

        gridLayout->addWidget(param3SpinBox, 2, 2, 1, 1);

        param3Label = new QLabel(groupBox);
        param3Label->setObjectName(QString::fromUtf8("param3Label"));

        gridLayout->addWidget(param3Label, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(StatisticalTestDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        probaSpinBox = new QDoubleSpinBox(StatisticalTestDialog);
        probaSpinBox->setObjectName(QString::fromUtf8("probaSpinBox"));
        probaSpinBox->setDecimals(6);
        probaSpinBox->setMinimum(5e-06);
        probaSpinBox->setMaximum(5);
        probaSpinBox->setSingleStep(0.0005);
        probaSpinBox->setValue(0.0005);

        horizontalLayout_4->addWidget(probaSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        nLabel = new QLabel(StatisticalTestDialog);
        nLabel->setObjectName(QString::fromUtf8("nLabel"));

        horizontalLayout_5->addWidget(nLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        neighborsSpinBox = new QSpinBox(StatisticalTestDialog);
        neighborsSpinBox->setObjectName(QString::fromUtf8("neighborsSpinBox"));
        neighborsSpinBox->setMinimum(16);
        neighborsSpinBox->setMaximum(128);
        neighborsSpinBox->setSingleStep(1);

        horizontalLayout_5->addWidget(neighborsSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        buttonBox = new QDialogButtonBox(StatisticalTestDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StatisticalTestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StatisticalTestDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StatisticalTestDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StatisticalTestDialog);
    } // setupUi

    void retranslateUi(QDialog *StatisticalTestDialog)
    {
        StatisticalTestDialog->setWindowTitle(QApplication::translate("StatisticalTestDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("StatisticalTestDialog", "Noise model", 0, QApplication::UnicodeUTF8));
        param1Label->setText(QApplication::translate("StatisticalTestDialog", "param1", 0, QApplication::UnicodeUTF8));
        param2Label->setText(QApplication::translate("StatisticalTestDialog", "param2", 0, QApplication::UnicodeUTF8));
        param3Label->setText(QApplication::translate("StatisticalTestDialog", "param3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        label->setStatusTip(QApplication::translate("StatisticalTestDialog", "false rejection probability", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label->setText(QApplication::translate("StatisticalTestDialog", "p(Chi2)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        nLabel->setStatusTip(QApplication::translate("StatisticalTestDialog", "neighbors used to compute observed local dist.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        nLabel->setText(QApplication::translate("StatisticalTestDialog", "Neighbors", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StatisticalTestDialog: public Ui_StatisticalTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICALTESTDLG_H
