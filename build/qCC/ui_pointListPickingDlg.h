/********************************************************************************
** Form generated from reading UI file 'pointListPickingDlg.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTLISTPICKINGDLG_H
#define UI_POINTLISTPICKINGDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
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

class Ui_PointListPickingDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *revertToolButton;
    QToolButton *exportToolButton;
    QToolButton *validToolButton;
    QToolButton *cancelToolButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *countLineEdit;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *markerSizeSpinBox;
    QLabel *label_3;
    QSpinBox *startIndexSpinBox;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *PointListPickingDlg)
    {
        if (PointListPickingDlg->objectName().isEmpty())
            PointListPickingDlg->setObjectName(QString::fromUtf8("PointListPickingDlg"));
        PointListPickingDlg->resize(500, 227);
        PointListPickingDlg->setMinimumSize(QSize(500, 0));
        verticalLayout = new QVBoxLayout(PointListPickingDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        revertToolButton = new QToolButton(PointListPickingDlg);
        revertToolButton->setObjectName(QString::fromUtf8("revertToolButton"));
        revertToolButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Comp/images/comp/raz.png"), QSize(), QIcon::Normal, QIcon::Off);
        revertToolButton->setIcon(icon);

        horizontalLayout->addWidget(revertToolButton);

        exportToolButton = new QToolButton(PointListPickingDlg);
        exportToolButton->setObjectName(QString::fromUtf8("exportToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/Menu/images/menu/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportToolButton->setIcon(icon1);
        exportToolButton->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout->addWidget(exportToolButton);

        validToolButton = new QToolButton(PointListPickingDlg);
        validToolButton->setObjectName(QString::fromUtf8("validToolButton"));
        validToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/Comp/images/comp/validate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validToolButton->setIcon(icon2);

        horizontalLayout->addWidget(validToolButton);

        cancelToolButton = new QToolButton(PointListPickingDlg);
        cancelToolButton->setObjectName(QString::fromUtf8("cancelToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/Comp/images/comp/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelToolButton->setIcon(icon3);

        horizontalLayout->addWidget(cancelToolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(PointListPickingDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        countLineEdit = new QLineEdit(PointListPickingDlg);
        countLineEdit->setObjectName(QString::fromUtf8("countLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(countLineEdit->sizePolicy().hasHeightForWidth());
        countLineEdit->setSizePolicy(sizePolicy);
        countLineEdit->setMaximumSize(QSize(40, 16777215));
        countLineEdit->setMaxLength(255);
        countLineEdit->setFrame(false);
        countLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(countLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(PointListPickingDlg);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->horizontalHeader()->setDefaultSectionSize(115);
        tableWidget->verticalHeader()->setDefaultSectionSize(18);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PointListPickingDlg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        markerSizeSpinBox = new QSpinBox(PointListPickingDlg);
        markerSizeSpinBox->setObjectName(QString::fromUtf8("markerSizeSpinBox"));
        markerSizeSpinBox->setMinimum(1);
        markerSizeSpinBox->setMaximum(99);
        markerSizeSpinBox->setValue(4);

        horizontalLayout_2->addWidget(markerSizeSpinBox);

        label_3 = new QLabel(PointListPickingDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        startIndexSpinBox = new QSpinBox(PointListPickingDlg);
        startIndexSpinBox->setObjectName(QString::fromUtf8("startIndexSpinBox"));
        startIndexSpinBox->setMaximum(1000000000);
        startIndexSpinBox->setSingleStep(1);
        startIndexSpinBox->setValue(1);

        horizontalLayout_2->addWidget(startIndexSpinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PointListPickingDlg);

        QMetaObject::connectSlotsByName(PointListPickingDlg);
    } // setupUi

    void retranslateUi(QDialog *PointListPickingDlg)
    {
        PointListPickingDlg->setWindowTitle(QApplication::translate("PointListPickingDlg", "Point list picking", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        revertToolButton->setStatusTip(QApplication::translate("PointListPickingDlg", "Remove last entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        revertToolButton->setWhatsThis(QApplication::translate("PointListPickingDlg", "Remove last entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        revertToolButton->setText(QApplication::translate("PointListPickingDlg", "remove last", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exportToolButton->setToolTip(QApplication::translate("PointListPickingDlg", "export to ASCII file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        exportToolButton->setStatusTip(QApplication::translate("PointListPickingDlg", "export to ASCII file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        exportToolButton->setText(QApplication::translate("PointListPickingDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        validToolButton->setStatusTip(QApplication::translate("PointListPickingDlg", "Convert list to new cloud (and close dialog)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        validToolButton->setWhatsThis(QApplication::translate("PointListPickingDlg", "Convert list to new cloud (and close dialog)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        validToolButton->setText(QApplication::translate("PointListPickingDlg", "to cloud", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cancelToolButton->setToolTip(QApplication::translate("PointListPickingDlg", "Close dialog (list will be lost)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cancelToolButton->setStatusTip(QApplication::translate("PointListPickingDlg", "Close dialog (list will be lost)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        cancelToolButton->setText(QApplication::translate("PointListPickingDlg", "stop", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PointListPickingDlg", "count", 0, QApplication::UnicodeUTF8));
        countLineEdit->setText(QApplication::translate("PointListPickingDlg", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PointListPickingDlg", "Index", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PointListPickingDlg", "X", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PointListPickingDlg", "Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PointListPickingDlg", "Z", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PointListPickingDlg", "marker size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PointListPickingDlg", "local start index", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PointListPickingDlg: public Ui_PointListPickingDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTLISTPICKINGDLG_H
