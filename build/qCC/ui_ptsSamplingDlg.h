/********************************************************************************
** Form generated from reading UI file 'ptsSamplingDlg.ui'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTSSAMPLINGDLG_H
#define UI_PTSSAMPLINGDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PointsSamplingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QRadioButton *pnRadioButton;
    QRadioButton *dRadioButton;
    QSpinBox *pnSpinBox;
    QDoubleSpinBox *dDoubleSpinBox;
    QCheckBox *normalsCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *colorsCheckBox;
    QCheckBox *textureCheckBox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PointsSamplingDialog)
    {
        if (PointsSamplingDialog->objectName().isEmpty())
            PointsSamplingDialog->setObjectName(QString::fromUtf8("PointsSamplingDialog"));
        PointsSamplingDialog->resize(400, 145);
        verticalLayout = new QVBoxLayout(PointsSamplingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(PointsSamplingDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(frame);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pnRadioButton = new QRadioButton(frame);
        pnRadioButton->setObjectName(QString::fromUtf8("pnRadioButton"));
        pnRadioButton->setChecked(true);

        gridLayout->addWidget(pnRadioButton, 0, 0, 1, 1);

        dRadioButton = new QRadioButton(frame);
        dRadioButton->setObjectName(QString::fromUtf8("dRadioButton"));

        gridLayout->addWidget(dRadioButton, 0, 1, 1, 1);

        pnSpinBox = new QSpinBox(frame);
        pnSpinBox->setObjectName(QString::fromUtf8("pnSpinBox"));
        pnSpinBox->setMinimum(1);
        pnSpinBox->setMaximum(100000000);
        pnSpinBox->setSingleStep(10000);
        pnSpinBox->setValue(1000000);

        gridLayout->addWidget(pnSpinBox, 1, 0, 1, 1);

        dDoubleSpinBox = new QDoubleSpinBox(frame);
        dDoubleSpinBox->setObjectName(QString::fromUtf8("dDoubleSpinBox"));
        dDoubleSpinBox->setEnabled(false);
        dDoubleSpinBox->setDecimals(6);
        dDoubleSpinBox->setMinimum(1e-06);
        dDoubleSpinBox->setMaximum(1e+06);
        dDoubleSpinBox->setValue(10);

        gridLayout->addWidget(dDoubleSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(frame);

        normalsCheckBox = new QCheckBox(PointsSamplingDialog);
        normalsCheckBox->setObjectName(QString::fromUtf8("normalsCheckBox"));
        normalsCheckBox->setChecked(true);

        verticalLayout->addWidget(normalsCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PointsSamplingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        colorsCheckBox = new QCheckBox(PointsSamplingDialog);
        colorsCheckBox->setObjectName(QString::fromUtf8("colorsCheckBox"));
        colorsCheckBox->setChecked(true);

        horizontalLayout->addWidget(colorsCheckBox);

        textureCheckBox = new QCheckBox(PointsSamplingDialog);
        textureCheckBox->setObjectName(QString::fromUtf8("textureCheckBox"));
        textureCheckBox->setChecked(true);

        horizontalLayout->addWidget(textureCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PointsSamplingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PointsSamplingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PointsSamplingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PointsSamplingDialog, SLOT(reject()));
        QObject::connect(dRadioButton, SIGNAL(toggled(bool)), dDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(pnRadioButton, SIGNAL(toggled(bool)), pnSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(PointsSamplingDialog);
    } // setupUi

    void retranslateUi(QDialog *PointsSamplingDialog)
    {
        PointsSamplingDialog->setWindowTitle(QApplication::translate("PointsSamplingDialog", "Points Sampling on mesh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pnRadioButton->setToolTip(QApplication::translate("PointsSamplingDialog", "Total number of sampled points (approx.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pnRadioButton->setText(QApplication::translate("PointsSamplingDialog", "Points Number", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dRadioButton->setToolTip(QApplication::translate("PointsSamplingDialog", "Density: pts/square unit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dRadioButton->setText(QApplication::translate("PointsSamplingDialog", "Density", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pnSpinBox->setToolTip(QApplication::translate("PointsSamplingDialog", "Total number of sampled points (approx.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        dDoubleSpinBox->setToolTip(QApplication::translate("PointsSamplingDialog", "Density: pts/square unit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        normalsCheckBox->setText(QApplication::translate("PointsSamplingDialog", "generate normals", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PointsSamplingDialog", "get colors", 0, QApplication::UnicodeUTF8));
        colorsCheckBox->setText(QApplication::translate("PointsSamplingDialog", "from RGB", 0, QApplication::UnicodeUTF8));
        textureCheckBox->setText(QApplication::translate("PointsSamplingDialog", "or from material/texture if available", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PointsSamplingDialog: public Ui_PointsSamplingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTSSAMPLINGDLG_H
