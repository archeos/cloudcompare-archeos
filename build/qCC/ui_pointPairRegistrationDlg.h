/********************************************************************************
** Form generated from reading UI file 'pointPairRegistrationDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
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
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
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
    QToolButton *useSphereToolButton;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QTableWidget *alignedPointsTableWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *showReferenceCheckBox;
    QToolButton *unstackRefToolButton;
    QToolButton *typeRefToolButton;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *refPointsTableWidget;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *adjustScaleCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QComboBox *rotComboBox;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *TxCheckBox;
    QCheckBox *TyCheckBox;
    QCheckBox *TzCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *autoZoomCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *alignToolButton;
    QToolButton *resetToolButton;
    QToolButton *validToolButton;
    QToolButton *cancelToolButton;

    void setupUi(QDialog *pointPairRegistrationDlg)
    {
        if (pointPairRegistrationDlg->objectName().isEmpty())
            pointPairRegistrationDlg->setObjectName(QString::fromUtf8("pointPairRegistrationDlg"));
        pointPairRegistrationDlg->resize(390, 380);
        verticalLayout = new QVBoxLayout(pointPairRegistrationDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showAlignedCheckBox = new QCheckBox(pointPairRegistrationDlg);
        showAlignedCheckBox->setObjectName(QString::fromUtf8("showAlignedCheckBox"));
        showAlignedCheckBox->setStyleSheet(QString::fromUtf8("background-color: red; color: white;"));
        showAlignedCheckBox->setChecked(true);

        horizontalLayout->addWidget(showAlignedCheckBox);

        unstackAlignToolButton = new QToolButton(pointPairRegistrationDlg);
        unstackAlignToolButton->setObjectName(QString::fromUtf8("unstackAlignToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/ccUnstack.png"), QSize(), QIcon::Normal, QIcon::Off);
        unstackAlignToolButton->setIcon(icon);

        horizontalLayout->addWidget(unstackAlignToolButton);

        typeAlignToolButton = new QToolButton(pointPairRegistrationDlg);
        typeAlignToolButton->setObjectName(QString::fromUtf8("typeAlignToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccPencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        typeAlignToolButton->setIcon(icon1);

        horizontalLayout->addWidget(typeAlignToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        useSphereToolButton = new QToolButton(pointPairRegistrationDlg);
        useSphereToolButton->setObjectName(QString::fromUtf8("useSphereToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/smallSphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        useSphereToolButton->setIcon(icon2);
        useSphereToolButton->setCheckable(true);

        horizontalLayout->addWidget(useSphereToolButton);

        radiusDoubleSpinBox = new QDoubleSpinBox(pointPairRegistrationDlg);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setEnabled(false);
        radiusDoubleSpinBox->setDecimals(3);
        radiusDoubleSpinBox->setMinimum(0.001);
        radiusDoubleSpinBox->setMaximum(1000);
        radiusDoubleSpinBox->setValue(20);

        horizontalLayout->addWidget(radiusDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        alignedPointsTableWidget = new QTableWidget(pointPairRegistrationDlg);
        if (alignedPointsTableWidget->columnCount() < 5)
            alignedPointsTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (alignedPointsTableWidget->rowCount() < 4)
            alignedPointsTableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        alignedPointsTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        alignedPointsTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        alignedPointsTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        alignedPointsTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        alignedPointsTableWidget->setObjectName(QString::fromUtf8("alignedPointsTableWidget"));
        alignedPointsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        alignedPointsTableWidget->setProperty("showDropIndicator", QVariant(false));
        alignedPointsTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        alignedPointsTableWidget->horizontalHeader()->setDefaultSectionSize(80);
        alignedPointsTableWidget->verticalHeader()->setDefaultSectionSize(18);

        verticalLayout->addWidget(alignedPointsTableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        showReferenceCheckBox = new QCheckBox(pointPairRegistrationDlg);
        showReferenceCheckBox->setObjectName(QString::fromUtf8("showReferenceCheckBox"));
        showReferenceCheckBox->setStyleSheet(QString::fromUtf8("background-color: yellow;"));
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
        if (refPointsTableWidget->columnCount() < 5)
            refPointsTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        if (refPointsTableWidget->rowCount() < 4)
            refPointsTableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        refPointsTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        refPointsTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        refPointsTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        refPointsTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem17);
        refPointsTableWidget->setObjectName(QString::fromUtf8("refPointsTableWidget"));
        refPointsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        refPointsTableWidget->setProperty("showDropIndicator", QVariant(false));
        refPointsTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        refPointsTableWidget->horizontalHeader()->setDefaultSectionSize(80);
        refPointsTableWidget->verticalHeader()->setDefaultSectionSize(18);

        verticalLayout->addWidget(refPointsTableWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        adjustScaleCheckBox = new QCheckBox(pointPairRegistrationDlg);
        adjustScaleCheckBox->setObjectName(QString::fromUtf8("adjustScaleCheckBox"));

        horizontalLayout_4->addWidget(adjustScaleCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label = new QLabel(pointPairRegistrationDlg);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label);

        rotComboBox = new QComboBox(pointPairRegistrationDlg);
        rotComboBox->setObjectName(QString::fromUtf8("rotComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rotComboBox->sizePolicy().hasHeightForWidth());
        rotComboBox->setSizePolicy(sizePolicy1);
        rotComboBox->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_4->addWidget(rotComboBox);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        TxCheckBox = new QCheckBox(pointPairRegistrationDlg);
        TxCheckBox->setObjectName(QString::fromUtf8("TxCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(TxCheckBox->sizePolicy().hasHeightForWidth());
        TxCheckBox->setSizePolicy(sizePolicy2);
        TxCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(TxCheckBox);

        TyCheckBox = new QCheckBox(pointPairRegistrationDlg);
        TyCheckBox->setObjectName(QString::fromUtf8("TyCheckBox"));
        sizePolicy2.setHeightForWidth(TyCheckBox->sizePolicy().hasHeightForWidth());
        TyCheckBox->setSizePolicy(sizePolicy2);
        TyCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(TyCheckBox);

        TzCheckBox = new QCheckBox(pointPairRegistrationDlg);
        TzCheckBox->setObjectName(QString::fromUtf8("TzCheckBox"));
        sizePolicy2.setHeightForWidth(TzCheckBox->sizePolicy().hasHeightForWidth());
        TzCheckBox->setSizePolicy(sizePolicy2);
        TzCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(TzCheckBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        autoZoomCheckBox = new QCheckBox(pointPairRegistrationDlg);
        autoZoomCheckBox->setObjectName(QString::fromUtf8("autoZoomCheckBox"));
        autoZoomCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(autoZoomCheckBox);

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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validToolButton->setIcon(icon3);

        horizontalLayout_2->addWidget(validToolButton);

        cancelToolButton = new QToolButton(pointPairRegistrationDlg);
        cancelToolButton->setObjectName(QString::fromUtf8("cancelToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelToolButton->setIcon(icon4);

        horizontalLayout_2->addWidget(cancelToolButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(pointPairRegistrationDlg);
        QObject::connect(showReferenceCheckBox, SIGNAL(toggled(bool)), unstackRefToolButton, SLOT(setEnabled(bool)));
        QObject::connect(showAlignedCheckBox, SIGNAL(toggled(bool)), unstackAlignToolButton, SLOT(setEnabled(bool)));
        QObject::connect(useSphereToolButton, SIGNAL(toggled(bool)), radiusDoubleSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(pointPairRegistrationDlg);
    } // setupUi

    void retranslateUi(QDialog *pointPairRegistrationDlg)
    {
        pointPairRegistrationDlg->setWindowTitle(QApplication::translate("pointPairRegistrationDlg", "Point list picking", 0, QApplication::UnicodeUTF8));
        showAlignedCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "show 'to align' cloud", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        useSphereToolButton->setToolTip(QApplication::translate("pointPairRegistrationDlg", "Pick spheres instead of single points (for clouds only)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        radiusDoubleSpinBox->setToolTip(QApplication::translate("pointPairRegistrationDlg", "search radius (or the spheres radius if you know it)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radiusDoubleSpinBox->setPrefix(QApplication::translate("pointPairRegistrationDlg", "r = ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = alignedPointsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pointPairRegistrationDlg", "X", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = alignedPointsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("pointPairRegistrationDlg", "Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = alignedPointsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("pointPairRegistrationDlg", "Z", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = alignedPointsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("pointPairRegistrationDlg", "Error", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = alignedPointsTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("pointPairRegistrationDlg", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = alignedPointsTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("pointPairRegistrationDlg", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = alignedPointsTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("pointPairRegistrationDlg", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = alignedPointsTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("pointPairRegistrationDlg", "4", 0, QApplication::UnicodeUTF8));
        showReferenceCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "show 'reference' cloud", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = refPointsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("pointPairRegistrationDlg", "X", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = refPointsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("pointPairRegistrationDlg", "Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = refPointsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("pointPairRegistrationDlg", "Z", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = refPointsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("pointPairRegistrationDlg", "Error", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = refPointsTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("pointPairRegistrationDlg", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = refPointsTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("pointPairRegistrationDlg", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = refPointsTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("pointPairRegistrationDlg", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = refPointsTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("pointPairRegistrationDlg", "4", 0, QApplication::UnicodeUTF8));
        adjustScaleCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "adjust scale", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pointPairRegistrationDlg", "Rotation", 0, QApplication::UnicodeUTF8));
        rotComboBox->clear();
        rotComboBox->insertItems(0, QStringList()
         << QApplication::translate("pointPairRegistrationDlg", "XYZ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pointPairRegistrationDlg", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pointPairRegistrationDlg", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pointPairRegistrationDlg", "Z", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        rotComboBox->setToolTip(QApplication::translate("pointPairRegistrationDlg", "Constrains the rotation around a single axis (warning: experimental)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TxCheckBox->setToolTip(QApplication::translate("pointPairRegistrationDlg", "Constrains the translation along particular axes (warning: experimental)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TxCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "Tx", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        TyCheckBox->setToolTip(QApplication::translate("pointPairRegistrationDlg", "Constrains the translation along particular axes (warning: experimental)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TyCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "Ty", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        TzCheckBox->setToolTip(QApplication::translate("pointPairRegistrationDlg", "Constrains the translation along particular axes (warning: experimental)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TzCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "Tz", 0, QApplication::UnicodeUTF8));
        autoZoomCheckBox->setText(QApplication::translate("pointPairRegistrationDlg", "auto update zoom", 0, QApplication::UnicodeUTF8));
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
