/********************************************************************************
** Form generated from reading UI file 'contourExtractorDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTOUREXTRACTORDLG_H
#define UI_CONTOUREXTRACTORDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ContourExtractorDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *viewFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *messageLabel;
    QCheckBox *autoCheckBox;
    QPushButton *nextPushButton;
    QPushButton *skipPushButton;

    void setupUi(QDialog *ContourExtractorDlg)
    {
        if (ContourExtractorDlg->objectName().isEmpty())
            ContourExtractorDlg->setObjectName(QString::fromUtf8("ContourExtractorDlg"));
        ContourExtractorDlg->resize(836, 682);
        verticalLayout = new QVBoxLayout(ContourExtractorDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        viewFrame = new QFrame(ContourExtractorDlg);
        viewFrame->setObjectName(QString::fromUtf8("viewFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewFrame->sizePolicy().hasHeightForWidth());
        viewFrame->setSizePolicy(sizePolicy);
        viewFrame->setMinimumSize(QSize(512, 512));
        viewFrame->setFrameShape(QFrame::StyledPanel);
        viewFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(viewFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ContourExtractorDlg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        messageLabel = new QLabel(ContourExtractorDlg);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(messageLabel);

        autoCheckBox = new QCheckBox(ContourExtractorDlg);
        autoCheckBox->setObjectName(QString::fromUtf8("autoCheckBox"));

        horizontalLayout->addWidget(autoCheckBox);

        nextPushButton = new QPushButton(ContourExtractorDlg);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));

        horizontalLayout->addWidget(nextPushButton);

        skipPushButton = new QPushButton(ContourExtractorDlg);
        skipPushButton->setObjectName(QString::fromUtf8("skipPushButton"));

        horizontalLayout->addWidget(skipPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ContourExtractorDlg);

        QMetaObject::connectSlotsByName(ContourExtractorDlg);
    } // setupUi

    void retranslateUi(QDialog *ContourExtractorDlg)
    {
        ContourExtractorDlg->setWindowTitle(QApplication::translate("ContourExtractorDlg", "Contour Extractor Visaul Debug", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ContourExtractorDlg", "Message", 0, QApplication::UnicodeUTF8));
        messageLabel->setText(QApplication::translate("ContourExtractorDlg", "no message", 0, QApplication::UnicodeUTF8));
        autoCheckBox->setText(QApplication::translate("ContourExtractorDlg", "auto", 0, QApplication::UnicodeUTF8));
        nextPushButton->setText(QApplication::translate("ContourExtractorDlg", "Next", 0, QApplication::UnicodeUTF8));
        skipPushButton->setText(QApplication::translate("ContourExtractorDlg", "Skip", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ContourExtractorDlg: public Ui_ContourExtractorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTOUREXTRACTORDLG_H
