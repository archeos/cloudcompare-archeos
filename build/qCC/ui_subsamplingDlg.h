/********************************************************************************
** Form generated from reading UI file 'subsamplingDlg.ui'
**
** Created: Sun Mar 10 15:48:34 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSAMPLINGDLG_H
#define UI_SUBSAMPLINGDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SubsamplingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QComboBox *samplingMethod;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout;
    QLabel *labelSliderMin;
    QSlider *slider;
    QLabel *labelSliderMax;
    QLabel *valueLabel;
    QDoubleSpinBox *samplingValue;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SubsamplingDialog)
    {
        if (SubsamplingDialog->objectName().isEmpty())
            SubsamplingDialog->setObjectName(QString::fromUtf8("SubsamplingDialog"));
        SubsamplingDialog->resize(355, 195);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SubsamplingDialog->sizePolicy().hasHeightForWidth());
        SubsamplingDialog->setSizePolicy(sizePolicy);
        SubsamplingDialog->setMinimumSize(QSize(355, 195));
        SubsamplingDialog->setMaximumSize(QSize(355, 195));
        SubsamplingDialog->setAcceptDrops(true);
        SubsamplingDialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(SubsamplingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_4 = new QLabel(SubsamplingDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout->addWidget(label_4);

        samplingMethod = new QComboBox(SubsamplingDialog);
        samplingMethod->setObjectName(QString::fromUtf8("samplingMethod"));
        samplingMethod->setMinimumSize(QSize(0, 26));

        hboxLayout->addWidget(samplingMethod);


        verticalLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelSliderMin = new QLabel(SubsamplingDialog);
        labelSliderMin->setObjectName(QString::fromUtf8("labelSliderMin"));
        labelSliderMin->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(labelSliderMin, 0, 0, 1, 1);

        slider = new QSlider(SubsamplingDialog);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMaximum(10000000);
        slider->setValue(1000);
        slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(slider, 1, 0, 1, 2);

        labelSliderMax = new QLabel(SubsamplingDialog);
        labelSliderMax->setObjectName(QString::fromUtf8("labelSliderMax"));
        labelSliderMax->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout->addWidget(labelSliderMax, 0, 1, 1, 1);

        valueLabel = new QLabel(SubsamplingDialog);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        gridLayout->addWidget(valueLabel, 2, 1, 1, 1);

        samplingValue = new QDoubleSpinBox(SubsamplingDialog);
        samplingValue->setObjectName(QString::fromUtf8("samplingValue"));
        samplingValue->setMinimumSize(QSize(0, 25));
        samplingValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplingValue->setDecimals(4);
        samplingValue->setMaximum(100);
        samplingValue->setSingleStep(0.01);
        samplingValue->setValue(100);

        gridLayout->addWidget(samplingValue, 2, 0, 1, 1);


        hboxLayout1->addLayout(gridLayout);


        verticalLayout->addLayout(hboxLayout1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SubsamplingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(samplingMethod, slider);
        QWidget::setTabOrder(slider, buttonBox);

        retranslateUi(SubsamplingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SubsamplingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SubsamplingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SubsamplingDialog);
    } // setupUi

    void retranslateUi(QDialog *SubsamplingDialog)
    {
        SubsamplingDialog->setWindowTitle(QApplication::translate("SubsamplingDialog", "Cloud sub sampling", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SubsamplingDialog", "Method :", 0, QApplication::UnicodeUTF8));
        labelSliderMin->setText(QApplication::translate("SubsamplingDialog", "None", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        slider->setToolTip(QApplication::translate("SubsamplingDialog", "Move to the left (none) to decrease the number of points  to keep in the cloud.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        slider->setStatusTip(QApplication::translate("SubsamplingDialog", "Move to the left (none) to decrease the number of points  to keep in the cloud.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        labelSliderMax->setText(QApplication::translate("SubsamplingDialog", "All", 0, QApplication::UnicodeUTF8));
        valueLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SubsamplingDialog: public Ui_SubsamplingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSAMPLINGDLG_H
