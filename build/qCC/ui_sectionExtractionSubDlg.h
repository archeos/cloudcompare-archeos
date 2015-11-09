/********************************************************************************
** Form generated from reading UI file 'sectionExtractionSubDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONEXTRACTIONSUBDLG_H
#define UI_SECTIONEXTRACTIONSUBDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SectionExtractionSubDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *activeSectionsLabel;
    QLabel *label;
    QDoubleSpinBox *thicknessDoubleSpinBox;
    QGroupBox *extractCloudsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QGroupBox *extractContoursGroupBox;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *contourTypeComboBox;
    QLabel *label_2;
    QDoubleSpinBox *maxEdgeLengthDoubleSpinBox;
    QCheckBox *multiPassCheckBox;
    QCheckBox *splitContourCheckBox;
    QCheckBox *debugModeCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SectionExtractionSubDlg)
    {
        if (SectionExtractionSubDlg->objectName().isEmpty())
            SectionExtractionSubDlg->setObjectName(QString::fromUtf8("SectionExtractionSubDlg"));
        SectionExtractionSubDlg->resize(300, 320);
        verticalLayout = new QVBoxLayout(SectionExtractionSubDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(SectionExtractionSubDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        formLayout_2 = new QFormLayout(frame);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        activeSectionsLabel = new QLabel(frame);
        activeSectionsLabel->setObjectName(QString::fromUtf8("activeSectionsLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, activeSectionsLabel);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        thicknessDoubleSpinBox = new QDoubleSpinBox(frame);
        thicknessDoubleSpinBox->setObjectName(QString::fromUtf8("thicknessDoubleSpinBox"));
        thicknessDoubleSpinBox->setDecimals(6);
        thicknessDoubleSpinBox->setMaximum(1e+09);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, thicknessDoubleSpinBox);


        verticalLayout->addWidget(frame);

        extractCloudsGroupBox = new QGroupBox(SectionExtractionSubDlg);
        extractCloudsGroupBox->setObjectName(QString::fromUtf8("extractCloudsGroupBox"));
        extractCloudsGroupBox->setCheckable(true);
        extractCloudsGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(extractCloudsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(extractCloudsGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        verticalLayout->addWidget(extractCloudsGroupBox);

        extractContoursGroupBox = new QGroupBox(SectionExtractionSubDlg);
        extractContoursGroupBox->setObjectName(QString::fromUtf8("extractContoursGroupBox"));
        extractContoursGroupBox->setCheckable(true);
        extractContoursGroupBox->setChecked(true);
        verticalLayout_3 = new QVBoxLayout(extractContoursGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(extractContoursGroupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 50));
        formLayout = new QFormLayout(frame_2);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        contourTypeComboBox = new QComboBox(frame_2);
        contourTypeComboBox->setObjectName(QString::fromUtf8("contourTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, contourTypeComboBox);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        maxEdgeLengthDoubleSpinBox = new QDoubleSpinBox(frame_2);
        maxEdgeLengthDoubleSpinBox->setObjectName(QString::fromUtf8("maxEdgeLengthDoubleSpinBox"));
        maxEdgeLengthDoubleSpinBox->setDecimals(6);
        maxEdgeLengthDoubleSpinBox->setMaximum(1e+09);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxEdgeLengthDoubleSpinBox);


        verticalLayout_3->addWidget(frame_2);

        multiPassCheckBox = new QCheckBox(extractContoursGroupBox);
        multiPassCheckBox->setObjectName(QString::fromUtf8("multiPassCheckBox"));

        verticalLayout_3->addWidget(multiPassCheckBox);

        splitContourCheckBox = new QCheckBox(extractContoursGroupBox);
        splitContourCheckBox->setObjectName(QString::fromUtf8("splitContourCheckBox"));

        verticalLayout_3->addWidget(splitContourCheckBox);

        debugModeCheckBox = new QCheckBox(extractContoursGroupBox);
        debugModeCheckBox->setObjectName(QString::fromUtf8("debugModeCheckBox"));

        verticalLayout_3->addWidget(debugModeCheckBox);


        verticalLayout->addWidget(extractContoursGroupBox);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SectionExtractionSubDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SectionExtractionSubDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SectionExtractionSubDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SectionExtractionSubDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(SectionExtractionSubDlg);
    } // setupUi

    void retranslateUi(QDialog *SectionExtractionSubDlg)
    {
        SectionExtractionSubDlg->setWindowTitle(QApplication::translate("SectionExtractionSubDlg", "Extract Sections", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SectionExtractionSubDlg", "Active section(s)", 0, QApplication::UnicodeUTF8));
        activeSectionsLabel->setText(QApplication::translate("SectionExtractionSubDlg", "0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SectionExtractionSubDlg", "Sections thickness", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        thicknessDoubleSpinBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Thickness of each section (depends on the cloud density)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        extractCloudsGroupBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "To extract each section as a point cloud", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        extractCloudsGroupBox->setTitle(QApplication::translate("SectionExtractionSubDlg", "Extract section cloud(s)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SectionExtractionSubDlg", "No parameter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extractContoursGroupBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "To extract the contour of each section as a polyline", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        extractContoursGroupBox->setTitle(QApplication::translate("SectionExtractionSubDlg", "Extract section profile(s)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SectionExtractionSubDlg", "type", 0, QApplication::UnicodeUTF8));
        contourTypeComboBox->clear();
        contourTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SectionExtractionSubDlg", "Lower", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SectionExtractionSubDlg", "Upper", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SectionExtractionSubDlg", "Both", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        contourTypeComboBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Section type (lower or upper part, or both)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SectionExtractionSubDlg", "max edge length", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxEdgeLengthDoubleSpinBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Max output polyline edge length (the smaller, the closer to the points the countour will be).\n"
"Warning: if 0, generates the convex hull.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        multiPassCheckBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Multi-pass process where longer edges may be temporarilly created to obtain a better fit... or a worst one ;)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        multiPassCheckBox->setText(QApplication::translate("SectionExtractionSubDlg", "multi-pass", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        splitContourCheckBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "split the generated profile(s) in smaller parts to avoid creating too long edges (10 times the specified max edge length).\n"
"Warning: may not be compatible with Mascaret export.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        splitContourCheckBox->setText(QApplication::translate("SectionExtractionSubDlg", "split profile on longer edges", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        debugModeCheckBox->setToolTip(QApplication::translate("SectionExtractionSubDlg", "Display a dialog with step-by-step execution of the algorithm (debug mode - very slow)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        debugModeCheckBox->setText(QApplication::translate("SectionExtractionSubDlg", "visual debug mode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SectionExtractionSubDlg: public Ui_SectionExtractionSubDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONEXTRACTIONSUBDLG_H
