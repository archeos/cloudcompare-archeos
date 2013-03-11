/********************************************************************************
** Form generated from reading UI file 'openAsciiFileDlg.ui'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: Qt User Interface Compiler version 4.8.2
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
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
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
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *extractSFNamesFrom1stLineCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AsciiOpenDialog)
    {
        if (AsciiOpenDialog->objectName().isEmpty())
            AsciiOpenDialog->setObjectName(QString::fromUtf8("AsciiOpenDialog"));
        AsciiOpenDialog->resize(600, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
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
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditFileName->sizePolicy().hasHeightForWidth());
        lineEditFileName->setSizePolicy(sizePolicy1);
        lineEditFileName->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditFileName);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(AsciiOpenDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

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
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditSeparator->sizePolicy().hasHeightForWidth());
        lineEditSeparator->setSizePolicy(sizePolicy2);
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

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        extractSFNamesFrom1stLineCheckBox = new QCheckBox(AsciiOpenDialog);
        extractSFNamesFrom1stLineCheckBox->setObjectName(QString::fromUtf8("extractSFNamesFrom1stLineCheckBox"));
        extractSFNamesFrom1stLineCheckBox->setEnabled(false);

        verticalLayout->addWidget(extractSFNamesFrom1stLineCheckBox);

        buttonBox = new QDialogButtonBox(AsciiOpenDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AsciiOpenDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), AsciiOpenDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AsciiOpenDialog);
    } // setupUi

    void retranslateUi(QDialog *AsciiOpenDialog)
    {
        AsciiOpenDialog->setWindowTitle(QApplication::translate("AsciiOpenDialog", "Open Ascii File", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AsciiOpenDialog", "Filename:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AsciiOpenDialog", "Here are the first lines of this file. Choose each column attribution (one cloud at a time):", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AsciiOpenDialog", "Separator", 0, QApplication::UnicodeUTF8));
        asciiCodeLabel->setText(QApplication::translate("AsciiOpenDialog", "(ASCII code:%i)", 0, QApplication::UnicodeUTF8));
        toolButtonShortcutESP->setText(QApplication::translate("AsciiOpenDialog", "ESP", 0, QApplication::UnicodeUTF8));
        toolButtonShortcutTAB->setText(QApplication::translate("AsciiOpenDialog", "TAB", 0, QApplication::UnicodeUTF8));
        toolButtonShortcutComma->setText(QApplication::translate("AsciiOpenDialog", ",", 0, QApplication::UnicodeUTF8));
        toolButtonShortcutDotcomma->setText(QApplication::translate("AsciiOpenDialog", ";", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AsciiOpenDialog", "Skip lines", 0, QApplication::UnicodeUTF8));
        extractSFNamesFrom1stLineCheckBox->setText(QApplication::translate("AsciiOpenDialog", "extract scalar field names from first line", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AsciiOpenDialog: public Ui_AsciiOpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENASCIIFILEDLG_H
