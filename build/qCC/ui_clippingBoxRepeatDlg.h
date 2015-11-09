/********************************************************************************
** Form generated from reading UI file 'clippingBoxRepeatDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPPINGBOXREPEATDLG_H
#define UI_CLIPPINGBOXREPEATDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClippingBoxRepeatDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *repeatDimGroupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *xRepeatCheckBox;
    QCheckBox *yRepeatCheckBox;
    QCheckBox *zRepeatCheckBox;
    QGroupBox *extractContoursGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *maxEdgeLengthDoubleSpinBox;
    QCheckBox *multiPassCheckBox;
    QCheckBox *projectOnBestFitCheckBox;
    QCheckBox *splitContourCheckBox;
    QCheckBox *debugModeCheckBox;
    QGroupBox *otherOptionsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *gapDoubleSpinBox;
    QCheckBox *randomColorCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClippingBoxRepeatDlg)
    {
        if (ClippingBoxRepeatDlg->objectName().isEmpty())
            ClippingBoxRepeatDlg->setObjectName(QString::fromUtf8("ClippingBoxRepeatDlg"));
        ClippingBoxRepeatDlg->resize(314, 340);
        verticalLayout = new QVBoxLayout(ClippingBoxRepeatDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        repeatDimGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        repeatDimGroupBox->setObjectName(QString::fromUtf8("repeatDimGroupBox"));
        horizontalLayout = new QHBoxLayout(repeatDimGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        xRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        xRepeatCheckBox->setObjectName(QString::fromUtf8("xRepeatCheckBox"));
        xRepeatCheckBox->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: white;"));

        horizontalLayout->addWidget(xRepeatCheckBox);

        yRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        yRepeatCheckBox->setObjectName(QString::fromUtf8("yRepeatCheckBox"));
        yRepeatCheckBox->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"color: white;"));

        horizontalLayout->addWidget(yRepeatCheckBox);

        zRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        zRepeatCheckBox->setObjectName(QString::fromUtf8("zRepeatCheckBox"));
        zRepeatCheckBox->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));
        zRepeatCheckBox->setChecked(true);

        horizontalLayout->addWidget(zRepeatCheckBox);


        verticalLayout->addWidget(repeatDimGroupBox);

        extractContoursGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        extractContoursGroupBox->setObjectName(QString::fromUtf8("extractContoursGroupBox"));
        extractContoursGroupBox->setCheckable(true);
        extractContoursGroupBox->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(extractContoursGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(extractContoursGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        maxEdgeLengthDoubleSpinBox = new QDoubleSpinBox(extractContoursGroupBox);
        maxEdgeLengthDoubleSpinBox->setObjectName(QString::fromUtf8("maxEdgeLengthDoubleSpinBox"));
        maxEdgeLengthDoubleSpinBox->setDecimals(6);
        maxEdgeLengthDoubleSpinBox->setMaximum(1e+09);

        horizontalLayout_3->addWidget(maxEdgeLengthDoubleSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        multiPassCheckBox = new QCheckBox(extractContoursGroupBox);
        multiPassCheckBox->setObjectName(QString::fromUtf8("multiPassCheckBox"));

        verticalLayout_3->addWidget(multiPassCheckBox);

        projectOnBestFitCheckBox = new QCheckBox(extractContoursGroupBox);
        projectOnBestFitCheckBox->setObjectName(QString::fromUtf8("projectOnBestFitCheckBox"));

        verticalLayout_3->addWidget(projectOnBestFitCheckBox);

        splitContourCheckBox = new QCheckBox(extractContoursGroupBox);
        splitContourCheckBox->setObjectName(QString::fromUtf8("splitContourCheckBox"));

        verticalLayout_3->addWidget(splitContourCheckBox);

        debugModeCheckBox = new QCheckBox(extractContoursGroupBox);
        debugModeCheckBox->setObjectName(QString::fromUtf8("debugModeCheckBox"));

        verticalLayout_3->addWidget(debugModeCheckBox);


        verticalLayout->addWidget(extractContoursGroupBox);

        otherOptionsGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        otherOptionsGroupBox->setObjectName(QString::fromUtf8("otherOptionsGroupBox"));
        verticalLayout_2 = new QVBoxLayout(otherOptionsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(otherOptionsGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        gapDoubleSpinBox = new QDoubleSpinBox(otherOptionsGroupBox);
        gapDoubleSpinBox->setObjectName(QString::fromUtf8("gapDoubleSpinBox"));
        gapDoubleSpinBox->setDecimals(6);
        gapDoubleSpinBox->setMaximum(1e+09);

        horizontalLayout_2->addWidget(gapDoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        randomColorCheckBox = new QCheckBox(otherOptionsGroupBox);
        randomColorCheckBox->setObjectName(QString::fromUtf8("randomColorCheckBox"));

        verticalLayout_2->addWidget(randomColorCheckBox);


        verticalLayout->addWidget(otherOptionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ClippingBoxRepeatDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClippingBoxRepeatDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClippingBoxRepeatDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClippingBoxRepeatDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClippingBoxRepeatDlg);
    } // setupUi

    void retranslateUi(QDialog *ClippingBoxRepeatDlg)
    {
        ClippingBoxRepeatDlg->setWindowTitle(QApplication::translate("ClippingBoxRepeatDlg", "Repeat", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        repeatDimGroupBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "The segmentation process will be repeated along the following dimensions (+/-)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        repeatDimGroupBox->setTitle(QApplication::translate("ClippingBoxRepeatDlg", "Repeat dimensions", 0, QApplication::UnicodeUTF8));
        xRepeatCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "X", 0, QApplication::UnicodeUTF8));
        yRepeatCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "Y", 0, QApplication::UnicodeUTF8));
        zRepeatCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extractContoursGroupBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Check that option if you whish to extract contour(s) form each slice", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        extractContoursGroupBox->setTitle(QApplication::translate("ClippingBoxRepeatDlg", "Extract contour(s)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ClippingBoxRepeatDlg", "Max edge length", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxEdgeLengthDoubleSpinBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Max edge length (if 0, generates a unique and closed contour = convex hull)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        multiPassCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Multi-pass process where longer edges may be temporarilly created to obtain a better fit... or a worst one ;)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        multiPassCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "multi-pass", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        projectOnBestFitCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Before extracting the contour, points can be projected along the repeat dimension (if only one is defined) or on the best fit plane", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        projectOnBestFitCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "project slice(s) points on their best fit plane", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        splitContourCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "split the generated contour(s) in smaller parts to avoid creating edges longer than the specified max edge length.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        splitContourCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "split contour(s) on longer edges", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        debugModeCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Display a dialog with step-by-step execution of the algorithm (debug mode - very slow)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        debugModeCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "visual debug mode", 0, QApplication::UnicodeUTF8));
        otherOptionsGroupBox->setTitle(QApplication::translate("ClippingBoxRepeatDlg", "Other options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ClippingBoxRepeatDlg", "Gap", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gapDoubleSpinBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "Gap between the slices", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        randomColorCheckBox->setToolTip(QApplication::translate("ClippingBoxRepeatDlg", "If checked, a random color will be assigned to each slice (warning: will overwrite any existing color!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        randomColorCheckBox->setText(QApplication::translate("ClippingBoxRepeatDlg", "random colors per slice (will overwrite existing color!)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ClippingBoxRepeatDlg: public Ui_ClippingBoxRepeatDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPPINGBOXREPEATDLG_H
