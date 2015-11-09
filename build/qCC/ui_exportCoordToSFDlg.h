/********************************************************************************
** Form generated from reading UI file 'exportCoordToSFDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTCOORDTOSFDLG_H
#define UI_EXPORTCOORDTOSFDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportCoordToSFDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *xCheckBox;
    QCheckBox *yCheckBox;
    QCheckBox *zCheckBox;
    QLabel *warningLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportCoordToSFDlg)
    {
        if (ExportCoordToSFDlg->objectName().isEmpty())
            ExportCoordToSFDlg->setObjectName(QString::fromUtf8("ExportCoordToSFDlg"));
        ExportCoordToSFDlg->resize(450, 101);
        verticalLayout = new QVBoxLayout(ExportCoordToSFDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ExportCoordToSFDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        xCheckBox = new QCheckBox(frame);
        xCheckBox->setObjectName(QString::fromUtf8("xCheckBox"));

        horizontalLayout->addWidget(xCheckBox);

        yCheckBox = new QCheckBox(frame);
        yCheckBox->setObjectName(QString::fromUtf8("yCheckBox"));

        horizontalLayout->addWidget(yCheckBox);

        zCheckBox = new QCheckBox(frame);
        zCheckBox->setObjectName(QString::fromUtf8("zCheckBox"));
        zCheckBox->setChecked(true);

        horizontalLayout->addWidget(zCheckBox);


        verticalLayout->addWidget(frame);

        warningLabel = new QLabel(ExportCoordToSFDlg);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        QFont font;
        font.setItalic(true);
        warningLabel->setFont(font);
        warningLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(warningLabel);

        buttonBox = new QDialogButtonBox(ExportCoordToSFDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportCoordToSFDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportCoordToSFDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportCoordToSFDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportCoordToSFDlg);
    } // setupUi

    void retranslateUi(QDialog *ExportCoordToSFDlg)
    {
        ExportCoordToSFDlg->setWindowTitle(QApplication::translate("ExportCoordToSFDlg", "Export coordinates to SF", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExportCoordToSFDlg", "Export", 0, QApplication::UnicodeUTF8));
        xCheckBox->setText(QApplication::translate("ExportCoordToSFDlg", "X", 0, QApplication::UnicodeUTF8));
        yCheckBox->setText(QApplication::translate("ExportCoordToSFDlg", "Y", 0, QApplication::UnicodeUTF8));
        zCheckBox->setText(QApplication::translate("ExportCoordToSFDlg", "Z", 0, QApplication::UnicodeUTF8));
        warningLabel->setText(QApplication::translate("ExportCoordToSFDlg", "Warning, already existing SF(s) with same name will be overwritten", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportCoordToSFDlg: public Ui_ExportCoordToSFDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTCOORDTOSFDLG_H
