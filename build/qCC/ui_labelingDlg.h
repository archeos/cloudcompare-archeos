/********************************************************************************
** Form generated from reading UI file 'labelingDlg.ui'
**
** Created: Sun Mar 10 15:48:34 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELINGDLG_H
#define UI_LABELINGDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LabelingDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QSpinBox *octreeLevelSpinBox;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QSpinBox *minPtsSpinBox;
    QCheckBox *randomColorsCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LabelingDialog)
    {
        if (LabelingDialog->objectName().isEmpty())
            LabelingDialog->setObjectName(QString::fromUtf8("LabelingDialog"));
        LabelingDialog->resize(231, 168);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelingDialog->sizePolicy().hasHeightForWidth());
        LabelingDialog->setSizePolicy(sizePolicy);
        LabelingDialog->setMinimumSize(QSize(231, 168));
        LabelingDialog->setMaximumSize(QSize(231, 168));
        vboxLayout = new QVBoxLayout(LabelingDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(LabelingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        octreeLevelSpinBox = new QSpinBox(LabelingDialog);
        octreeLevelSpinBox->setObjectName(QString::fromUtf8("octreeLevelSpinBox"));
        octreeLevelSpinBox->setMinimumSize(QSize(0, 25));
        octreeLevelSpinBox->setMinimum(1);
        octreeLevelSpinBox->setMaximum(10);
        octreeLevelSpinBox->setValue(8);

        hboxLayout->addWidget(octreeLevelSpinBox);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(LabelingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        minPtsSpinBox = new QSpinBox(LabelingDialog);
        minPtsSpinBox->setObjectName(QString::fromUtf8("minPtsSpinBox"));
        minPtsSpinBox->setMinimumSize(QSize(0, 25));
        minPtsSpinBox->setMinimum(1);
        minPtsSpinBox->setMaximum(1000000);
        minPtsSpinBox->setSingleStep(10);
        minPtsSpinBox->setValue(10);

        hboxLayout1->addWidget(minPtsSpinBox);


        vboxLayout->addLayout(hboxLayout1);

        randomColorsCheckBox = new QCheckBox(LabelingDialog);
        randomColorsCheckBox->setObjectName(QString::fromUtf8("randomColorsCheckBox"));
        randomColorsCheckBox->setCheckable(true);
        randomColorsCheckBox->setChecked(true);

        vboxLayout->addWidget(randomColorsCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(LabelingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(LabelingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LabelingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LabelingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LabelingDialog);
    } // setupUi

    void retranslateUi(QDialog *LabelingDialog)
    {
        LabelingDialog->setWindowTitle(QApplication::translate("LabelingDialog", "Connected Components", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("LabelingDialog", "Grid subdivision level: the greater, the finest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("LabelingDialog", "Octree Level", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("LabelingDialog", "Minimum number of points per component", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("LabelingDialog", "Min. points", 0, QApplication::UnicodeUTF8));
        randomColorsCheckBox->setText(QApplication::translate("LabelingDialog", "random colors", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LabelingDialog: public Ui_LabelingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELINGDLG_H
