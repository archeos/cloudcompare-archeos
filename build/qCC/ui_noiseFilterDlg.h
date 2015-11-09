/********************************************************************************
** Form generated from reading UI file 'noiseFilterDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOISEFILTERDLG_H
#define UI_NOISEFILTERDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NoiseFilterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QRadioButton *knnRadioButton;
    QRadioButton *radiusRadioButton;
    QSpinBox *knnSpinBox;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QRadioButton *relativeRadioButton;
    QRadioButton *absErrorRadioButton;
    QDoubleSpinBox *nSigmaDoubleSpinBox;
    QDoubleSpinBox *absErrorDoubleSpinBox;
    QCheckBox *removeIsolatedPointsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NoiseFilterDialog)
    {
        if (NoiseFilterDialog->objectName().isEmpty())
            NoiseFilterDialog->setObjectName(QString::fromUtf8("NoiseFilterDialog"));
        NoiseFilterDialog->resize(302, 228);
        verticalLayout = new QVBoxLayout(NoiseFilterDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(NoiseFilterDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        knnRadioButton = new QRadioButton(groupBox);
        knnRadioButton->setObjectName(QString::fromUtf8("knnRadioButton"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, knnRadioButton);

        radiusRadioButton = new QRadioButton(groupBox);
        radiusRadioButton->setObjectName(QString::fromUtf8("radiusRadioButton"));
        radiusRadioButton->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, radiusRadioButton);

        knnSpinBox = new QSpinBox(groupBox);
        knnSpinBox->setObjectName(QString::fromUtf8("knnSpinBox"));
        knnSpinBox->setEnabled(false);
        knnSpinBox->setMinimum(3);
        knnSpinBox->setMaximum(1000000000);
        knnSpinBox->setValue(8);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, knnSpinBox);

        radiusDoubleSpinBox = new QDoubleSpinBox(groupBox);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMaximum(1e+09);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, radiusDoubleSpinBox);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(NoiseFilterDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        relativeRadioButton = new QRadioButton(groupBox_2);
        relativeRadioButton->setObjectName(QString::fromUtf8("relativeRadioButton"));
        relativeRadioButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, relativeRadioButton);

        absErrorRadioButton = new QRadioButton(groupBox_2);
        absErrorRadioButton->setObjectName(QString::fromUtf8("absErrorRadioButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, absErrorRadioButton);

        nSigmaDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        nSigmaDoubleSpinBox->setObjectName(QString::fromUtf8("nSigmaDoubleSpinBox"));
        nSigmaDoubleSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::LabelRole, nSigmaDoubleSpinBox);

        absErrorDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        absErrorDoubleSpinBox->setObjectName(QString::fromUtf8("absErrorDoubleSpinBox"));
        absErrorDoubleSpinBox->setEnabled(false);
        absErrorDoubleSpinBox->setDecimals(6);
        absErrorDoubleSpinBox->setMaximum(1e+09);
        absErrorDoubleSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, absErrorDoubleSpinBox);


        verticalLayout->addWidget(groupBox_2);

        removeIsolatedPointsCheckBox = new QCheckBox(NoiseFilterDialog);
        removeIsolatedPointsCheckBox->setObjectName(QString::fromUtf8("removeIsolatedPointsCheckBox"));

        verticalLayout->addWidget(removeIsolatedPointsCheckBox);

        buttonBox = new QDialogButtonBox(NoiseFilterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NoiseFilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NoiseFilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NoiseFilterDialog, SLOT(reject()));
        QObject::connect(knnRadioButton, SIGNAL(toggled(bool)), knnSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(radiusRadioButton, SIGNAL(toggled(bool)), radiusDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(relativeRadioButton, SIGNAL(toggled(bool)), nSigmaDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(absErrorRadioButton, SIGNAL(toggled(bool)), absErrorDoubleSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(NoiseFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *NoiseFilterDialog)
    {
        NoiseFilterDialog->setWindowTitle(QApplication::translate("NoiseFilterDialog", "Filter noise", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("NoiseFilterDialog", "Neighbors", 0, QApplication::UnicodeUTF8));
        knnRadioButton->setText(QApplication::translate("NoiseFilterDialog", "Points (kNN)", 0, QApplication::UnicodeUTF8));
        radiusRadioButton->setText(QApplication::translate("NoiseFilterDialog", "Radius (Sphere)", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("NoiseFilterDialog", "Max error", 0, QApplication::UnicodeUTF8));
        relativeRadioButton->setText(QApplication::translate("NoiseFilterDialog", "Relative", 0, QApplication::UnicodeUTF8));
        absErrorRadioButton->setText(QApplication::translate("NoiseFilterDialog", "Absolute", 0, QApplication::UnicodeUTF8));
        removeIsolatedPointsCheckBox->setText(QApplication::translate("NoiseFilterDialog", "Remove isolated points", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NoiseFilterDialog: public Ui_NoiseFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOISEFILTERDLG_H
