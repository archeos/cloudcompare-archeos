/********************************************************************************
** Form generated from reading UI file 'colorLevelsDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORLEVELSDLG_H
#define UI_COLORLEVELSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorLevelsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QComboBox *channelComboBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpinBox *minInputSpinBox;
    QSpinBox *maxInputSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QFrame *histoFrame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *outputLevelsCheckBox;
    QFrame *outputLevelsFrame;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *minOutputSpinBox;
    QSpinBox *maxOutputSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorLevelsDialog)
    {
        if (ColorLevelsDialog->objectName().isEmpty())
            ColorLevelsDialog->setObjectName(QString::fromUtf8("ColorLevelsDialog"));
        ColorLevelsDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ColorLevelsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label = new QLabel(ColorLevelsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        channelComboBox = new QComboBox(ColorLevelsDialog);
        channelComboBox->setObjectName(QString::fromUtf8("channelComboBox"));

        horizontalLayout_2->addWidget(channelComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(ColorLevelsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        minInputSpinBox = new QSpinBox(ColorLevelsDialog);
        minInputSpinBox->setObjectName(QString::fromUtf8("minInputSpinBox"));
        minInputSpinBox->setMinimum(-16777216);
        minInputSpinBox->setMaximum(16777216);

        horizontalLayout->addWidget(minInputSpinBox);

        maxInputSpinBox = new QSpinBox(ColorLevelsDialog);
        maxInputSpinBox->setObjectName(QString::fromUtf8("maxInputSpinBox"));
        maxInputSpinBox->setMinimum(-16777216);
        maxInputSpinBox->setMaximum(16777216);
        maxInputSpinBox->setValue(255);

        horizontalLayout->addWidget(maxInputSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        histoFrame = new QFrame(ColorLevelsDialog);
        histoFrame->setObjectName(QString::fromUtf8("histoFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(histoFrame->sizePolicy().hasHeightForWidth());
        histoFrame->setSizePolicy(sizePolicy);
        histoFrame->setFrameShape(QFrame::StyledPanel);
        histoFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(histoFrame);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        outputLevelsCheckBox = new QCheckBox(ColorLevelsDialog);
        outputLevelsCheckBox->setObjectName(QString::fromUtf8("outputLevelsCheckBox"));

        horizontalLayout_3->addWidget(outputLevelsCheckBox);

        outputLevelsFrame = new QFrame(ColorLevelsDialog);
        outputLevelsFrame->setObjectName(QString::fromUtf8("outputLevelsFrame"));
        outputLevelsFrame->setEnabled(false);
        horizontalLayout_4 = new QHBoxLayout(outputLevelsFrame);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        minOutputSpinBox = new QSpinBox(outputLevelsFrame);
        minOutputSpinBox->setObjectName(QString::fromUtf8("minOutputSpinBox"));
        minOutputSpinBox->setMinimum(-16777216);
        minOutputSpinBox->setMaximum(16777216);

        horizontalLayout_4->addWidget(minOutputSpinBox);

        maxOutputSpinBox = new QSpinBox(outputLevelsFrame);
        maxOutputSpinBox->setObjectName(QString::fromUtf8("maxOutputSpinBox"));
        maxOutputSpinBox->setMinimum(-16777216);
        maxOutputSpinBox->setMaximum(16777216);
        maxOutputSpinBox->setValue(255);

        horizontalLayout_4->addWidget(maxOutputSpinBox);


        horizontalLayout_3->addWidget(outputLevelsFrame);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(ColorLevelsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColorLevelsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorLevelsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorLevelsDialog, SLOT(reject()));
        QObject::connect(outputLevelsCheckBox, SIGNAL(toggled(bool)), outputLevelsFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ColorLevelsDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorLevelsDialog)
    {
        ColorLevelsDialog->setWindowTitle(QApplication::translate("ColorLevelsDialog", "Change Color Levels", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ColorLevelsDialog", "Channel(s)", 0, QApplication::UnicodeUTF8));
        channelComboBox->clear();
        channelComboBox->insertItems(0, QStringList()
         << QApplication::translate("ColorLevelsDialog", "RGB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ColorLevelsDialog", "Red", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ColorLevelsDialog", "Green", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ColorLevelsDialog", "Blue", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("ColorLevelsDialog", "Input levels", 0, QApplication::UnicodeUTF8));
        outputLevelsCheckBox->setText(QApplication::translate("ColorLevelsDialog", "Output levels", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorLevelsDialog: public Ui_ColorLevelsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORLEVELSDLG_H
