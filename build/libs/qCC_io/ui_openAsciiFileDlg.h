/********************************************************************************
** Form generated from reading UI file 'openAsciiFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENASCIIFILEDLG_H
#define UI_OPENASCIIFILEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AsciiOpenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditFileName;
    QLabel *label;
    QLabel *headerLabel;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditSeparator;
    QLabel *asciiCodeLabel;
    QHBoxLayout *hboxLayout;
    QToolButton *toolButtonShortcutESP;
    QToolButton *toolButtonShortcutTAB;
    QToolButton *toolButtonShortcutComma;
    QToolButton *toolButtonShortcutDotcomma;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBoxSkipLines;
    QLabel *commentLinesSkippedLabel;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *extractSFNamesFrom1stLineCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *maxCloudSizeDoubleSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *applyButton;
    QPushButton *applyAllButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AsciiOpenDialog)
    {
        if (AsciiOpenDialog->objectName().isEmpty())
            AsciiOpenDialog->setObjectName(QString::fromUtf8("AsciiOpenDialog"));
        AsciiOpenDialog->resize(700, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AsciiOpenDialog->sizePolicy().hasHeightForWidth());
        AsciiOpenDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AsciiOpenDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(AsciiOpenDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditFileName = new QLineEdit(AsciiOpenDialog);
        lineEditFileName->setObjectName(QString::fromUtf8("lineEditFileName"));
        sizePolicy.setHeightForWidth(lineEditFileName->sizePolicy().hasHeightForWidth());
        lineEditFileName->setSizePolicy(sizePolicy);
        lineEditFileName->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditFileName);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(AsciiOpenDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        headerLabel = new QLabel(AsciiOpenDialog);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        headerLabel->setStyleSheet(QString::fromUtf8("color: grey;"));

        verticalLayout->addWidget(headerLabel);

        tableWidget = new QTableWidget(AsciiOpenDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(0);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(AsciiOpenDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditSeparator = new QLineEdit(AsciiOpenDialog);
        lineEditSeparator->setObjectName(QString::fromUtf8("lineEditSeparator"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditSeparator->sizePolicy().hasHeightForWidth());
        lineEditSeparator->setSizePolicy(sizePolicy1);
        lineEditSeparator->setMaximumSize(QSize(30, 16777215));
        lineEditSeparator->setMaxLength(1);

        horizontalLayout->addWidget(lineEditSeparator);

        asciiCodeLabel = new QLabel(AsciiOpenDialog);
        asciiCodeLabel->setObjectName(QString::fromUtf8("asciiCodeLabel"));

        horizontalLayout->addWidget(asciiCodeLabel);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        toolButtonShortcutESP = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutESP->setObjectName(QString::fromUtf8("toolButtonShortcutESP"));

        hboxLayout->addWidget(toolButtonShortcutESP);

        toolButtonShortcutTAB = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutTAB->setObjectName(QString::fromUtf8("toolButtonShortcutTAB"));

        hboxLayout->addWidget(toolButtonShortcutTAB);

        toolButtonShortcutComma = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutComma->setObjectName(QString::fromUtf8("toolButtonShortcutComma"));

        hboxLayout->addWidget(toolButtonShortcutComma);

        toolButtonShortcutDotcomma = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutDotcomma->setObjectName(QString::fromUtf8("toolButtonShortcutDotcomma"));

        hboxLayout->addWidget(toolButtonShortcutDotcomma);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);


        horizontalLayout->addLayout(hboxLayout);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(AsciiOpenDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        spinBoxSkipLines = new QSpinBox(AsciiOpenDialog);
        spinBoxSkipLines->setObjectName(QString::fromUtf8("spinBoxSkipLines"));
        spinBoxSkipLines->setMaximum(999);

        horizontalLayout_3->addWidget(spinBoxSkipLines);

        commentLinesSkippedLabel = new QLabel(AsciiOpenDialog);
        commentLinesSkippedLabel->setObjectName(QString::fromUtf8("commentLinesSkippedLabel"));

        horizontalLayout_3->addWidget(commentLinesSkippedLabel);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        extractSFNamesFrom1stLineCheckBox = new QCheckBox(AsciiOpenDialog);
        extractSFNamesFrom1stLineCheckBox->setObjectName(QString::fromUtf8("extractSFNamesFrom1stLineCheckBox"));
        extractSFNamesFrom1stLineCheckBox->setEnabled(false);

        horizontalLayout_3->addWidget(extractSFNamesFrom1stLineCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonFrame = new QFrame(AsciiOpenDialog);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(buttonFrame);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(buttonFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        maxCloudSizeDoubleSpinBox = new QDoubleSpinBox(buttonFrame);
        maxCloudSizeDoubleSpinBox->setObjectName(QString::fromUtf8("maxCloudSizeDoubleSpinBox"));
        maxCloudSizeDoubleSpinBox->setDecimals(2);
        maxCloudSizeDoubleSpinBox->setMinimum(0.01);
        maxCloudSizeDoubleSpinBox->setMaximum(1e+06);
        maxCloudSizeDoubleSpinBox->setValue(128);

        horizontalLayout_5->addWidget(maxCloudSizeDoubleSpinBox);

        horizontalSpacer_5 = new QSpacerItem(157, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        applyButton = new QPushButton(buttonFrame);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_5->addWidget(applyButton);

        applyAllButton = new QPushButton(buttonFrame);
        applyAllButton->setObjectName(QString::fromUtf8("applyAllButton"));

        horizontalLayout_5->addWidget(applyAllButton);

        cancelButton = new QPushButton(buttonFrame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_5->addWidget(cancelButton);


        verticalLayout->addWidget(buttonFrame);


        retranslateUi(AsciiOpenDialog);

        QMetaObject::connectSlotsByName(AsciiOpenDialog);
    } // setupUi

    void retranslateUi(QDialog *AsciiOpenDialog)
    {
        AsciiOpenDialog->setWindowTitle(QApplication::translate("AsciiOpenDialog", "Open Ascii File", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AsciiOpenDialog", "Filename:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AsciiOpenDialog", "Here are the first lines of this file. Choose each column attribution (one cloud at a time):", 0, QApplication::UnicodeUTF8));
        headerLabel->setText(QApplication::translate("AsciiOpenDialog", "Header:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AsciiOpenDialog", "Separator", 0, QApplication::UnicodeUTF8));
        asciiCodeLabel->setText(QApplication::translate("AsciiOpenDialog", "(ASCII code:%i)", 0, QApplication::UnicodeUTF8));
        toolButtonShortcutESP->setText(QApplication::translate("AsciiOpenDialog", "ESP", 0, QApplication::UnicodeUTF8));
        toolButtonShortcutTAB->setText(QApplication::translate("AsciiOpenDialog", "TAB", 0, QApplication::UnicodeUTF8));
        toolButtonShortcutComma->setText(QApplication::translate("AsciiOpenDialog", ",", 0, QApplication::UnicodeUTF8));
        toolButtonShortcutDotcomma->setText(QApplication::translate("AsciiOpenDialog", ";", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AsciiOpenDialog", "Skip lines", 0, QApplication::UnicodeUTF8));
        commentLinesSkippedLabel->setText(QApplication::translate("AsciiOpenDialog", "+ comment/header lines skipped: 0", 0, QApplication::UnicodeUTF8));
        extractSFNamesFrom1stLineCheckBox->setText(QApplication::translate("AsciiOpenDialog", "extract scalar field names from first line", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AsciiOpenDialog", "Max number of points per cloud", 0, QApplication::UnicodeUTF8));
        maxCloudSizeDoubleSpinBox->setSuffix(QApplication::translate("AsciiOpenDialog", " Million", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("AsciiOpenDialog", "Apply", 0, QApplication::UnicodeUTF8));
        applyAllButton->setText(QApplication::translate("AsciiOpenDialog", "Apply all", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("AsciiOpenDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AsciiOpenDialog: public Ui_AsciiOpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENASCIIFILEDLG_H
