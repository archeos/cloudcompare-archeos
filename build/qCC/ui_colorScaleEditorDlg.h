/********************************************************************************
** Form generated from reading UI file 'colorScaleEditorDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORSCALEEDITORDLG_H
#define UI_COLORSCALEEDITORDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorScaleEditorDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *rampComboBox;
    QToolButton *exportToolButton;
    QToolButton *importToolButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QFrame *colorScaleParametersFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *scaleModeComboBox;
    QToolButton *renameToolButton;
    QToolButton *saveToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QToolButton *newToolButton;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lockWarningLabel;
    QFrame *colorScaleEditorFrame;
    QGroupBox *selectedSliderGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *deleteSliderToolButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QToolButton *colorToolButton;
    QLabel *label_2;
    QDoubleSpinBox *valueDoubleSpinBox;
    QLabel *valueLabel;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *customLabelsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *customLabelsPlainTextEdit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *applyPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ColorScaleEditorDlg)
    {
        if (ColorScaleEditorDlg->objectName().isEmpty())
            ColorScaleEditorDlg->setObjectName(QString::fromUtf8("ColorScaleEditorDlg"));
        ColorScaleEditorDlg->resize(500, 420);
        verticalLayout = new QVBoxLayout(ColorScaleEditorDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ColorScaleEditorDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        rampComboBox = new QComboBox(frame);
        rampComboBox->setObjectName(QString::fromUtf8("rampComboBox"));
        rampComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(rampComboBox);

        exportToolButton = new QToolButton(frame);
        exportToolButton->setObjectName(QString::fromUtf8("exportToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportToolButton->setIcon(icon);

        horizontalLayout->addWidget(exportToolButton);

        importToolButton = new QToolButton(frame);
        importToolButton->setObjectName(QString::fromUtf8("importToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        importToolButton->setIcon(icon1);

        horizontalLayout->addWidget(importToolButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(frame);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        colorScaleParametersFrame = new QFrame(ColorScaleEditorDlg);
        colorScaleParametersFrame->setObjectName(QString::fromUtf8("colorScaleParametersFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorScaleParametersFrame->sizePolicy().hasHeightForWidth());
        colorScaleParametersFrame->setSizePolicy(sizePolicy);
        colorScaleParametersFrame->setFrameShape(QFrame::StyledPanel);
        colorScaleParametersFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(colorScaleParametersFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(colorScaleParametersFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        scaleModeComboBox = new QComboBox(colorScaleParametersFrame);
        scaleModeComboBox->setObjectName(QString::fromUtf8("scaleModeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scaleModeComboBox->sizePolicy().hasHeightForWidth());
        scaleModeComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(scaleModeComboBox);

        renameToolButton = new QToolButton(colorScaleParametersFrame);
        renameToolButton->setObjectName(QString::fromUtf8("renameToolButton"));

        horizontalLayout_3->addWidget(renameToolButton);

        saveToolButton = new QToolButton(colorScaleParametersFrame);
        saveToolButton->setObjectName(QString::fromUtf8("saveToolButton"));

        horizontalLayout_3->addWidget(saveToolButton);

        deleteToolButton = new QToolButton(colorScaleParametersFrame);
        deleteToolButton->setObjectName(QString::fromUtf8("deleteToolButton"));

        horizontalLayout_3->addWidget(deleteToolButton);


        horizontalLayout_4->addWidget(colorScaleParametersFrame);

        copyToolButton = new QToolButton(ColorScaleEditorDlg);
        copyToolButton->setObjectName(QString::fromUtf8("copyToolButton"));

        horizontalLayout_4->addWidget(copyToolButton);

        newToolButton = new QToolButton(ColorScaleEditorDlg);
        newToolButton->setObjectName(QString::fromUtf8("newToolButton"));

        horizontalLayout_4->addWidget(newToolButton);

        horizontalSpacer_5 = new QSpacerItem(48, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        lockWarningLabel = new QLabel(ColorScaleEditorDlg);
        lockWarningLabel->setObjectName(QString::fromUtf8("lockWarningLabel"));
        lockWarningLabel->setStyleSheet(QString::fromUtf8("QLabel{ color: red; }"));
        lockWarningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lockWarningLabel);

        colorScaleEditorFrame = new QFrame(ColorScaleEditorDlg);
        colorScaleEditorFrame->setObjectName(QString::fromUtf8("colorScaleEditorFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(colorScaleEditorFrame->sizePolicy().hasHeightForWidth());
        colorScaleEditorFrame->setSizePolicy(sizePolicy2);
        colorScaleEditorFrame->setMinimumSize(QSize(0, 50));
        colorScaleEditorFrame->setFrameShape(QFrame::StyledPanel);
        colorScaleEditorFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(colorScaleEditorFrame);

        selectedSliderGroupBox = new QGroupBox(ColorScaleEditorDlg);
        selectedSliderGroupBox->setObjectName(QString::fromUtf8("selectedSliderGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(selectedSliderGroupBox->sizePolicy().hasHeightForWidth());
        selectedSliderGroupBox->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(selectedSliderGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        deleteSliderToolButton = new QToolButton(selectedSliderGroupBox);
        deleteSliderToolButton->setObjectName(QString::fromUtf8("deleteSliderToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/smallTrash.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteSliderToolButton->setIcon(icon2);

        horizontalLayout_2->addWidget(deleteSliderToolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_3 = new QLabel(selectedSliderGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        colorToolButton = new QToolButton(selectedSliderGroupBox);
        colorToolButton->setObjectName(QString::fromUtf8("colorToolButton"));

        horizontalLayout_2->addWidget(colorToolButton);

        label_2 = new QLabel(selectedSliderGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        valueDoubleSpinBox = new QDoubleSpinBox(selectedSliderGroupBox);
        valueDoubleSpinBox->setObjectName(QString::fromUtf8("valueDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(valueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        valueDoubleSpinBox->setSizePolicy(sizePolicy1);
        valueDoubleSpinBox->setDecimals(6);

        horizontalLayout_2->addWidget(valueDoubleSpinBox);

        valueLabel = new QLabel(selectedSliderGroupBox);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        horizontalLayout_2->addWidget(valueLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(selectedSliderGroupBox);

        customLabelsGroupBox = new QGroupBox(ColorScaleEditorDlg);
        customLabelsGroupBox->setObjectName(QString::fromUtf8("customLabelsGroupBox"));
        customLabelsGroupBox->setCheckable(true);
        customLabelsGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(customLabelsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        customLabelsPlainTextEdit = new QPlainTextEdit(customLabelsGroupBox);
        customLabelsPlainTextEdit->setObjectName(QString::fromUtf8("customLabelsPlainTextEdit"));

        verticalLayout_2->addWidget(customLabelsPlainTextEdit);


        verticalLayout->addWidget(customLabelsGroupBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        applyPushButton = new QPushButton(ColorScaleEditorDlg);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));

        horizontalLayout_5->addWidget(applyPushButton);

        closePushButton = new QPushButton(ColorScaleEditorDlg);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        horizontalLayout_5->addWidget(closePushButton);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(ColorScaleEditorDlg);

        QMetaObject::connectSlotsByName(ColorScaleEditorDlg);
    } // setupUi

    void retranslateUi(QDialog *ColorScaleEditorDlg)
    {
        ColorScaleEditorDlg->setWindowTitle(QApplication::translate("ColorScaleEditorDlg", "Color Scale Editor", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ColorScaleEditorDlg", "Current", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exportToolButton->setToolTip(QApplication::translate("ColorScaleEditorDlg", "Export color scale to a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        importToolButton->setToolTip(QApplication::translate("ColorScaleEditorDlg", "Import color scale from a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("ColorScaleEditorDlg", "Mode", 0, QApplication::UnicodeUTF8));
        scaleModeComboBox->clear();
        scaleModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("ColorScaleEditorDlg", "relative", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ColorScaleEditorDlg", "absolute", 0, QApplication::UnicodeUTF8)
        );
        renameToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "Rename", 0, QApplication::UnicodeUTF8));
        saveToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "Save", 0, QApplication::UnicodeUTF8));
        deleteToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "Delete", 0, QApplication::UnicodeUTF8));
        copyToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "Copy", 0, QApplication::UnicodeUTF8));
        newToolButton->setText(QApplication::translate("ColorScaleEditorDlg", "New", 0, QApplication::UnicodeUTF8));
        lockWarningLabel->setText(QApplication::translate("ColorScaleEditorDlg", "(this ramp is locked - copy it before editing it)", 0, QApplication::UnicodeUTF8));
        selectedSliderGroupBox->setTitle(QApplication::translate("ColorScaleEditorDlg", "Selected slider", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ColorScaleEditorDlg", "Color", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ColorScaleEditorDlg", "Value", 0, QApplication::UnicodeUTF8));
        valueLabel->setText(QApplication::translate("ColorScaleEditorDlg", "(32%)", 0, QApplication::UnicodeUTF8));
        customLabelsGroupBox->setTitle(QApplication::translate("ColorScaleEditorDlg", "Custom labels (one value per line)", 0, QApplication::UnicodeUTF8));
        customLabelsPlainTextEdit->setPlainText(QApplication::translate("ColorScaleEditorDlg", "(auto)", 0, QApplication::UnicodeUTF8));
        applyPushButton->setText(QApplication::translate("ColorScaleEditorDlg", "Apply", 0, QApplication::UnicodeUTF8));
        closePushButton->setText(QApplication::translate("ColorScaleEditorDlg", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorScaleEditorDlg: public Ui_ColorScaleEditorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORSCALEEDITORDLG_H
