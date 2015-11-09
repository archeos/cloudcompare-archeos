/********************************************************************************
** Form generated from reading UI file 'sfEditDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
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
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SFEditDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QFrame *slidersFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *minValSpinBox;
    QLabel *dispLabel;
    QDoubleSpinBox *maxValSpinBox;
    QFrame *histoFrame;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *minSatSpinBox;
    QLabel *satLabel;
    QDoubleSpinBox *maxSatSpinBox;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *nanInGreyCheckBox;
    QCheckBox *alwaysShow0CheckBox;
    QCheckBox *symmetricalScaleCheckBox;
    QCheckBox *logScaleCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SFEditDlg)
    {
        if (SFEditDlg->objectName().isEmpty())
            SFEditDlg->setObjectName(QString::fromUtf8("SFEditDlg"));
        SFEditDlg->resize(259, 200);
        SFEditDlg->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_2 = new QVBoxLayout(SFEditDlg);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(SFEditDlg);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        slidersFrame = new QFrame(tab);
        slidersFrame->setObjectName(QString::fromUtf8("slidersFrame"));
        verticalLayout = new QVBoxLayout(slidersFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        minValSpinBox = new QDoubleSpinBox(slidersFrame);
        minValSpinBox->setObjectName(QString::fromUtf8("minValSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minValSpinBox->sizePolicy().hasHeightForWidth());
        minValSpinBox->setSizePolicy(sizePolicy);
        minValSpinBox->setMinimumSize(QSize(80, 0));
        minValSpinBox->setDecimals(8);

        horizontalLayout->addWidget(minValSpinBox);

        dispLabel = new QLabel(slidersFrame);
        dispLabel->setObjectName(QString::fromUtf8("dispLabel"));

        horizontalLayout->addWidget(dispLabel);

        maxValSpinBox = new QDoubleSpinBox(slidersFrame);
        maxValSpinBox->setObjectName(QString::fromUtf8("maxValSpinBox"));
        sizePolicy.setHeightForWidth(maxValSpinBox->sizePolicy().hasHeightForWidth());
        maxValSpinBox->setSizePolicy(sizePolicy);
        maxValSpinBox->setDecimals(8);

        horizontalLayout->addWidget(maxValSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        histoFrame = new QFrame(slidersFrame);
        histoFrame->setObjectName(QString::fromUtf8("histoFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(histoFrame->sizePolicy().hasHeightForWidth());
        histoFrame->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(histoFrame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        minSatSpinBox = new QDoubleSpinBox(slidersFrame);
        minSatSpinBox->setObjectName(QString::fromUtf8("minSatSpinBox"));
        sizePolicy.setHeightForWidth(minSatSpinBox->sizePolicy().hasHeightForWidth());
        minSatSpinBox->setSizePolicy(sizePolicy);
        minSatSpinBox->setDecimals(8);

        horizontalLayout_2->addWidget(minSatSpinBox);

        satLabel = new QLabel(slidersFrame);
        satLabel->setObjectName(QString::fromUtf8("satLabel"));

        horizontalLayout_2->addWidget(satLabel);

        maxSatSpinBox = new QDoubleSpinBox(slidersFrame);
        maxSatSpinBox->setObjectName(QString::fromUtf8("maxSatSpinBox"));
        sizePolicy.setHeightForWidth(maxSatSpinBox->sizePolicy().hasHeightForWidth());
        maxSatSpinBox->setSizePolicy(sizePolicy);
        maxSatSpinBox->setDecimals(8);

        horizontalLayout_2->addWidget(maxSatSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(slidersFrame);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        nanInGreyCheckBox = new QCheckBox(tab_2);
        nanInGreyCheckBox->setObjectName(QString::fromUtf8("nanInGreyCheckBox"));
        nanInGreyCheckBox->setChecked(true);

        verticalLayout_4->addWidget(nanInGreyCheckBox);

        alwaysShow0CheckBox = new QCheckBox(tab_2);
        alwaysShow0CheckBox->setObjectName(QString::fromUtf8("alwaysShow0CheckBox"));

        verticalLayout_4->addWidget(alwaysShow0CheckBox);

        symmetricalScaleCheckBox = new QCheckBox(tab_2);
        symmetricalScaleCheckBox->setObjectName(QString::fromUtf8("symmetricalScaleCheckBox"));

        verticalLayout_4->addWidget(symmetricalScaleCheckBox);

        logScaleCheckBox = new QCheckBox(tab_2);
        logScaleCheckBox->setObjectName(QString::fromUtf8("logScaleCheckBox"));

        verticalLayout_4->addWidget(logScaleCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(SFEditDlg);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SFEditDlg);
    } // setupUi

    void retranslateUi(QWidget *SFEditDlg)
    {
        SFEditDlg->setWindowTitle(QApplication::translate("SFEditDlg", "SF Values", 0, QApplication::UnicodeUTF8));
        dispLabel->setText(QApplication::translate("SFEditDlg", "displayed", 0, QApplication::UnicodeUTF8));
        satLabel->setText(QApplication::translate("SFEditDlg", "saturation", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SFEditDlg", "Display ranges", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nanInGreyCheckBox->setToolTip(QApplication::translate("SFEditDlg", "hidden otherwise...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nanInGreyCheckBox->setText(QApplication::translate("SFEditDlg", "show NaN/out of range values in grey", 0, QApplication::UnicodeUTF8));
        alwaysShow0CheckBox->setText(QApplication::translate("SFEditDlg", "always show 0 in color scale", 0, QApplication::UnicodeUTF8));
        symmetricalScaleCheckBox->setText(QApplication::translate("SFEditDlg", "symmetrical color scale", 0, QApplication::UnicodeUTF8));
        logScaleCheckBox->setText(QApplication::translate("SFEditDlg", "log scale", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SFEditDlg", "Parameters", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SFEditDlg: public Ui_SFEditDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFEDITDLG_H
