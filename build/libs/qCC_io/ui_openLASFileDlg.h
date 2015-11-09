/********************************************************************************
** Form generated from reading UI file 'openLASFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENLASFILEDLG_H
#define UI_OPENLASFILEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OpenLASFileDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QFrame *rgbFrame;
    QHBoxLayout *hboxLayout;
    QCheckBox *redCheckBox;
    QCheckBox *greenCheckBox;
    QCheckBox *blueCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *intensityCheckBox;
    QFormLayout *formLayout;
    QCheckBox *timeCheckBox;
    QCheckBox *pointSourceIDCheckBox;
    QCheckBox *numberOfReturnsCheckBox;
    QCheckBox *returnNumberCheckBox;
    QCheckBox *scanDirFlagCheckBox;
    QCheckBox *edgeOfFlightCheckBox;
    QCheckBox *scanAngleRankCheckBox;
    QCheckBox *userDataCheckBox;
    QGroupBox *decomposeClassifGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *classifValueCheckBox;
    QCheckBox *classifSyntheticCheckBox;
    QCheckBox *classifKeypointCheckBox;
    QCheckBox *classifWithheldCheckBox;
    QCheckBox *classifCheckBox;
    QGroupBox *extraFieldGroupBox;
    QVBoxLayout *verticalLayout_2;
    QListWidget *evlrListWidget;
    QCheckBox *ignoreDefaultFieldsCheckBox;
    QCheckBox *force8bitRgbCheckBox;
    QSpacerItem *verticalSpacer_2;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *applyButton;
    QPushButton *applyAllButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OpenLASFileDialog)
    {
        if (OpenLASFileDialog->objectName().isEmpty())
            OpenLASFileDialog->setObjectName(QString::fromUtf8("OpenLASFileDialog"));
        OpenLASFileDialog->resize(300, 550);
        verticalLayout_4 = new QVBoxLayout(OpenLASFileDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(OpenLASFileDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        rgbFrame = new QFrame(groupBox);
        rgbFrame->setObjectName(QString::fromUtf8("rgbFrame"));
        hboxLayout = new QHBoxLayout(rgbFrame);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        redCheckBox = new QCheckBox(rgbFrame);
        redCheckBox->setObjectName(QString::fromUtf8("redCheckBox"));
        redCheckBox->setChecked(true);

        hboxLayout->addWidget(redCheckBox);

        greenCheckBox = new QCheckBox(rgbFrame);
        greenCheckBox->setObjectName(QString::fromUtf8("greenCheckBox"));
        greenCheckBox->setChecked(true);

        hboxLayout->addWidget(greenCheckBox);

        blueCheckBox = new QCheckBox(rgbFrame);
        blueCheckBox->setObjectName(QString::fromUtf8("blueCheckBox"));
        blueCheckBox->setChecked(true);

        hboxLayout->addWidget(blueCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(rgbFrame);

        intensityCheckBox = new QCheckBox(groupBox);
        intensityCheckBox->setObjectName(QString::fromUtf8("intensityCheckBox"));
        intensityCheckBox->setChecked(true);

        verticalLayout_3->addWidget(intensityCheckBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        timeCheckBox = new QCheckBox(groupBox);
        timeCheckBox->setObjectName(QString::fromUtf8("timeCheckBox"));
        timeCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, timeCheckBox);

        pointSourceIDCheckBox = new QCheckBox(groupBox);
        pointSourceIDCheckBox->setObjectName(QString::fromUtf8("pointSourceIDCheckBox"));
        pointSourceIDCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, pointSourceIDCheckBox);

        numberOfReturnsCheckBox = new QCheckBox(groupBox);
        numberOfReturnsCheckBox->setObjectName(QString::fromUtf8("numberOfReturnsCheckBox"));
        numberOfReturnsCheckBox->setChecked(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, numberOfReturnsCheckBox);

        returnNumberCheckBox = new QCheckBox(groupBox);
        returnNumberCheckBox->setObjectName(QString::fromUtf8("returnNumberCheckBox"));
        returnNumberCheckBox->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, returnNumberCheckBox);

        scanDirFlagCheckBox = new QCheckBox(groupBox);
        scanDirFlagCheckBox->setObjectName(QString::fromUtf8("scanDirFlagCheckBox"));
        scanDirFlagCheckBox->setChecked(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, scanDirFlagCheckBox);

        edgeOfFlightCheckBox = new QCheckBox(groupBox);
        edgeOfFlightCheckBox->setObjectName(QString::fromUtf8("edgeOfFlightCheckBox"));
        edgeOfFlightCheckBox->setChecked(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, edgeOfFlightCheckBox);

        scanAngleRankCheckBox = new QCheckBox(groupBox);
        scanAngleRankCheckBox->setObjectName(QString::fromUtf8("scanAngleRankCheckBox"));
        scanAngleRankCheckBox->setChecked(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, scanAngleRankCheckBox);

        userDataCheckBox = new QCheckBox(groupBox);
        userDataCheckBox->setObjectName(QString::fromUtf8("userDataCheckBox"));
        userDataCheckBox->setChecked(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, userDataCheckBox);

        decomposeClassifGroupBox = new QGroupBox(groupBox);
        decomposeClassifGroupBox->setObjectName(QString::fromUtf8("decomposeClassifGroupBox"));
        decomposeClassifGroupBox->setCheckable(true);
        decomposeClassifGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(decomposeClassifGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        classifValueCheckBox = new QCheckBox(decomposeClassifGroupBox);
        classifValueCheckBox->setObjectName(QString::fromUtf8("classifValueCheckBox"));
        classifValueCheckBox->setChecked(true);

        verticalLayout->addWidget(classifValueCheckBox);

        classifSyntheticCheckBox = new QCheckBox(decomposeClassifGroupBox);
        classifSyntheticCheckBox->setObjectName(QString::fromUtf8("classifSyntheticCheckBox"));
        classifSyntheticCheckBox->setChecked(true);

        verticalLayout->addWidget(classifSyntheticCheckBox);

        classifKeypointCheckBox = new QCheckBox(decomposeClassifGroupBox);
        classifKeypointCheckBox->setObjectName(QString::fromUtf8("classifKeypointCheckBox"));
        classifKeypointCheckBox->setChecked(true);

        verticalLayout->addWidget(classifKeypointCheckBox);

        classifWithheldCheckBox = new QCheckBox(decomposeClassifGroupBox);
        classifWithheldCheckBox->setObjectName(QString::fromUtf8("classifWithheldCheckBox"));
        classifWithheldCheckBox->setChecked(true);

        verticalLayout->addWidget(classifWithheldCheckBox);


        formLayout->setWidget(0, QFormLayout::FieldRole, decomposeClassifGroupBox);

        classifCheckBox = new QCheckBox(groupBox);
        classifCheckBox->setObjectName(QString::fromUtf8("classifCheckBox"));
        classifCheckBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, classifCheckBox);


        verticalLayout_3->addLayout(formLayout);


        verticalLayout_4->addWidget(groupBox);

        extraFieldGroupBox = new QGroupBox(OpenLASFileDialog);
        extraFieldGroupBox->setObjectName(QString::fromUtf8("extraFieldGroupBox"));
        extraFieldGroupBox->setCheckable(true);
        extraFieldGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(extraFieldGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        evlrListWidget = new QListWidget(extraFieldGroupBox);
        evlrListWidget->setObjectName(QString::fromUtf8("evlrListWidget"));
        evlrListWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout_2->addWidget(evlrListWidget);


        verticalLayout_4->addWidget(extraFieldGroupBox);

        ignoreDefaultFieldsCheckBox = new QCheckBox(OpenLASFileDialog);
        ignoreDefaultFieldsCheckBox->setObjectName(QString::fromUtf8("ignoreDefaultFieldsCheckBox"));
        ignoreDefaultFieldsCheckBox->setChecked(true);

        verticalLayout_4->addWidget(ignoreDefaultFieldsCheckBox);

        force8bitRgbCheckBox = new QCheckBox(OpenLASFileDialog);
        force8bitRgbCheckBox->setObjectName(QString::fromUtf8("force8bitRgbCheckBox"));

        verticalLayout_4->addWidget(force8bitRgbCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        buttonFrame = new QFrame(OpenLASFileDialog);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(buttonFrame);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(434, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        applyButton = new QPushButton(buttonFrame);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_5->addWidget(applyButton);

        applyAllButton = new QPushButton(buttonFrame);
        applyAllButton->setObjectName(QString::fromUtf8("applyAllButton"));

        horizontalLayout_5->addWidget(applyAllButton);

        cancelButton = new QPushButton(buttonFrame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_5->addWidget(cancelButton);


        verticalLayout_4->addWidget(buttonFrame);


        retranslateUi(OpenLASFileDialog);
        QObject::connect(classifCheckBox, SIGNAL(toggled(bool)), decomposeClassifGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(cancelButton, SIGNAL(clicked()), OpenLASFileDialog, SLOT(reject()));
        QObject::connect(applyButton, SIGNAL(clicked()), OpenLASFileDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(OpenLASFileDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenLASFileDialog)
    {
        OpenLASFileDialog->setWindowTitle(QApplication::translate("OpenLASFileDialog", "Open LAS File", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OpenLASFileDialog", "Fields", 0, QApplication::UnicodeUTF8));
        redCheckBox->setText(QApplication::translate("OpenLASFileDialog", "R", 0, QApplication::UnicodeUTF8));
        greenCheckBox->setText(QApplication::translate("OpenLASFileDialog", "G", 0, QApplication::UnicodeUTF8));
        blueCheckBox->setText(QApplication::translate("OpenLASFileDialog", "B", 0, QApplication::UnicodeUTF8));
        intensityCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Intensity", 0, QApplication::UnicodeUTF8));
        timeCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Time", 0, QApplication::UnicodeUTF8));
        pointSourceIDCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Point source ID", 0, QApplication::UnicodeUTF8));
        numberOfReturnsCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Number of returns", 0, QApplication::UnicodeUTF8));
        returnNumberCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Return number", 0, QApplication::UnicodeUTF8));
        scanDirFlagCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Scan direction flag", 0, QApplication::UnicodeUTF8));
        edgeOfFlightCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Edge of flight line", 0, QApplication::UnicodeUTF8));
        scanAngleRankCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Scan angle rank", 0, QApplication::UnicodeUTF8));
        userDataCheckBox->setText(QApplication::translate("OpenLASFileDialog", "User data", 0, QApplication::UnicodeUTF8));
        decomposeClassifGroupBox->setTitle(QApplication::translate("OpenLASFileDialog", "decompose", 0, QApplication::UnicodeUTF8));
        classifValueCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Value", 0, QApplication::UnicodeUTF8));
        classifSyntheticCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Synthetic flag", 0, QApplication::UnicodeUTF8));
        classifKeypointCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Key-point", 0, QApplication::UnicodeUTF8));
        classifWithheldCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Withheld", 0, QApplication::UnicodeUTF8));
        classifCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Classification", 0, QApplication::UnicodeUTF8));
        extraFieldGroupBox->setTitle(QApplication::translate("OpenLASFileDialog", "Load additional field(s)", 0, QApplication::UnicodeUTF8));
        ignoreDefaultFieldsCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Ignore fields with default values only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        force8bitRgbCheckBox->setToolTip(QApplication::translate("OpenLASFileDialog", "Force reading colors as 8-bit values (even if the standard is 16-bit)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        force8bitRgbCheckBox->setText(QApplication::translate("OpenLASFileDialog", "Force 8-bit colors", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("OpenLASFileDialog", "Apply", 0, QApplication::UnicodeUTF8));
        applyAllButton->setText(QApplication::translate("OpenLASFileDialog", "Apply all", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("OpenLASFileDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OpenLASFileDialog: public Ui_OpenLASFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENLASFILEDLG_H
