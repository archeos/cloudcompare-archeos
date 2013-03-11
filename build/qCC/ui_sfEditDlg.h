/********************************************************************************
** Form generated from reading UI file 'sfEditDlg.ui'
**
** Created: Sun Mar 10 15:48:34 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SFEDITDLG_H
#define UI_SFEDITDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qxtspanslider.h"

QT_BEGIN_NAMESPACE

class Ui_SFEditDlg
{
public:
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *minValSpinBox;
    QLabel *label;
    QDoubleSpinBox *maxValSpinBox;
    QxtSpanSlider *dispValSlider;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *minSatSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *maxSatSpinBox;
    QxtSpanSlider *satValSlider;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *absSatCheckBox;
    QCheckBox *logScaleCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *releaseBoundariesCheckBox;

    void setupUi(QWidget *SFEditDlg)
    {
        if (SFEditDlg->objectName().isEmpty())
            SFEditDlg->setObjectName(QString::fromUtf8("SFEditDlg"));
        SFEditDlg->resize(300, 164);
        SFEditDlg->setMinimumSize(QSize(240, 0));
        SFEditDlg->setFocusPolicy(Qt::StrongFocus);
        horizontalLayout_4 = new QHBoxLayout(SFEditDlg);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        frame = new QFrame(SFEditDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        minValSpinBox = new QDoubleSpinBox(frame);
        minValSpinBox->setObjectName(QString::fromUtf8("minValSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(minValSpinBox->sizePolicy().hasHeightForWidth());
        minValSpinBox->setSizePolicy(sizePolicy1);
        minValSpinBox->setMinimumSize(QSize(80, 0));
        minValSpinBox->setDecimals(8);

        horizontalLayout->addWidget(minValSpinBox);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        maxValSpinBox = new QDoubleSpinBox(frame);
        maxValSpinBox->setObjectName(QString::fromUtf8("maxValSpinBox"));
        sizePolicy1.setHeightForWidth(maxValSpinBox->sizePolicy().hasHeightForWidth());
        maxValSpinBox->setSizePolicy(sizePolicy1);
        maxValSpinBox->setDecimals(8);

        horizontalLayout->addWidget(maxValSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        dispValSlider = new QxtSpanSlider(frame);
        dispValSlider->setObjectName(QString::fromUtf8("dispValSlider"));
        dispValSlider->setMaximum(100);
        dispValSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(dispValSlider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        minSatSpinBox = new QDoubleSpinBox(frame);
        minSatSpinBox->setObjectName(QString::fromUtf8("minSatSpinBox"));
        sizePolicy1.setHeightForWidth(minSatSpinBox->sizePolicy().hasHeightForWidth());
        minSatSpinBox->setSizePolicy(sizePolicy1);
        minSatSpinBox->setDecimals(8);

        horizontalLayout_2->addWidget(minSatSpinBox);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        maxSatSpinBox = new QDoubleSpinBox(frame);
        maxSatSpinBox->setObjectName(QString::fromUtf8("maxSatSpinBox"));
        sizePolicy1.setHeightForWidth(maxSatSpinBox->sizePolicy().hasHeightForWidth());
        maxSatSpinBox->setSizePolicy(sizePolicy1);
        maxSatSpinBox->setDecimals(8);

        horizontalLayout_2->addWidget(maxSatSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        satValSlider = new QxtSpanSlider(frame);
        satValSlider->setObjectName(QString::fromUtf8("satValSlider"));
        satValSlider->setMaximum(100);
        satValSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(satValSlider);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        absSatCheckBox = new QCheckBox(frame);
        absSatCheckBox->setObjectName(QString::fromUtf8("absSatCheckBox"));

        horizontalLayout_3->addWidget(absSatCheckBox);

        logScaleCheckBox = new QCheckBox(frame);
        logScaleCheckBox->setObjectName(QString::fromUtf8("logScaleCheckBox"));

        horizontalLayout_3->addWidget(logScaleCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        releaseBoundariesCheckBox = new QCheckBox(frame);
        releaseBoundariesCheckBox->setObjectName(QString::fromUtf8("releaseBoundariesCheckBox"));

        verticalLayout->addWidget(releaseBoundariesCheckBox);


        horizontalLayout_4->addWidget(frame);


        retranslateUi(SFEditDlg);

        QMetaObject::connectSlotsByName(SFEditDlg);
    } // setupUi

    void retranslateUi(QWidget *SFEditDlg)
    {
        SFEditDlg->setWindowTitle(QApplication::translate("SFEditDlg", "SF Values", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SFEditDlg", "displayed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dispValSlider->setToolTip(QApplication::translate("SFEditDlg", "Min displayed value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        dispValSlider->setStatusTip(QApplication::translate("SFEditDlg", "Min displayed value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_2->setText(QApplication::translate("SFEditDlg", "color sat.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        satValSlider->setToolTip(QApplication::translate("SFEditDlg", "Min saturation value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        satValSlider->setStatusTip(QApplication::translate("SFEditDlg", "Min saturation value (color gradient start)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        absSatCheckBox->setText(QApplication::translate("SFEditDlg", "absolute saturation", 0, QApplication::UnicodeUTF8));
        logScaleCheckBox->setText(QApplication::translate("SFEditDlg", "log scale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        releaseBoundariesCheckBox->setToolTip(QApplication::translate("SFEditDlg", "Release boundaries (let the user defines them)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        releaseBoundariesCheckBox->setText(QApplication::translate("SFEditDlg", "release boundaries", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SFEditDlg: public Ui_SFEditDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFEDITDLG_H
