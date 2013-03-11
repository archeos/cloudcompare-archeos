/********************************************************************************
** Form generated from reading UI file 'curvatureDlg.ui'
**
** Created: Sun Mar 10 15:48:34 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVATUREDLG_H
#define UI_CURVATUREDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CurvatureDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QComboBox *curvatureTypeComboBox;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QDoubleSpinBox *kernelDoubleSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CurvatureDialog)
    {
        if (CurvatureDialog->objectName().isEmpty())
            CurvatureDialog->setObjectName(QString::fromUtf8("CurvatureDialog"));
        CurvatureDialog->resize(300, 109);
        vboxLayout = new QVBoxLayout(CurvatureDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(CurvatureDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        curvatureTypeComboBox = new QComboBox(CurvatureDialog);
        curvatureTypeComboBox->setObjectName(QString::fromUtf8("curvatureTypeComboBox"));

        hboxLayout->addWidget(curvatureTypeComboBox);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(CurvatureDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        kernelDoubleSpinBox = new QDoubleSpinBox(CurvatureDialog);
        kernelDoubleSpinBox->setObjectName(QString::fromUtf8("kernelDoubleSpinBox"));
        kernelDoubleSpinBox->setDecimals(6);
        kernelDoubleSpinBox->setMaximum(1e+09);
        kernelDoubleSpinBox->setValue(1);

        hboxLayout1->addWidget(kernelDoubleSpinBox);


        vboxLayout->addLayout(hboxLayout1);

        buttonBox = new QDialogButtonBox(CurvatureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(CurvatureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CurvatureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CurvatureDialog, SLOT(reject()));

        curvatureTypeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CurvatureDialog);
    } // setupUi

    void retranslateUi(QDialog *CurvatureDialog)
    {
        CurvatureDialog->setWindowTitle(QApplication::translate("CurvatureDialog", "Curvature", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CurvatureDialog", "Curvature", 0, QApplication::UnicodeUTF8));
        curvatureTypeComboBox->clear();
        curvatureTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CurvatureDialog", "Gaussian", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CurvatureDialog", "Mean", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("CurvatureDialog", "kernel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CurvatureDialog: public Ui_CurvatureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVATUREDLG_H
