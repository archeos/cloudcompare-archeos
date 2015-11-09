/********************************************************************************
** Form generated from reading UI file 'matchScalesDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATCHSCALESDLG_H
#define UI_MATCHSCALESDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MatchScalesDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *bbMaxDimRadioButton;
    QRadioButton *bbVolumeRadioButton;
    QRadioButton *pcaRadioButton;
    QRadioButton *icpRadioButton;
    QGroupBox *icpGroupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *rmsDifferenceLineEdit;
    QSpinBox *overlapSpinBox;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MatchScalesDialog)
    {
        if (MatchScalesDialog->objectName().isEmpty())
            MatchScalesDialog->setObjectName(QString::fromUtf8("MatchScalesDialog"));
        MatchScalesDialog->resize(400, 500);
        verticalLayout_3 = new QVBoxLayout(MatchScalesDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(MatchScalesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MatchScalesDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bbMaxDimRadioButton = new QRadioButton(groupBox_2);
        bbMaxDimRadioButton->setObjectName(QString::fromUtf8("bbMaxDimRadioButton"));

        verticalLayout->addWidget(bbMaxDimRadioButton);

        bbVolumeRadioButton = new QRadioButton(groupBox_2);
        bbVolumeRadioButton->setObjectName(QString::fromUtf8("bbVolumeRadioButton"));

        verticalLayout->addWidget(bbVolumeRadioButton);

        pcaRadioButton = new QRadioButton(groupBox_2);
        pcaRadioButton->setObjectName(QString::fromUtf8("pcaRadioButton"));
        pcaRadioButton->setChecked(true);

        verticalLayout->addWidget(pcaRadioButton);

        icpRadioButton = new QRadioButton(groupBox_2);
        icpRadioButton->setObjectName(QString::fromUtf8("icpRadioButton"));

        verticalLayout->addWidget(icpRadioButton);


        verticalLayout_3->addWidget(groupBox_2);

        icpGroupBox = new QGroupBox(MatchScalesDialog);
        icpGroupBox->setObjectName(QString::fromUtf8("icpGroupBox"));
        icpGroupBox->setEnabled(false);
        formLayout = new QFormLayout(icpGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(icpGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        rmsDifferenceLineEdit = new QLineEdit(icpGroupBox);
        rmsDifferenceLineEdit->setObjectName(QString::fromUtf8("rmsDifferenceLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rmsDifferenceLineEdit->sizePolicy().hasHeightForWidth());
        rmsDifferenceLineEdit->setSizePolicy(sizePolicy);
        rmsDifferenceLineEdit->setLayoutDirection(Qt::RightToLeft);
        rmsDifferenceLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, rmsDifferenceLineEdit);

        overlapSpinBox = new QSpinBox(icpGroupBox);
        overlapSpinBox->setObjectName(QString::fromUtf8("overlapSpinBox"));
        overlapSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        overlapSpinBox->setMinimum(1);
        overlapSpinBox->setMaximum(100);
        overlapSpinBox->setSingleStep(10);
        overlapSpinBox->setValue(100);

        formLayout->setWidget(1, QFormLayout::FieldRole, overlapSpinBox);

        label_4 = new QLabel(icpGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);


        verticalLayout_3->addWidget(icpGroupBox);

        buttonBox = new QDialogButtonBox(MatchScalesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(MatchScalesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MatchScalesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MatchScalesDialog, SLOT(reject()));
        QObject::connect(icpRadioButton, SIGNAL(toggled(bool)), icpGroupBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MatchScalesDialog);
    } // setupUi

    void retranslateUi(QDialog *MatchScalesDialog)
    {
        MatchScalesDialog->setWindowTitle(QApplication::translate("MatchScalesDialog", "Match scales", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("MatchScalesDialog", "Choose the reference entity (its scale won't change)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MatchScalesDialog", "Reference entity", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MatchScalesDialog", "Matching criterion", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bbMaxDimRadioButton->setToolTip(QApplication::translate("MatchScalesDialog", "The scaling ratio will be deduced from the largest bounding-box dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bbMaxDimRadioButton->setText(QApplication::translate("MatchScalesDialog", "max bounding-box dimension", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bbVolumeRadioButton->setToolTip(QApplication::translate("MatchScalesDialog", "The scaling ratio will be deduced from the bounding-box volume", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bbVolumeRadioButton->setText(QApplication::translate("MatchScalesDialog", "bounding-box volume", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pcaRadioButton->setToolTip(QApplication::translate("MatchScalesDialog", "The scaling ratio will be deduced from the principal cloud dimension (by PCA analysis)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pcaRadioButton->setText(QApplication::translate("MatchScalesDialog", "principal dimension (PCA)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        icpRadioButton->setToolTip(QApplication::translate("MatchScalesDialog", "The scaling ratio will be deduced from automatic registration (with unconstrained scale).\n"
"Should be used after one of the previous methods!", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        icpRadioButton->setText(QApplication::translate("MatchScalesDialog", "ICP (only the scale will be applied)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        icpGroupBox->setToolTip(QApplication::translate("MatchScalesDialog", "Parameters for ICP registration", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        icpGroupBox->setTitle(QApplication::translate("MatchScalesDialog", "ICP parameters", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MatchScalesDialog", "RMS difference", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rmsDifferenceLineEdit->setToolTip(QApplication::translate("MatchScalesDialog", "Set the minimum RMS improvement between 2 consecutive iterations (below which the registration process will stop).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rmsDifferenceLineEdit->setText(QApplication::translate("MatchScalesDialog", "1.0e-5", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        overlapSpinBox->setToolTip(QApplication::translate("MatchScalesDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        overlapSpinBox->setSuffix(QApplication::translate("MatchScalesDialog", "%", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("MatchScalesDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MatchScalesDialog", "Final overlap", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MatchScalesDialog: public Ui_MatchScalesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATCHSCALESDLG_H
