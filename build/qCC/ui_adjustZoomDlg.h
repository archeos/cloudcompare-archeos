/********************************************************************************
** Form generated from reading UI file 'adjustZoomDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJUSTZOOMDLG_H
#define UI_ADJUSTZOOMDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AdjustZoomDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *windowLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QDoubleSpinBox *zoomDoubleSpinBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *pixelSizeDoubleSpinBox;
    QLabel *label_4;
    QSpinBox *pixelCountSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdjustZoomDialog)
    {
        if (AdjustZoomDialog->objectName().isEmpty())
            AdjustZoomDialog->setObjectName(QString::fromUtf8("AdjustZoomDialog"));
        AdjustZoomDialog->resize(313, 115);
        formLayout = new QFormLayout(AdjustZoomDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AdjustZoomDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        windowLabel = new QLabel(AdjustZoomDialog);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));

        horizontalLayout_2->addWidget(windowLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(AdjustZoomDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        zoomDoubleSpinBox = new QDoubleSpinBox(AdjustZoomDialog);
        zoomDoubleSpinBox->setObjectName(QString::fromUtf8("zoomDoubleSpinBox"));
        zoomDoubleSpinBox->setDecimals(6);
        zoomDoubleSpinBox->setMinimum(1e-06);
        zoomDoubleSpinBox->setMaximum(1e+06);
        zoomDoubleSpinBox->setSingleStep(0.01);
        zoomDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(zoomDoubleSpinBox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(AdjustZoomDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pixelSizeDoubleSpinBox = new QDoubleSpinBox(AdjustZoomDialog);
        pixelSizeDoubleSpinBox->setObjectName(QString::fromUtf8("pixelSizeDoubleSpinBox"));
        pixelSizeDoubleSpinBox->setDecimals(6);
        pixelSizeDoubleSpinBox->setMinimum(1e-06);
        pixelSizeDoubleSpinBox->setMaximum(1e+09);
        pixelSizeDoubleSpinBox->setSingleStep(0.001);
        pixelSizeDoubleSpinBox->setValue(1);

        horizontalLayout->addWidget(pixelSizeDoubleSpinBox);

        label_4 = new QLabel(AdjustZoomDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        pixelCountSpinBox = new QSpinBox(AdjustZoomDialog);
        pixelCountSpinBox->setObjectName(QString::fromUtf8("pixelCountSpinBox"));
        pixelCountSpinBox->setMinimum(1);
        pixelCountSpinBox->setMaximum(10000000);

        horizontalLayout->addWidget(pixelCountSpinBox);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer);

        buttonBox = new QDialogButtonBox(AdjustZoomDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::FieldRole, buttonBox);


        retranslateUi(AdjustZoomDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AdjustZoomDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AdjustZoomDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdjustZoomDialog);
    } // setupUi

    void retranslateUi(QDialog *AdjustZoomDialog)
    {
        AdjustZoomDialog->setWindowTitle(QApplication::translate("AdjustZoomDialog", "Adjust zoom", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AdjustZoomDialog", "Window", 0, QApplication::UnicodeUTF8));
        windowLabel->setText(QApplication::translate("AdjustZoomDialog", "1 (800 x 600)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AdjustZoomDialog", "zoom", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AdjustZoomDialog", "pixel size", 0, QApplication::UnicodeUTF8));
        pixelSizeDoubleSpinBox->setSuffix(QApplication::translate("AdjustZoomDialog", " units", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AdjustZoomDialog", "/", 0, QApplication::UnicodeUTF8));
        pixelCountSpinBox->setSuffix(QApplication::translate("AdjustZoomDialog", " pixel(s)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AdjustZoomDialog: public Ui_AdjustZoomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJUSTZOOMDLG_H
