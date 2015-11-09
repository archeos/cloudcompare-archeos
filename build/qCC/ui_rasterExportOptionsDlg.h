/********************************************************************************
** Form generated from reading UI file 'rasterExportOptionsDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASTEREXPORTOPTIONSDLG_H
#define UI_RASTEREXPORTOPTIONSDLG_H

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
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RasterExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *dimensionsLabel;
    QSpacerItem *horizontalSpacer;
    QCheckBox *exportHeightsCheckBox;
    QCheckBox *exportDensityCheckBox;
    QCheckBox *exportDisplayedSFCheckBox;
    QCheckBox *exportAllSFCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RasterExportOptionsDialog)
    {
        if (RasterExportOptionsDialog->objectName().isEmpty())
            RasterExportOptionsDialog->setObjectName(QString::fromUtf8("RasterExportOptionsDialog"));
        RasterExportOptionsDialog->resize(270, 167);
        verticalLayout = new QVBoxLayout(RasterExportOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(RasterExportOptionsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dimensionsLabel = new QLabel(RasterExportOptionsDialog);
        dimensionsLabel->setObjectName(QString::fromUtf8("dimensionsLabel"));

        horizontalLayout->addWidget(dimensionsLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        exportHeightsCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportHeightsCheckBox->setObjectName(QString::fromUtf8("exportHeightsCheckBox"));
        exportHeightsCheckBox->setChecked(true);

        verticalLayout->addWidget(exportHeightsCheckBox);

        exportDensityCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportDensityCheckBox->setObjectName(QString::fromUtf8("exportDensityCheckBox"));

        verticalLayout->addWidget(exportDensityCheckBox);

        exportDisplayedSFCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportDisplayedSFCheckBox->setObjectName(QString::fromUtf8("exportDisplayedSFCheckBox"));

        verticalLayout->addWidget(exportDisplayedSFCheckBox);

        exportAllSFCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportAllSFCheckBox->setObjectName(QString::fromUtf8("exportAllSFCheckBox"));

        verticalLayout->addWidget(exportAllSFCheckBox);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RasterExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RasterExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RasterExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RasterExportOptionsDialog, SLOT(reject()));
        QObject::connect(exportAllSFCheckBox, SIGNAL(toggled(bool)), exportDisplayedSFCheckBox, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(RasterExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *RasterExportOptionsDialog)
    {
        RasterExportOptionsDialog->setWindowTitle(QApplication::translate("RasterExportOptionsDialog", "Raster export options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RasterExportOptionsDialog", "Raster dimensions:", 0, QApplication::UnicodeUTF8));
        dimensionsLabel->setText(QApplication::translate("RasterExportOptionsDialog", "0 x 0", 0, QApplication::UnicodeUTF8));
        exportHeightsCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export heights", 0, QApplication::UnicodeUTF8));
        exportDensityCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export density (population per cell)", 0, QApplication::UnicodeUTF8));
        exportDisplayedSFCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export currently displayed scalar field", 0, QApplication::UnicodeUTF8));
        exportAllSFCheckBox->setText(QApplication::translate("RasterExportOptionsDialog", "Export all scalar fields", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RasterExportOptionsDialog: public Ui_RasterExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASTEREXPORTOPTIONSDLG_H
