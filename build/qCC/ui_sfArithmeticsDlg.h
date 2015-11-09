/********************************************************************************
** Form generated from reading UI file 'sfArithmeticsDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SFARITHMETICSDLG_H
#define UI_SFARITHMETICSDLG_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SFArithmeticsDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *comboLabel;
    QComboBox *sf1ComboBox;
    QHBoxLayout *_3;
    QLabel *comboLabel_3;
    QComboBox *operationComboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *_2;
    QLabel *comboLabel_2;
    QComboBox *sf2ComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SFArithmeticsDlg)
    {
        if (SFArithmeticsDlg->objectName().isEmpty())
            SFArithmeticsDlg->setObjectName(QString::fromUtf8("SFArithmeticsDlg"));
        SFArithmeticsDlg->resize(250, 128);
        SFArithmeticsDlg->setMinimumSize(QSize(0, 128));
        SFArithmeticsDlg->setMaximumSize(QSize(16777215, 128));
        verticalLayout = new QVBoxLayout(SFArithmeticsDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        comboLabel = new QLabel(SFArithmeticsDlg);
        comboLabel->setObjectName(QString::fromUtf8("comboLabel"));
        comboLabel->setMaximumSize(QSize(80, 16777215));

        hboxLayout->addWidget(comboLabel);

        sf1ComboBox = new QComboBox(SFArithmeticsDlg);
        sf1ComboBox->setObjectName(QString::fromUtf8("sf1ComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sf1ComboBox->sizePolicy().hasHeightForWidth());
        sf1ComboBox->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(sf1ComboBox);


        verticalLayout->addLayout(hboxLayout);

        _3 = new QHBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        comboLabel_3 = new QLabel(SFArithmeticsDlg);
        comboLabel_3->setObjectName(QString::fromUtf8("comboLabel_3"));
        comboLabel_3->setMaximumSize(QSize(80, 16777215));

        _3->addWidget(comboLabel_3);

        operationComboBox = new QComboBox(SFArithmeticsDlg);
        operationComboBox->setObjectName(QString::fromUtf8("operationComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(operationComboBox->sizePolicy().hasHeightForWidth());
        operationComboBox->setSizePolicy(sizePolicy1);
        operationComboBox->setMaxVisibleItems(20);

        _3->addWidget(operationComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(horizontalSpacer);


        verticalLayout->addLayout(_3);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        comboLabel_2 = new QLabel(SFArithmeticsDlg);
        comboLabel_2->setObjectName(QString::fromUtf8("comboLabel_2"));
        comboLabel_2->setMaximumSize(QSize(80, 16777215));

        _2->addWidget(comboLabel_2);

        sf2ComboBox = new QComboBox(SFArithmeticsDlg);
        sf2ComboBox->setObjectName(QString::fromUtf8("sf2ComboBox"));
        sizePolicy.setHeightForWidth(sf2ComboBox->sizePolicy().hasHeightForWidth());
        sf2ComboBox->setSizePolicy(sizePolicy);

        _2->addWidget(sf2ComboBox);


        verticalLayout->addLayout(_2);

        buttonBox = new QDialogButtonBox(SFArithmeticsDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SFArithmeticsDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SFArithmeticsDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SFArithmeticsDlg, SLOT(reject()));

        operationComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SFArithmeticsDlg);
    } // setupUi

    void retranslateUi(QDialog *SFArithmeticsDlg)
    {
        SFArithmeticsDlg->setWindowTitle(QApplication::translate("SFArithmeticsDlg", "Scalar fields arithmetics", 0, QApplication::UnicodeUTF8));
        comboLabel->setText(QApplication::translate("SFArithmeticsDlg", "SF 1", 0, QApplication::UnicodeUTF8));
        comboLabel_3->setText(QApplication::translate("SFArithmeticsDlg", "operation", 0, QApplication::UnicodeUTF8));
        operationComboBox->clear();
        operationComboBox->insertItems(0, QStringList()
         << QApplication::translate("SFArithmeticsDlg", "plus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "minus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "multiply", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "divide", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "sqrt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "pow2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "pow3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "exp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "log", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "log10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "cos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "sin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "tan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "acos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "asin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "atan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "integer part", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SFArithmeticsDlg", "inverse (1/x)", 0, QApplication::UnicodeUTF8)
        );
        comboLabel_2->setText(QApplication::translate("SFArithmeticsDlg", "SF 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SFArithmeticsDlg: public Ui_SFArithmeticsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFARITHMETICSDLG_H
