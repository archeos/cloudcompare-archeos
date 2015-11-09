/********************************************************************************
** Form generated from reading UI file 'saveSHPFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVESHPFILEDLG_H
#define UI_SAVESHPFILEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveSHPFileDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *dimComboBox;
    QCheckBox *save3DPolyAs2DCheckBox;
    QCheckBox *save3DPolyHeightInDBFCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveSHPFileDlg)
    {
        if (SaveSHPFileDlg->objectName().isEmpty())
            SaveSHPFileDlg->setObjectName(QString::fromUtf8("SaveSHPFileDlg"));
        SaveSHPFileDlg->resize(295, 154);
        verticalLayout_2 = new QVBoxLayout(SaveSHPFileDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(SaveSHPFileDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dimComboBox = new QComboBox(groupBox);
        dimComboBox->setObjectName(QString::fromUtf8("dimComboBox"));
        dimComboBox->setMaxVisibleItems(3);

        horizontalLayout->addWidget(dimComboBox);


        verticalLayout->addLayout(horizontalLayout);

        save3DPolyAs2DCheckBox = new QCheckBox(groupBox);
        save3DPolyAs2DCheckBox->setObjectName(QString::fromUtf8("save3DPolyAs2DCheckBox"));

        verticalLayout->addWidget(save3DPolyAs2DCheckBox);

        save3DPolyHeightInDBFCheckBox = new QCheckBox(groupBox);
        save3DPolyHeightInDBFCheckBox->setObjectName(QString::fromUtf8("save3DPolyHeightInDBFCheckBox"));

        verticalLayout->addWidget(save3DPolyHeightInDBFCheckBox);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SaveSHPFileDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SaveSHPFileDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveSHPFileDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveSHPFileDlg, SLOT(reject()));

        dimComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SaveSHPFileDlg);
    } // setupUi

    void retranslateUi(QDialog *SaveSHPFileDlg)
    {
        SaveSHPFileDlg->setWindowTitle(QApplication::translate("SaveSHPFileDlg", "Save SHP file", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SaveSHPFileDlg", "3D polylines", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SaveSHPFileDlg", "Vertical dimension", 0, QApplication::UnicodeUTF8));
        dimComboBox->clear();
        dimComboBox->insertItems(0, QStringList()
         << QApplication::translate("SaveSHPFileDlg", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SaveSHPFileDlg", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SaveSHPFileDlg", "Z", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        save3DPolyAs2DCheckBox->setToolTip(QApplication::translate("SaveSHPFileDlg", "Save the 3D polylines as 2D ones (make sure to set the right 'vertical dimension')", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        save3DPolyAs2DCheckBox->setText(QApplication::translate("SaveSHPFileDlg", "save as 2D polylines", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        save3DPolyHeightInDBFCheckBox->setToolTip(QApplication::translate("SaveSHPFileDlg", "The height of each polyline (considered as constant!) will be saved as a field in the associated DBF file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        save3DPolyHeightInDBFCheckBox->setText(QApplication::translate("SaveSHPFileDlg", "save (constant) height of polylines as a DBF field", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SaveSHPFileDlg: public Ui_SaveSHPFileDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVESHPFILEDLG_H
