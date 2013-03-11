/********************************************************************************
** Form generated from reading UI file 'pointPairRegistrationDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTPAIRREGISTRATIONDLG_H
#define UI_POINTPAIRREGISTRATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pointPairRegistrationDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *showAlignedCheckBox;
    QToolButton *unstackAlignToolButton;
    QToolButton *typeAlignToolButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *alignedPointsTableWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *showReferenceCheckBox;
    QToolButton *unstackRefToolButton;
    QToolButton *typeRefToolButton;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *refPointsTableWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *autoZoomCheckBox;
    QCheckBox *fixedScalecheckBox;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *alignToolButton;
    QToolButton *resetToolButton;
    QToolButton *validToolButton;
    QToolButton *cancelToolButton;

    void setupUi(QDialog *pointPairRegistrationDlg)
    {
        if (pointPairRegistrationDlg->objectName().isEmpty())
            pointPairRegistrationDlg->setObjectName(QString::fromUtf8("pointPairRegistrationDlg"));
        pointPairRegistrationDlg->resize(359, 307);
        verticalLayout = new QVBoxLayout(pointPairRegistrationDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showAlignedCheckBox = new QCheckBox(pointPairRegistrationDlg);
        showAlignedCheckBox->setObjectName(QString::fromUtf8("showAlignedCheckBox"));
        showAlignedCheckBox->setStyleSheet(QString::fromUtf8("background-color: yellow;"));
        showAlignedCheckBox->setChecked(true);

        horizontalLayout->addWidget(showAlignedCheckBox);

        unstackAlignToolButton = new QToolButton(pointPairRegistrationDlg);
        unstackAlignToolButton->setObjectName(QString::fromUtf8("unstackAlignToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Other/images/other/unstack.png"), QSize(), QIcon::Normal, QIcon::Off);
        unstackAlignToolButton->setIcon(icon);

        horizontalLayout->addWidget(unstackAlignToolButton);

        typeAlignToolButton = new QToolButton(pointPairRegistrationDlg);
        typeAlignToolButton->setObjectName(QString::fromUtf8("typeAlignToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/Other/images/other/pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        typeAlignToolButton->setIcon(icon1);

        horizontalLayout->addWidget(typeAlignToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        alignedPointsTableWidget = new QTableWidget(pointPairRegistrationDlg);
        if (alignedPointsTableWidget->columnCount() < 3)
            alignedPointsTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (alignedPointsTableWidget->rowCount() < 3)
            alignedPointsTableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        alignedPointsTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        alignedPointsTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        alignedPointsTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        alignedPointsTableWidget->setObjectName(QString::fromUtf8("alignedPointsTableWidget"));
        alignedPointsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        alignedPointsTableWidget->setProperty("showDropIndicator", QVariant(false));
        alignedPointsTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        alignedPointsTableWidget->verticalHeader()->setDefaultSectionSize(18);

        verticalLayout->addWidget(alignedPointsTableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        showReferenceCheckBox = new QCheckBox(pointPairRegistrationDlg);
        showReferenceCheckBox->setObjectName(QString::fromUtf8("showReferenceCheckBox"));
        showReferenceCheckBox->setStyleSheet(QString::fromUtf8("background-color: red; color: white;"));
        showReferenceCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(showReferenceCheckBox);

        unstackRefToolButton = new QToolButton(pointPairRegistrationDlg);
        unstackRefToolButton->setObjectName(QString::fromUtf8("unstackRefToolButton"));
        unstackRefToolButton->setIcon(icon);

        horizontalLayout_3->addWidget(unstackRefToolButton);

        typeRefToolButton = new QToolButton(pointPairRegistrationDlg);
        typeRefToolButton->setObjectName(QString::fromUtf8("typeRefToolButton"));
        typeRefToolButton->setIcon(icon1);

        horizontalLayout_3->addWidget(typeRefToolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        refPointsTableWidget = new QTableWidget(pointPairRegistrationDlg);
        if (refPointsTableWidget->columnCount() < 3)
            refPointsTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        if (refPointsTableWidget->rowCount() < 3)
            refPointsTableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        refPointsTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        refPointsTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        refPointsTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem11);
        refPointsTableWidget->setObjectName(QString::fromUtf8("refPointsTableWidget"));
        refPointsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        refPointsTableWidget->setProperty("showDropIndicator", QVariant(false));
        refPointsTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        refPointsTableWidget->verticalHeader()->setDefaultSectionSize(18);

        verticalLayout->addWidget(refPointsTableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        autoZoomCheckBox = new QCheckBox(pointPairRegistrationDlg);
        autoZoomCheckBox->setObjectName(QString::fromUtf8("autoZoomCheckBox"));
        autoZoomCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(autoZoomCheckBox);

        fixedScalecheckBox = new QCheckBox(pointPairRegistrationDlg);
        fixedScalecheckBox->setObjectName(QString::fromUtf8("fixedScalecheckBox"));
        fixedScalecheckBox->setChecked(true);

        horizontalLayout_2->addWidget(fixedScalecheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        alignToolButton = new QToolButton(pointPairRegistrationDlg);
        alignToolButton->setObjectName(QString::fromUtf8("alignToolButton"));
        alignToolButton->setEnabled(false);
        alignToolButton->setMinimumSize(QSize(0, 22));

        horizontalLayout_2->addWidget(alignToolButton);

        resetToolButton = new QToolButton(pointPairRegistrationDlg);
        resetToolButton->setObjectName(QString::fromUtf8("resetToolButton"));
        resetToolButton->setEnabled(false);

        horizontalLayout_2->addWidget(resetToolButton);

        validToolButton = new QToolButton(pointPairRegistrationDlg);
        validToolButton->setObjectName(QString::fromUtf8("validToolButton"));
        validToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/Comp/images/comp/validate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validToolButton->setIcon(icon2);

        horizontalLayout_2->addWidget(validToolButton);

        cancelToolButton = new QToolButton(pointPairRegistrationDlg);
        cancelToolButton->setObjectName(QString::fromUtf8("cancelToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/Comp/images/comp/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelToolButton->setIcon(icon3);

        horizontalLayout_2->addWidget(cancelToolButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(pointPairRegistrationDlg);
        QObject::connect(showReferenceCheckBox, SIGNAL(toggled(bool)), unstackRefToolButton, SLOT(setEnabled(bool)));
        QObject::connect(showAlignedCheckBox, SIGNAL(toggled(bool)), unstackAlignToolButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(pointPairRegistrationDlg);
    } // setupUi

    void retranslateUi(QDialog *pointPairRegistrationDlg)
    {
        pointPairRegistrationDlg->setWindowTitle(QApplication::translate("pointPairRegistrationDlg", "Point list picking", 0, QApplication::UnicodeUTF8));
        showAlignedCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "show aligned cloud", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = alignedPointsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pointPairRegistrationDlg", "X", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = alignedPointsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("pointPairRegistrationDlg", "Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = alignedPointsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("pointPairRegistrationDlg", "Z", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = alignedPointsTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("pointPairRegistrationDlg", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = alignedPointsTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("pointPairRegistrationDlg", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = alignedPointsTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("pointPairRegistrationDlg", "3", 0, QApplication::UnicodeUTF8));
        showReferenceCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "show reference cloud", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = refPointsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("pointPairRegistrationDlg", "X", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = refPointsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("pointPairRegistrationDlg", "Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = refPointsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("pointPairRegistrationDlg", "Z", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = refPointsTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("pointPairRegistrationDlg", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = refPointsTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("pointPairRegistrationDlg", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = refPointsTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("pointPairRegistrationDlg", "3", 0, QApplication::UnicodeUTF8));
        autoZoomCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "auto update zoom", 0, QApplication::UnicodeUTF8));
        fixedScalecheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "fixed scale", 0, QApplication::UnicodeUTF8));
        alignToolButton->setText(QApplication::translate("pointPairRegistrationDlg", "align", 0, QApplication::UnicodeUTF8));
        resetToolButton->setText(QApplication::translate("pointPairRegistrationDlg", "reset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        validToolButton->setStatusTip(QApplication::translate("pointPairRegistrationDlg", "Convert list to new cloud (and close dialog)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        validToolButton->setWhatsThis(QApplication::translate("pointPairRegistrationDlg", "Convert list to new cloud (and close dialog)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        validToolButton->setText(QApplication::translate("pointPairRegistrationDlg", "to cloud", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cancelToolButton->setToolTip(QApplication::translate("pointPairRegistrationDlg", "Close dialog (list will be lost)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cancelToolButton->setStatusTip(QApplication::translate("pointPairRegistrationDlg", "Close dialog (list will be lost)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        cancelToolButton->setText(QApplication::translate("pointPairRegistrationDlg", "stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pointPairRegistrationDlg: public Ui_pointPairRegistrationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTPAIRREGISTRATIONDLG_H
