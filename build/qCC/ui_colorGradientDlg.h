/********************************************************************************
** Form generated from reading UI file 'colorGradientDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORGRADIENTDLG_H
#define UI_COLORGRADIENTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorGradientDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *defaultRampRadioButton;
    QRadioButton *customRampRadioButton;
    QFrame *customRampFrame;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QToolButton *firstColorButton;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QToolButton *secondColorButton;
    QRadioButton *bandingRadioButton;
    QFrame *bandingFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpinBox *bandingFreqSpinBox;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QComboBox *directionComboBox;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorGradientDialog)
    {
        if (ColorGradientDialog->objectName().isEmpty())
            ColorGradientDialog->setObjectName(QString::fromUtf8("ColorGradientDialog"));
        ColorGradientDialog->resize(240, 236);
        verticalLayout_2 = new QVBoxLayout(ColorGradientDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(ColorGradientDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        defaultRampRadioButton = new QRadioButton(groupBox);
        defaultRampRadioButton->setObjectName(QString::fromUtf8("defaultRampRadioButton"));
        defaultRampRadioButton->setChecked(true);

        verticalLayout->addWidget(defaultRampRadioButton);

        customRampRadioButton = new QRadioButton(groupBox);
        customRampRadioButton->setObjectName(QString::fromUtf8("customRampRadioButton"));

        verticalLayout->addWidget(customRampRadioButton);

        customRampFrame = new QFrame(groupBox);
        customRampFrame->setObjectName(QString::fromUtf8("customRampFrame"));
        customRampFrame->setEnabled(false);
        hboxLayout = new QHBoxLayout(customRampFrame);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(20, 0, 0, 0);
        label = new QLabel(customRampFrame);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        firstColorButton = new QToolButton(customRampFrame);
        firstColorButton->setObjectName(QString::fromUtf8("firstColorButton"));

        hboxLayout->addWidget(firstColorButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label_2 = new QLabel(customRampFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        secondColorButton = new QToolButton(customRampFrame);
        secondColorButton->setObjectName(QString::fromUtf8("secondColorButton"));

        hboxLayout->addWidget(secondColorButton);


        verticalLayout->addWidget(customRampFrame);

        bandingRadioButton = new QRadioButton(groupBox);
        bandingRadioButton->setObjectName(QString::fromUtf8("bandingRadioButton"));

        verticalLayout->addWidget(bandingRadioButton);

        bandingFrame = new QFrame(groupBox);
        bandingFrame->setObjectName(QString::fromUtf8("bandingFrame"));
        bandingFrame->setEnabled(false);
        bandingFrame->setFrameShape(QFrame::StyledPanel);
        bandingFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(bandingFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, 0, 0);
        label_4 = new QLabel(bandingFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bandingFreqSpinBox = new QSpinBox(bandingFrame);
        bandingFreqSpinBox->setObjectName(QString::fromUtf8("bandingFreqSpinBox"));
        bandingFreqSpinBox->setMinimum(1);
        bandingFreqSpinBox->setMaximum(1000000000);
        bandingFreqSpinBox->setValue(5);

        horizontalLayout->addWidget(bandingFreqSpinBox);


        verticalLayout->addWidget(bandingFrame);


        verticalLayout_2->addWidget(groupBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_3 = new QLabel(ColorGradientDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        directionComboBox = new QComboBox(ColorGradientDialog);
        directionComboBox->setObjectName(QString::fromUtf8("directionComboBox"));

        hboxLayout1->addWidget(directionComboBox);


        verticalLayout_2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(ColorGradientDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout2->addWidget(buttonBox);


        verticalLayout_2->addLayout(hboxLayout2);


        retranslateUi(ColorGradientDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorGradientDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorGradientDialog, SLOT(reject()));
        QObject::connect(bandingRadioButton, SIGNAL(toggled(bool)), bandingFrame, SLOT(setEnabled(bool)));
        QObject::connect(customRampRadioButton, SIGNAL(toggled(bool)), customRampFrame, SLOT(setEnabled(bool)));

        directionComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ColorGradientDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorGradientDialog)
    {
        ColorGradientDialog->setWindowTitle(QApplication::translate("ColorGradientDialog", "Gradient color", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ColorGradientDialog", "Color ramp", 0, QApplication::UnicodeUTF8));
        defaultRampRadioButton->setText(QApplication::translate("ColorGradientDialog", "Default", 0, QApplication::UnicodeUTF8));
        customRampRadioButton->setText(QApplication::translate("ColorGradientDialog", "Custom", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ColorGradientDialog", "First color", 0, QApplication::UnicodeUTF8));
        firstColorButton->setText(QApplication::translate("ColorGradientDialog", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ColorGradientDialog", "Second color", 0, QApplication::UnicodeUTF8));
        secondColorButton->setText(QApplication::translate("ColorGradientDialog", "...", 0, QApplication::UnicodeUTF8));
        bandingRadioButton->setText(QApplication::translate("ColorGradientDialog", "Banding", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ColorGradientDialog", "Frequency", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ColorGradientDialog", "direction", 0, QApplication::UnicodeUTF8));
        directionComboBox->clear();
        directionComboBox->insertItems(0, QStringList()
         << QApplication::translate("ColorGradientDialog", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ColorGradientDialog", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ColorGradientDialog", "Z", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class ColorGradientDialog: public Ui_ColorGradientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORGRADIENTDLG_H
