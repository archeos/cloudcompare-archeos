/********************************************************************************
** Form generated from reading UI file 'densityDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENSITYDLG_H
#define UI_DENSITYDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DensityDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QRadioButton *preciseRadioButton;
    QFrame *preciseFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QRadioButton *approxRadioButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *knnRadioButton;
    QRadioButton *surfRadioButton;
    QRadioButton *volRadioButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DensityDialog)
    {
        if (DensityDialog->objectName().isEmpty())
            DensityDialog->setObjectName(QString::fromUtf8("DensityDialog"));
        DensityDialog->resize(300, 240);
        verticalLayout_2 = new QVBoxLayout(DensityDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(DensityDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        preciseRadioButton = new QRadioButton(groupBox);
        preciseRadioButton->setObjectName(QString::fromUtf8("preciseRadioButton"));
        preciseRadioButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, preciseRadioButton);

        preciseFrame = new QFrame(groupBox);
        preciseFrame->setObjectName(QString::fromUtf8("preciseFrame"));
        preciseFrame->setFrameShape(QFrame::StyledPanel);
        preciseFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(preciseFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(preciseFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        radiusDoubleSpinBox = new QDoubleSpinBox(preciseFrame);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMaximum(1e+09);

        horizontalLayout->addWidget(radiusDoubleSpinBox);


        formLayout->setWidget(0, QFormLayout::FieldRole, preciseFrame);

        approxRadioButton = new QRadioButton(groupBox);
        approxRadioButton->setObjectName(QString::fromUtf8("approxRadioButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, approxRadioButton);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DensityDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        knnRadioButton = new QRadioButton(groupBox_2);
        knnRadioButton->setObjectName(QString::fromUtf8("knnRadioButton"));

        verticalLayout->addWidget(knnRadioButton);

        surfRadioButton = new QRadioButton(groupBox_2);
        surfRadioButton->setObjectName(QString::fromUtf8("surfRadioButton"));

        verticalLayout->addWidget(surfRadioButton);

        volRadioButton = new QRadioButton(groupBox_2);
        volRadioButton->setObjectName(QString::fromUtf8("volRadioButton"));
        volRadioButton->setChecked(true);

        verticalLayout->addWidget(volRadioButton);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DensityDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DensityDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DensityDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DensityDialog, SLOT(reject()));
        QObject::connect(preciseRadioButton, SIGNAL(toggled(bool)), preciseFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(DensityDialog);
    } // setupUi

    void retranslateUi(QDialog *DensityDialog)
    {
        DensityDialog->setWindowTitle(QApplication::translate("DensityDialog", "Cloud Density", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DensityDialog", "Method", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        preciseRadioButton->setToolTip(QApplication::translate("DensityDialog", "Compute the density by determining the number of neighbors inside a sphere of given radius around each point", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        preciseRadioButton->setText(QApplication::translate("DensityDialog", "Precise", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DensityDialog", "radius", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radiusDoubleSpinBox->setToolTip(QApplication::translate("DensityDialog", "Neighborhood sphere radius", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        approxRadioButton->setToolTip(QApplication::translate("DensityDialog", "Estimate the density by computing the distance to the nearest neighbor (much faster but less accurate)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        approxRadioButton->setText(QApplication::translate("DensityDialog", "Approximate", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DensityDialog", "Output", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        knnRadioButton->setToolTip(QApplication::translate("DensityDialog", "Simply returns the number of neighbors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        knnRadioButton->setText(QApplication::translate("DensityDialog", "Number of neighbors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        surfRadioButton->setToolTip(QApplication::translate("DensityDialog", "Output the surface density (neighborhood is admitted to always be flat)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        surfRadioButton->setText(QApplication::translate("DensityDialog", "Surface density", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        volRadioButton->setToolTip(QApplication::translate("DensityDialog", "Output the volume density (3D)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        volRadioButton->setText(QApplication::translate("DensityDialog", "Volume density", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DensityDialog: public Ui_DensityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENSITYDLG_H
