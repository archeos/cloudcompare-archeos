/********************************************************************************
** Form generated from reading UI file 'clippingBoxDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPPINGBOXDLG_H
#define UI_CLIPPINGBOXDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClippingBoxDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *showInteractorsCheckBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *resetButton;
    QToolButton *closeButton;
    QGroupBox *thicknessGroupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *thickXDoubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *thickYDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *thickZDoubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *editBoxToolButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *contourGroupBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *extractContourToolButton;
    QToolButton *removeLastContourToolButton;
    QGroupBox *slicesGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *exportButton;
    QToolButton *exportMultButton;
    QSpacerItem *horizontalSpacer_6;
    QFrame *viewButtonsFrame;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *viewLeftToolButton;
    QToolButton *viewRightToolButton;
    QToolButton *viewFrontToolButton;
    QToolButton *viewBackToolButton;
    QToolButton *viewDownToolButton;
    QToolButton *viewUpToolButton;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *minusXShiftToolButton;
    QToolButton *plusXShiftToolButton;
    QToolButton *minusYShiftToolButton;
    QToolButton *plusYShiftToolButton;
    QToolButton *minusZShiftToolButton;
    QToolButton *plusZShiftToolButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *ClippingBoxDlg)
    {
        if (ClippingBoxDlg->objectName().isEmpty())
            ClippingBoxDlg->setObjectName(QString::fromUtf8("ClippingBoxDlg"));
        ClippingBoxDlg->resize(220, 322);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClippingBoxDlg->sizePolicy().hasHeightForWidth());
        ClippingBoxDlg->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ClippingBoxDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        showInteractorsCheckBox = new QCheckBox(ClippingBoxDlg);
        showInteractorsCheckBox->setObjectName(QString::fromUtf8("showInteractorsCheckBox"));
        showInteractorsCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(showInteractorsCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        resetButton = new QToolButton(ClippingBoxDlg);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon);

        horizontalLayout_2->addWidget(resetButton);

        closeButton = new QToolButton(ClippingBoxDlg);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        thicknessGroupBox = new QGroupBox(ClippingBoxDlg);
        thicknessGroupBox->setObjectName(QString::fromUtf8("thicknessGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(thicknessGroupBox->sizePolicy().hasHeightForWidth());
        thicknessGroupBox->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(thicknessGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(thicknessGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        thickXDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickXDoubleSpinBox->setObjectName(QString::fromUtf8("thickXDoubleSpinBox"));
        thickXDoubleSpinBox->setDecimals(8);
        thickXDoubleSpinBox->setMaximum(1e+09);

        formLayout->setWidget(0, QFormLayout::FieldRole, thickXDoubleSpinBox);

        label_3 = new QLabel(thicknessGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        thickYDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickYDoubleSpinBox->setObjectName(QString::fromUtf8("thickYDoubleSpinBox"));
        thickYDoubleSpinBox->setDecimals(8);
        thickYDoubleSpinBox->setMaximum(1e+09);

        formLayout->setWidget(1, QFormLayout::FieldRole, thickYDoubleSpinBox);

        label_4 = new QLabel(thicknessGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        thickZDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickZDoubleSpinBox->setObjectName(QString::fromUtf8("thickZDoubleSpinBox"));
        thickZDoubleSpinBox->setDecimals(8);
        thickZDoubleSpinBox->setMaximum(1e+09);

        formLayout->setWidget(2, QFormLayout::FieldRole, thickZDoubleSpinBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        editBoxToolButton = new QToolButton(thicknessGroupBox);
        editBoxToolButton->setObjectName(QString::fromUtf8("editBoxToolButton"));

        horizontalLayout_6->addWidget(editBoxToolButton);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_6);


        verticalLayout->addWidget(thicknessGroupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        contourGroupBox = new QGroupBox(ClippingBoxDlg);
        contourGroupBox->setObjectName(QString::fromUtf8("contourGroupBox"));
        horizontalLayout = new QHBoxLayout(contourGroupBox);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        extractContourToolButton = new QToolButton(contourGroupBox);
        extractContourToolButton->setObjectName(QString::fromUtf8("extractContourToolButton"));
        extractContourToolButton->setMinimumSize(QSize(25, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/smallPolygonSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        extractContourToolButton->setIcon(icon2);

        horizontalLayout->addWidget(extractContourToolButton);

        removeLastContourToolButton = new QToolButton(contourGroupBox);
        removeLastContourToolButton->setObjectName(QString::fromUtf8("removeLastContourToolButton"));
        removeLastContourToolButton->setMinimumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/smallRevert.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeLastContourToolButton->setIcon(icon3);

        horizontalLayout->addWidget(removeLastContourToolButton);


        horizontalLayout_3->addWidget(contourGroupBox);

        slicesGroupBox = new QGroupBox(ClippingBoxDlg);
        slicesGroupBox->setObjectName(QString::fromUtf8("slicesGroupBox"));
        horizontalLayout_5 = new QHBoxLayout(slicesGroupBox);
        horizontalLayout_5->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        exportButton = new QToolButton(slicesGroupBox);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setMinimumSize(QSize(25, 25));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/ccClippingBoxSingleExport.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportButton->setIcon(icon4);

        horizontalLayout_5->addWidget(exportButton);

        exportMultButton = new QToolButton(slicesGroupBox);
        exportMultButton->setObjectName(QString::fromUtf8("exportMultButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/ccClippingBoxMultExport.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportMultButton->setIcon(icon5);

        horizontalLayout_5->addWidget(exportMultButton);


        horizontalLayout_3->addWidget(slicesGroupBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        viewButtonsFrame = new QFrame(ClippingBoxDlg);
        viewButtonsFrame->setObjectName(QString::fromUtf8("viewButtonsFrame"));
        sizePolicy1.setHeightForWidth(viewButtonsFrame->sizePolicy().hasHeightForWidth());
        viewButtonsFrame->setSizePolicy(sizePolicy1);
        viewButtonsFrame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_8 = new QHBoxLayout(viewButtonsFrame);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        viewLeftToolButton = new QToolButton(viewButtonsFrame);
        viewLeftToolButton->setObjectName(QString::fromUtf8("viewLeftToolButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewLeftToolButton->setIcon(icon6);

        horizontalLayout_8->addWidget(viewLeftToolButton);

        viewRightToolButton = new QToolButton(viewButtonsFrame);
        viewRightToolButton->setObjectName(QString::fromUtf8("viewRightToolButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewRightToolButton->setIcon(icon7);

        horizontalLayout_8->addWidget(viewRightToolButton);

        viewFrontToolButton = new QToolButton(viewButtonsFrame);
        viewFrontToolButton->setObjectName(QString::fromUtf8("viewFrontToolButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewFrontToolButton->setIcon(icon8);

        horizontalLayout_8->addWidget(viewFrontToolButton);

        viewBackToolButton = new QToolButton(viewButtonsFrame);
        viewBackToolButton->setObjectName(QString::fromUtf8("viewBackToolButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewBackToolButton->setIcon(icon9);

        horizontalLayout_8->addWidget(viewBackToolButton);

        viewDownToolButton = new QToolButton(viewButtonsFrame);
        viewDownToolButton->setObjectName(QString::fromUtf8("viewDownToolButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewDownToolButton->setIcon(icon10);

        horizontalLayout_8->addWidget(viewDownToolButton);

        viewUpToolButton = new QToolButton(viewButtonsFrame);
        viewUpToolButton->setObjectName(QString::fromUtf8("viewUpToolButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewUpToolButton->setIcon(icon11);

        horizontalLayout_8->addWidget(viewUpToolButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(viewButtonsFrame);

        groupBox = new QGroupBox(ClippingBoxDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        minusXShiftToolButton = new QToolButton(groupBox);
        minusXShiftToolButton->setObjectName(QString::fromUtf8("minusXShiftToolButton"));
        sizePolicy.setHeightForWidth(minusXShiftToolButton->sizePolicy().hasHeightForWidth());
        minusXShiftToolButton->setSizePolicy(sizePolicy);
        minusXShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(minusXShiftToolButton);

        plusXShiftToolButton = new QToolButton(groupBox);
        plusXShiftToolButton->setObjectName(QString::fromUtf8("plusXShiftToolButton"));
        sizePolicy.setHeightForWidth(plusXShiftToolButton->sizePolicy().hasHeightForWidth());
        plusXShiftToolButton->setSizePolicy(sizePolicy);
        plusXShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(plusXShiftToolButton);

        minusYShiftToolButton = new QToolButton(groupBox);
        minusYShiftToolButton->setObjectName(QString::fromUtf8("minusYShiftToolButton"));
        sizePolicy.setHeightForWidth(minusYShiftToolButton->sizePolicy().hasHeightForWidth());
        minusYShiftToolButton->setSizePolicy(sizePolicy);
        minusYShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(minusYShiftToolButton);

        plusYShiftToolButton = new QToolButton(groupBox);
        plusYShiftToolButton->setObjectName(QString::fromUtf8("plusYShiftToolButton"));
        sizePolicy.setHeightForWidth(plusYShiftToolButton->sizePolicy().hasHeightForWidth());
        plusYShiftToolButton->setSizePolicy(sizePolicy);
        plusYShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(plusYShiftToolButton);

        minusZShiftToolButton = new QToolButton(groupBox);
        minusZShiftToolButton->setObjectName(QString::fromUtf8("minusZShiftToolButton"));
        sizePolicy.setHeightForWidth(minusZShiftToolButton->sizePolicy().hasHeightForWidth());
        minusZShiftToolButton->setSizePolicy(sizePolicy);
        minusZShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(minusZShiftToolButton);

        plusZShiftToolButton = new QToolButton(groupBox);
        plusZShiftToolButton->setObjectName(QString::fromUtf8("plusZShiftToolButton"));
        sizePolicy.setHeightForWidth(plusZShiftToolButton->sizePolicy().hasHeightForWidth());
        plusZShiftToolButton->setSizePolicy(sizePolicy);
        plusZShiftToolButton->setMinimumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(plusZShiftToolButton);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ClippingBoxDlg);

        QMetaObject::connectSlotsByName(ClippingBoxDlg);
    } // setupUi

    void retranslateUi(QDialog *ClippingBoxDlg)
    {
        ClippingBoxDlg->setWindowTitle(QApplication::translate("ClippingBoxDlg", "Clipping Box", 0, QApplication::UnicodeUTF8));
        showInteractorsCheckBox->setText(QApplication::translate("ClippingBoxDlg", "Show interactors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Reset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        resetButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Reset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        closeButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Close", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        closeButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Close", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        thicknessGroupBox->setTitle(QApplication::translate("ClippingBoxDlg", "Box thickness", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ClippingBoxDlg", "X", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ClippingBoxDlg", "Y", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ClippingBoxDlg", "Z", 0, QApplication::UnicodeUTF8));
        editBoxToolButton->setText(QApplication::translate("ClippingBoxDlg", "advanced", 0, QApplication::UnicodeUTF8));
        contourGroupBox->setTitle(QApplication::translate("ClippingBoxDlg", "Contour", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extractContourToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Extracts the contour as a polyline (concave hull)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        extractContourToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Extracts the contour as a polyline (concave hull)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        removeLastContourToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Removes last extracted contour", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        removeLastContourToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Removes last extracted contour", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        slicesGroupBox->setTitle(QApplication::translate("ClippingBoxDlg", "Slices", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exportButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Export selection as a new cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        exportButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Export selection as a new cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        exportMultButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Export multiple slices by repeating the process along one or several dimensions (+ contour extraction)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        viewLeftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'left' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewLeftToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'left' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewRightToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'right' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewRightToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'right' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewFrontToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'front' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewFrontToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'front' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewBackToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'back' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewBackToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'back' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewDownToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'down' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewDownToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'down' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        viewUpToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Set 'up' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewUpToolButton->setStatusTip(QApplication::translate("ClippingBoxDlg", "Set 'up' view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groupBox->setTitle(QApplication::translate("ClippingBoxDlg", "Shift box", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minusXShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its X dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        minusXShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "-X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        plusXShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its X dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        plusXShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "+X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minusYShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its Y dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        minusYShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "-Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        plusYShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its Y dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        plusYShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "+Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minusZShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its Z dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        minusZShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "-Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        plusZShiftToolButton->setToolTip(QApplication::translate("ClippingBoxDlg", "Shift box along its Z dimension", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        plusZShiftToolButton->setText(QApplication::translate("ClippingBoxDlg", "+Z", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ClippingBoxDlg: public Ui_ClippingBoxDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPPINGBOXDLG_H
