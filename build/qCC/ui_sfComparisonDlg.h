/********************************************************************************
** Form generated from reading UI file 'sfComparisonDlg.ui'
**
** Created: Sun Mar 10 15:48:34 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SFCOMPARISONDLG_H
#define UI_SFCOMPARISONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SFComparisonDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *comboLabel;
    QComboBox *sf1ComboBox;
    QHBoxLayout *_3;
    QLabel *comboLabel_3;
    QComboBox *operationComboBox;
    QHBoxLayout *_2;
    QLabel *comboLabel_2;
    QComboBox *sf2ComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SFComparisonDlg)
    {
        if (SFComparisonDlg->objectName().isEmpty())
            SFComparisonDlg->setObjectName(QString::fromUtf8("SFComparisonDlg"));
        SFComparisonDlg->resize(200, 128);
        SFComparisonDlg->setMinimumSize(QSize(0, 128));
        SFComparisonDlg->setMaximumSize(QSize(16777215, 128));
        verticalLayout = new QVBoxLayout(SFComparisonDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        comboLabel = new QLabel(SFComparisonDlg);
        comboLabel->setObjectName(QString::fromUtf8("comboLabel"));
        comboLabel->setMaximumSize(QSize(80, 16777215));

        hboxLayout->addWidget(comboLabel);

        sf1ComboBox = new QComboBox(SFComparisonDlg);
        sf1ComboBox->setObjectName(QString::fromUtf8("sf1ComboBox"));

        hboxLayout->addWidget(sf1ComboBox);


        verticalLayout->addLayout(hboxLayout);

        _3 = new QHBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        comboLabel_3 = new QLabel(SFComparisonDlg);
        comboLabel_3->setObjectName(QString::fromUtf8("comboLabel_3"));
        comboLabel_3->setMaximumSize(QSize(80, 16777215));

        _3->addWidget(comboLabel_3);

        operationComboBox = new QComboBox(SFComparisonDlg);
        operationComboBox->setObjectName(QString::fromUtf8("operationComboBox"));

        _3->addWidget(operationComboBox);


        verticalLayout->addLayout(_3);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        comboLabel_2 = new QLabel(SFComparisonDlg);
        comboLabel_2->setObjectName(QString::fromUtf8("comboLabel_2"));
        comboLabel_2->setMaximumSize(QSize(80, 16777215));

        _2->addWidget(comboLabel_2);

        sf2ComboBox = new QComboBox(SFComparisonDlg);
        sf2ComboBox->setObjectName(QString::fromUtf8("sf2ComboBox"));

        _2->addWidget(sf2ComboBox);


        verticalLayout->addLayout(_2);

        buttonBox = new QDialogButtonBox(SFComparisonDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SFComparisonDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SFComparisonDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SFComparisonDlg, SLOT(reject()));

        operationComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SFComparisonDlg);
    } // setupUi

    void retranslateUi(QDialog *SFComparisonDlg)
    {
        SFComparisonDlg->setWindowTitle(QApplication::translate("SFComparisonDlg", "Scalar fields arithmetics", 0, QApplication::UnicodeUTF8));
        comboLabel->setText(QApplication::translate("SFComparisonDlg", "SF 1", 0, QApplication::UnicodeUTF8));
        comboLabel_3->setText(QApplication::translate("SFComparisonDlg", "operation", 0, QApplication::UnicodeUTF8));
        operationComboBox->clear();
        operationComboBox->insertItems(0, QStringList()
         << QApplication::translate("SFComparisonDlg", "plus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFComparisonDlg", "minus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFComparisonDlg", "multiply", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFComparisonDlg", "divide", 0, QApplication::UnicodeUTF8)
        );
        comboLabel_2->setText(QApplication::translate("SFComparisonDlg", "SF 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SFComparisonDlg: public Ui_SFComparisonDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFCOMPARISONDLG_H
