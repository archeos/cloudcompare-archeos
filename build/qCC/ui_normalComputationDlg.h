/********************************************************************************
** Form generated from reading UI file 'normalComputationDlg.ui'
**
** Created: Sun Mar 10 15:48:34 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALCOMPUTATIONDLG_H
#define UI_NORMALCOMPUTATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NormalComputationDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *localModelComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *preferedOrientationCheckBox;
    QComboBox *preferedOrientationComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NormalComputationDlg)
    {
        if (NormalComputationDlg->objectName().isEmpty())
            NormalComputationDlg->setObjectName(QString::fromUtf8("NormalComputationDlg"));
        NormalComputationDlg->resize(319, 168);
        NormalComputationDlg->setMinimumSize(QSize(319, 168));
        NormalComputationDlg->setMaximumSize(QSize(319, 168));
        verticalLayout = new QVBoxLayout(NormalComputationDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(NormalComputationDlg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        localModelComboBox = new QComboBox(NormalComputationDlg);
        localModelComboBox->setObjectName(QString::fromUtf8("localModelComboBox"));
        localModelComboBox->setMinimumSize(QSize(0, 26));

        horizontalLayout->addWidget(localModelComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 2, -1, 2);
        label_2 = new QLabel(NormalComputationDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        radiusDoubleSpinBox = new QDoubleSpinBox(NormalComputationDlg);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setMinimumSize(QSize(0, 25));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMinimum(1e-06);
        radiusDoubleSpinBox->setMaximum(1e+06);
        radiusDoubleSpinBox->setSingleStep(0.1);
        radiusDoubleSpinBox->setValue(1);

        horizontalLayout_3->addWidget(radiusDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        preferedOrientationCheckBox = new QCheckBox(NormalComputationDlg);
        preferedOrientationCheckBox->setObjectName(QString::fromUtf8("preferedOrientationCheckBox"));
        preferedOrientationCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(preferedOrientationCheckBox);

        preferedOrientationComboBox = new QComboBox(NormalComputationDlg);
        preferedOrientationComboBox->setObjectName(QString::fromUtf8("preferedOrientationComboBox"));
        preferedOrientationComboBox->setMinimumSize(QSize(0, 26));

        horizontalLayout_2->addWidget(preferedOrientationComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(NormalComputationDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NormalComputationDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), NormalComputationDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NormalComputationDlg, SLOT(reject()));
        QObject::connect(preferedOrientationCheckBox, SIGNAL(toggled(bool)), preferedOrientationComboBox, SLOT(setEnabled(bool)));

        localModelComboBox->setCurrentIndex(1);
        preferedOrientationComboBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(NormalComputationDlg);
    } // setupUi

    void retranslateUi(QDialog *NormalComputationDlg)
    {
        NormalComputationDlg->setWindowTitle(QApplication::translate("NormalComputationDlg", "Compute normal", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NormalComputationDlg", "local model", 0, QApplication::UnicodeUTF8));
        localModelComboBox->clear();
        localModelComboBox->insertItems(0, QStringList()
         << QApplication::translate("NormalComputationDlg", "Plane", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "Height function", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "Triangulation", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("NormalComputationDlg", "local radius", 0, QApplication::UnicodeUTF8));
        preferedOrientationCheckBox->setText(QApplication::translate("NormalComputationDlg", "Prefered orientation", 0, QApplication::UnicodeUTF8));
        preferedOrientationComboBox->clear();
        preferedOrientationComboBox->insertItems(0, QStringList()
         << QApplication::translate("NormalComputationDlg", "+X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "-X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "+Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "-Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "+Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "-Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "+Barycenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NormalComputationDlg", "- Barycenter", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class NormalComputationDlg: public Ui_NormalComputationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALCOMPUTATIONDLG_H
