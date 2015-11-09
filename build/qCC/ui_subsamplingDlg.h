/********************************************************************************
** Form generated from reading UI file 'subsamplingDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
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
#include <QtGui/QGroupBox>
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
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mainParamGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QComboBox *samplingMethod;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSliderMin;
    QSpacerItem *horizontalSpacer;
    QLabel *labelSliderMax;
    QSlider *slider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *valueLabel;
    QDoubleSpinBox *samplingValue;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *sfGroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *minSFlabel;
    QDoubleSpinBox *minSFSpacingDoubleSpinBox;
    QLabel *label_5;
    QLabel *maxSFlabel;
    QDoubleSpinBox *maxSFSpacingDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SubsamplingDialog)
    {
        if (SubsamplingDialog->objectName().isEmpty())
            SubsamplingDialog->setObjectName(QString::fromUtf8("SubsamplingDialog"));
        SubsamplingDialog->resize(400, 335);
        verticalLayout_2 = new QVBoxLayout(SubsamplingDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mainParamGroupBox = new QGroupBox(SubsamplingDialog);
        mainParamGroupBox->setObjectName(QString::fromUtf8("mainParamGroupBox"));
        verticalLayout = new QVBoxLayout(mainParamGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_4 = new QLabel(mainParamGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout->addWidget(label_4);

        samplingMethod = new QComboBox(mainParamGroupBox);
        samplingMethod->setObjectName(QString::fromUtf8("samplingMethod"));

        hboxLayout->addWidget(samplingMethod);


        verticalLayout->addLayout(hboxLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelSliderMin = new QLabel(mainParamGroupBox);
        labelSliderMin->setObjectName(QString::fromUtf8("labelSliderMin"));
        labelSliderMin->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(labelSliderMin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelSliderMax = new QLabel(mainParamGroupBox);
        labelSliderMax->setObjectName(QString::fromUtf8("labelSliderMax"));
        labelSliderMax->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout->addWidget(labelSliderMax);


        verticalLayout->addLayout(horizontalLayout);

        slider = new QSlider(mainParamGroupBox);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMaximum(10000000);
        slider->setSingleStep(10000);
        slider->setPageStep(100000);
        slider->setValue(10000000);
        slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        valueLabel = new QLabel(mainParamGroupBox);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        horizontalLayout_2->addWidget(valueLabel);

        samplingValue = new QDoubleSpinBox(mainParamGroupBox);
        samplingValue->setObjectName(QString::fromUtf8("samplingValue"));
        samplingValue->setMinimumSize(QSize(0, 25));
        samplingValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        samplingValue->setDecimals(4);
        samplingValue->setMaximum(100);
        samplingValue->setSingleStep(0.01);
        samplingValue->setValue(100);

        horizontalLayout_2->addWidget(samplingValue);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(mainParamGroupBox);

        sfGroupBox = new QGroupBox(SubsamplingDialog);
        sfGroupBox->setObjectName(QString::fromUtf8("sfGroupBox"));
        sfGroupBox->setEnabled(false);
        sfGroupBox->setFlat(false);
        sfGroupBox->setCheckable(true);
        sfGroupBox->setChecked(false);
        gridLayout = new QGridLayout(sfGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(sfGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(sfGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(sfGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        minSFlabel = new QLabel(sfGroupBox);
        minSFlabel->setObjectName(QString::fromUtf8("minSFlabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minSFlabel->sizePolicy().hasHeightForWidth());
        minSFlabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(minSFlabel, 1, 1, 1, 1);

        minSFSpacingDoubleSpinBox = new QDoubleSpinBox(sfGroupBox);
        minSFSpacingDoubleSpinBox->setObjectName(QString::fromUtf8("minSFSpacingDoubleSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(minSFSpacingDoubleSpinBox->sizePolicy().hasHeightForWidth());
        minSFSpacingDoubleSpinBox->setSizePolicy(sizePolicy1);
        minSFSpacingDoubleSpinBox->setDecimals(6);
        minSFSpacingDoubleSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(minSFSpacingDoubleSpinBox, 1, 2, 1, 1);

        label_5 = new QLabel(sfGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        maxSFlabel = new QLabel(sfGroupBox);
        maxSFlabel->setObjectName(QString::fromUtf8("maxSFlabel"));
        sizePolicy.setHeightForWidth(maxSFlabel->sizePolicy().hasHeightForWidth());
        maxSFlabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(maxSFlabel, 2, 1, 1, 1);

        maxSFSpacingDoubleSpinBox = new QDoubleSpinBox(sfGroupBox);
        maxSFSpacingDoubleSpinBox->setObjectName(QString::fromUtf8("maxSFSpacingDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(maxSFSpacingDoubleSpinBox->sizePolicy().hasHeightForWidth());
        maxSFSpacingDoubleSpinBox->setSizePolicy(sizePolicy1);
        maxSFSpacingDoubleSpinBox->setDecimals(6);
        maxSFSpacingDoubleSpinBox->setMaximum(1e+09);
        maxSFSpacingDoubleSpinBox->setValue(1);

        gridLayout->addWidget(maxSFSpacingDoubleSpinBox, 2, 2, 1, 1);


        verticalLayout_2->addWidget(sfGroupBox);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        buttonBox = new QDialogButtonBox(SubsamplingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(samplingMethod, slider);
        QWidget::setTabOrder(slider, buttonBox);

        retranslateUi(SubsamplingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SubsamplingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SubsamplingDialog, SLOT(reject()));
        QObject::connect(sfGroupBox, SIGNAL(toggled(bool)), samplingValue, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(SubsamplingDialog);
    } // setupUi

    void retranslateUi(QDialog *SubsamplingDialog)
    {
        SubsamplingDialog->setWindowTitle(QApplication::translate("SubsamplingDialog", "Cloud sub sampling", 0, QApplication::UnicodeUTF8));
        mainParamGroupBox->setTitle(QApplication::translate("SubsamplingDialog", "Sampling parameters", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SubsamplingDialog", "method", 0, QApplication::UnicodeUTF8));
        labelSliderMin->setText(QApplication::translate("SubsamplingDialog", "none", 0, QApplication::UnicodeUTF8));
        labelSliderMax->setText(QApplication::translate("SubsamplingDialog", "all", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        slider->setToolTip(QApplication::translate("SubsamplingDialog", "The more on the left, the less points will be kept", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        valueLabel->setText(QApplication::translate("SubsamplingDialog", "value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sfGroupBox->setToolTip(QApplication::translate("SubsamplingDialog", "To modulate the sampling distance with a scalar field value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sfGroupBox->setTitle(QApplication::translate("SubsamplingDialog", "Use active SF", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SubsamplingDialog", "SF value", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SubsamplingDialog", "Spacing value", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SubsamplingDialog", "min", 0, QApplication::UnicodeUTF8));
        minSFlabel->setText(QApplication::translate("SubsamplingDialog", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SubsamplingDialog", "max", 0, QApplication::UnicodeUTF8));
        maxSFlabel->setText(QApplication::translate("SubsamplingDialog", "100", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SubsamplingDialog: public Ui_SubsamplingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSAMPLINGDLG_H
