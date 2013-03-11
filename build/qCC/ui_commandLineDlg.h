/********************************************************************************
** Form generated from reading UI file 'commandLineDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDLINEDLG_H
#define UI_COMMANDLINEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_commandLineDlg
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *consoleWidget;

    void setupUi(QDialog *commandLineDlg)
    {
        if (commandLineDlg->objectName().isEmpty())
            commandLineDlg->setObjectName(QString::fromUtf8("commandLineDlg"));
        commandLineDlg->resize(800, 250);
        verticalLayout = new QVBoxLayout(commandLineDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        consoleWidget = new QListWidget(commandLineDlg);
        consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(consoleWidget->sizePolicy().hasHeightForWidth());
        consoleWidget->setSizePolicy(sizePolicy);
        consoleWidget->setMinimumSize(QSize(0, 80));
        consoleWidget->setAlternatingRowColors(true);
        consoleWidget->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(consoleWidget);


        retranslateUi(commandLineDlg);

        QMetaObject::connectSlotsByName(commandLineDlg);
    } // setupUi

    void retranslateUi(QDialog *commandLineDlg)
    {
        commandLineDlg->setWindowTitle(QApplication::translate("commandLineDlg", "CloudCompare - command line mode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class commandLineDlg: public Ui_commandLineDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDLINEDLG_H
