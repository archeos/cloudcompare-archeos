/********************************************************************************
** Form generated from reading UI file 'orthoSectionGenerationDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORTHOSECTIONGENERATIONDLG_H
#define UI_ORTHOSECTIONGENERATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OrthoSectionGenerationDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *pathLengthLineEdit;
    QLabel *label_4;
    QLineEdit *sectionCountLineEdit;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *stepDoubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *widthDoubleSpinBox;
    QCheckBox *autoSaveAndRemoveCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrthoSectionGenerationDlg)
    {
        if (OrthoSectionGenerationDlg->objectName().isEmpty())
            OrthoSectionGenerationDlg->setObjectName(QString::fromUtf8("OrthoSectionGenerationDlg"));
        OrthoSectionGenerationDlg->resize(350, 152);
        verticalLayout = new QVBoxLayout(OrthoSectionGenerationDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(OrthoSectionGenerationDlg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pathLengthLineEdit = new QLineEdit(OrthoSectionGenerationDlg);
        pathLengthLineEdit->setObjectName(QString::fromUtf8("pathLengthLineEdit"));
        pathLengthLineEdit->setEnabled(false);
        pathLengthLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(pathLengthLineEdit);

        label_4 = new QLabel(OrthoSectionGenerationDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        sectionCountLineEdit = new QLineEdit(OrthoSectionGenerationDlg);
        sectionCountLineEdit->setObjectName(QString::fromUtf8("sectionCountLineEdit"));
        sectionCountLineEdit->setEnabled(false);
        sectionCountLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(sectionCountLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(OrthoSectionGenerationDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        stepDoubleSpinBox = new QDoubleSpinBox(OrthoSectionGenerationDlg);
        stepDoubleSpinBox->setObjectName(QString::fromUtf8("stepDoubleSpinBox"));
        stepDoubleSpinBox->setDecimals(6);
        stepDoubleSpinBox->setMinimum(0);
        stepDoubleSpinBox->setMaximum(1e+09);

        formLayout->setWidget(0, QFormLayout::FieldRole, stepDoubleSpinBox);

        label_3 = new QLabel(OrthoSectionGenerationDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        widthDoubleSpinBox = new QDoubleSpinBox(OrthoSectionGenerationDlg);
        widthDoubleSpinBox->setObjectName(QString::fromUtf8("widthDoubleSpinBox"));
        widthDoubleSpinBox->setDecimals(6);
        widthDoubleSpinBox->setMinimum(1e-06);
        widthDoubleSpinBox->setMaximum(1e+09);

        formLayout->setWidget(1, QFormLayout::FieldRole, widthDoubleSpinBox);


        verticalLayout->addLayout(formLayout);

        autoSaveAndRemoveCheckBox = new QCheckBox(OrthoSectionGenerationDlg);
        autoSaveAndRemoveCheckBox->setObjectName(QString::fromUtf8("autoSaveAndRemoveCheckBox"));
        autoSaveAndRemoveCheckBox->setChecked(true);

        verticalLayout->addWidget(autoSaveAndRemoveCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OrthoSectionGenerationDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OrthoSectionGenerationDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrthoSectionGenerationDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrthoSectionGenerationDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrthoSectionGenerationDlg);
    } // setupUi

    void retranslateUi(QDialog *OrthoSectionGenerationDlg)
    {
        OrthoSectionGenerationDlg->setWindowTitle(QApplication::translate("OrthoSectionGenerationDlg", "Orthogonal sections generation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Selected path length", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OrthoSectionGenerationDlg", "path length", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OrthoSectionGenerationDlg", "sections", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sectionCountLineEdit->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Number of sections that will be generated (depends on the 'step' parameter)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("OrthoSectionGenerationDlg", "step", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        stepDoubleSpinBox->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Section generation step", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OrthoSectionGenerationDlg", "width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        widthDoubleSpinBox->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Total width of each orthogonal section (centered on the path line)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        autoSaveAndRemoveCheckBox->setToolTip(QApplication::translate("OrthoSectionGenerationDlg", "Automatically save then remove the generatrix polyline", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        autoSaveAndRemoveCheckBox->setText(QApplication::translate("OrthoSectionGenerationDlg", "auto save and remove generatrix", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OrthoSectionGenerationDlg: public Ui_OrthoSectionGenerationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORTHOSECTIONGENERATIONDLG_H
