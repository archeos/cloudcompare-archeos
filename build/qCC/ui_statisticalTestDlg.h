/********************************************************************************
** Form generated from reading UI file 'statisticalTestDlg.ui'
**
** Created: Sun Mar 10 15:48:34 2013
**      by: Qt User Interface Compiler version 4.8.2
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
    QHBoxLayout *horizontalLayout;
    QLabel *param1Label;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *param1SpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *param2Label;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *param2SpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *param3Label;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *param3SpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QDoubleSpinBox *probaSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *nLabel;
    QSpinBox *neighborsSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StatisticalTestDialog)
    {
        if (StatisticalTestDialog->objectName().isEmpty())
            StatisticalTestDialog->setObjectName(QString::fromUtf8("StatisticalTestDialog"));
        StatisticalTestDialog->resize(230, 210);
        StatisticalTestDialog->setMinimumSize(QSize(230, 210));
        StatisticalTestDialog->setMaximumSize(QSize(230, 210));
        verticalLayout = new QVBoxLayout(StatisticalTestDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        param1Label = new QLabel(StatisticalTestDialog);
        param1Label->setObjectName(QString::fromUtf8("param1Label"));

        horizontalLayout->addWidget(param1Label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        param1SpinBox = new QDoubleSpinBox(StatisticalTestDialog);
        param1SpinBox->setObjectName(QString::fromUtf8("param1SpinBox"));
        param1SpinBox->setMaximumSize(QSize(120, 16777215));
        param1SpinBox->setDecimals(6);
        param1SpinBox->setMinimum(-1e+32);
        param1SpinBox->setMaximum(1e+32);
        param1SpinBox->setValue(40);

        horizontalLayout->addWidget(param1SpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        param2Label = new QLabel(StatisticalTestDialog);
        param2Label->setObjectName(QString::fromUtf8("param2Label"));

        horizontalLayout_2->addWidget(param2Label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        param2SpinBox = new QDoubleSpinBox(StatisticalTestDialog);
        param2SpinBox->setObjectName(QString::fromUtf8("param2SpinBox"));
        param2SpinBox->setMaximumSize(QSize(120, 16777215));
        param2SpinBox->setDecimals(6);
        param2SpinBox->setMinimum(-1e+32);
        param2SpinBox->setMaximum(1e+32);
        param2SpinBox->setValue(1.5);

        horizontalLayout_2->addWidget(param2SpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        param3Label = new QLabel(StatisticalTestDialog);
        param3Label->setObjectName(QString::fromUtf8("param3Label"));

        horizontalLayout_3->addWidget(param3Label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        param3SpinBox = new QDoubleSpinBox(StatisticalTestDialog);
        param3SpinBox->setObjectName(QString::fromUtf8("param3SpinBox"));
        param3SpinBox->setMaximumSize(QSize(120, 16777215));
        param3SpinBox->setDecimals(6);
        param3SpinBox->setMinimum(-1e+09);
        param3SpinBox->setMaximum(1e+09);
        param3SpinBox->setSingleStep(1);
        param3SpinBox->setValue(0);

        horizontalLayout_3->addWidget(param3SpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(StatisticalTestDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

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
