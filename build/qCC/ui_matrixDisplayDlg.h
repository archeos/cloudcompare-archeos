/********************************************************************************
** Form generated from reading UI file 'matrixDisplayDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIXDISPLAYDLG_H
#define UI_MATRIXDISPLAYDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MatrixDisplayDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *Export;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTextEdit *maxTextEdit;
    QWidget *tab_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *axisLabel;
    QLineEdit *angleLabel;
    QLineEdit *centerLabel;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *exportToAsciiPushButton;
    QPushButton *exportToClipboardPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MatrixDisplayDlg)
    {
        if (MatrixDisplayDlg->objectName().isEmpty())
            MatrixDisplayDlg->setObjectName(QString::fromUtf8("MatrixDisplayDlg"));
        MatrixDisplayDlg->resize(250, 129);
        MatrixDisplayDlg->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_2 = new QVBoxLayout(MatrixDisplayDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Export = new QTabWidget(MatrixDisplayDlg);
        Export->setObjectName(QString::fromUtf8("Export"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        maxTextEdit = new QTextEdit(tab);
        maxTextEdit->setObjectName(QString::fromUtf8("maxTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxTextEdit->sizePolicy().hasHeightForWidth());
        maxTextEdit->setSizePolicy(sizePolicy);
        maxTextEdit->setMaximumSize(QSize(16777215, 76));

        verticalLayout->addWidget(maxTextEdit);

        Export->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayout = new QFormLayout(tab_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        axisLabel = new QLineEdit(tab_2);
        axisLabel->setObjectName(QString::fromUtf8("axisLabel"));
        axisLabel->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, axisLabel);

        angleLabel = new QLineEdit(tab_2);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));
        angleLabel->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, angleLabel);

        centerLabel = new QLineEdit(tab_2);
        centerLabel->setObjectName(QString::fromUtf8("centerLabel"));
        centerLabel->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, centerLabel);

        Export->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        exportToAsciiPushButton = new QPushButton(tab_3);
        exportToAsciiPushButton->setObjectName(QString::fromUtf8("exportToAsciiPushButton"));

        verticalLayout_3->addWidget(exportToAsciiPushButton);

        exportToClipboardPushButton = new QPushButton(tab_3);
        exportToClipboardPushButton->setObjectName(QString::fromUtf8("exportToClipboardPushButton"));

        verticalLayout_3->addWidget(exportToClipboardPushButton);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        Export->addTab(tab_3, QString());

        verticalLayout_2->addWidget(Export);


        retranslateUi(MatrixDisplayDlg);

        Export->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MatrixDisplayDlg);
    } // setupUi

    void retranslateUi(QWidget *MatrixDisplayDlg)
    {
        MatrixDisplayDlg->setWindowTitle(QApplication::translate("MatrixDisplayDlg", "Matrix", 0, QApplication::UnicodeUTF8));
        maxTextEdit->setHtml(QApplication::translate("MatrixDisplayDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">1 0 0 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 1 0 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 0 1 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">"
                        "0 0 0 1</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        Export->setTabText(Export->indexOf(tab), QApplication::translate("MatrixDisplayDlg", "Matrix", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MatrixDisplayDlg", "Axis", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MatrixDisplayDlg", "Angle", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MatrixDisplayDlg", "Center", 0, QApplication::UnicodeUTF8));
        axisLabel->setText(QApplication::translate("MatrixDisplayDlg", "0 ; 0 ; 1", 0, QApplication::UnicodeUTF8));
        angleLabel->setText(QApplication::translate("MatrixDisplayDlg", "15.65 deg.", 0, QApplication::UnicodeUTF8));
        centerLabel->setText(QApplication::translate("MatrixDisplayDlg", "0 ; 0;  0", 0, QApplication::UnicodeUTF8));
        Export->setTabText(Export->indexOf(tab_2), QApplication::translate("MatrixDisplayDlg", "Axis/Angle", 0, QApplication::UnicodeUTF8));
        exportToAsciiPushButton->setText(QApplication::translate("MatrixDisplayDlg", "ASCII", 0, QApplication::UnicodeUTF8));
        exportToClipboardPushButton->setText(QApplication::translate("MatrixDisplayDlg", "Clipboard", 0, QApplication::UnicodeUTF8));
        Export->setTabText(Export->indexOf(tab_3), QApplication::translate("MatrixDisplayDlg", "Export", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MatrixDisplayDlg: public Ui_MatrixDisplayDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIXDISPLAYDLG_H
