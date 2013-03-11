/********************************************************************************
** Form generated from reading UI file 'shiftAndScaleCloudDlg.ui'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIFTANDSCALECLOUDDLG_H
#define UI_SHIFTANDSCALECLOUDDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShiftAndScaleCloudDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *firstPointFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QLabel *firstPointCoordsLabel;
    QSpacerItem *horizontalSpacer_4;
    QFrame *scaleInfoFrame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QLabel *cloudDiagonalLabel;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QLabel *label_2;
    QHBoxLayout *shiftFrame;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label1;
    QDoubleSpinBox *shiftX;
    QDoubleSpinBox *shiftY;
    QDoubleSpinBox *shiftZ;
    QSpacerItem *horizontalSpacer;
    QFrame *scaleFrame;
    QHBoxLayout *layout_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label1_2;
    QDoubleSpinBox *scaleSpinBox;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line_2;
    QLabel *warningLabel;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ShiftAndScaleCloudDlg)
    {
        if (ShiftAndScaleCloudDlg->objectName().isEmpty())
            ShiftAndScaleCloudDlg->setObjectName(QString::fromUtf8("ShiftAndScaleCloudDlg"));
        ShiftAndScaleCloudDlg->resize(432, 249);
        verticalLayout = new QVBoxLayout(ShiftAndScaleCloudDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ShiftAndScaleCloudDlg);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        firstPointFrame = new QFrame(ShiftAndScaleCloudDlg);
        firstPointFrame->setObjectName(QString::fromUtf8("firstPointFrame"));
        firstPointFrame->setFrameShape(QFrame::NoFrame);
        firstPointFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(firstPointFrame);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_6 = new QLabel(firstPointFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        firstPointCoordsLabel = new QLabel(firstPointFrame);
        firstPointCoordsLabel->setObjectName(QString::fromUtf8("firstPointCoordsLabel"));

        horizontalLayout_2->addWidget(firstPointCoordsLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(firstPointFrame);

        scaleInfoFrame = new QFrame(ShiftAndScaleCloudDlg);
        scaleInfoFrame->setObjectName(QString::fromUtf8("scaleInfoFrame"));
        scaleInfoFrame->setFrameShape(QFrame::NoFrame);
        scaleInfoFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(scaleInfoFrame);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_7 = new QLabel(scaleInfoFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        cloudDiagonalLabel = new QLabel(scaleInfoFrame);
        cloudDiagonalLabel->setObjectName(QString::fromUtf8("cloudDiagonalLabel"));

        horizontalLayout_3->addWidget(cloudDiagonalLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(scaleInfoFrame);

        line = new QFrame(ShiftAndScaleCloudDlg);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(ShiftAndScaleCloudDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        shiftFrame = new QHBoxLayout();
        shiftFrame->setObjectName(QString::fromUtf8("shiftFrame"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        shiftFrame->addItem(horizontalSpacer_2);

        label1 = new QLabel(ShiftAndScaleCloudDlg);
        label1->setObjectName(QString::fromUtf8("label1"));

        shiftFrame->addWidget(label1);

        shiftX = new QDoubleSpinBox(ShiftAndScaleCloudDlg);
        shiftX->setObjectName(QString::fromUtf8("shiftX"));
        shiftX->setDecimals(2);
        shiftX->setMinimum(-1e+09);
        shiftX->setMaximum(1e+09);

        shiftFrame->addWidget(shiftX);

        shiftY = new QDoubleSpinBox(ShiftAndScaleCloudDlg);
        shiftY->setObjectName(QString::fromUtf8("shiftY"));
        shiftY->setMinimum(-1e+09);
        shiftY->setMaximum(1e+09);

        shiftFrame->addWidget(shiftY);

        shiftZ = new QDoubleSpinBox(ShiftAndScaleCloudDlg);
        shiftZ->setObjectName(QString::fromUtf8("shiftZ"));
        shiftZ->setMinimum(-1e+09);
        shiftZ->setMaximum(1e+09);

        shiftFrame->addWidget(shiftZ);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        shiftFrame->addItem(horizontalSpacer);


        verticalLayout->addLayout(shiftFrame);

        scaleFrame = new QFrame(ShiftAndScaleCloudDlg);
        scaleFrame->setObjectName(QString::fromUtf8("scaleFrame"));
        layout_2 = new QHBoxLayout(scaleFrame);
        layout_2->setObjectName(QString::fromUtf8("layout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_2->addItem(horizontalSpacer_7);

        label1_2 = new QLabel(scaleFrame);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));

        layout_2->addWidget(label1_2);

        scaleSpinBox = new QDoubleSpinBox(scaleFrame);
        scaleSpinBox->setObjectName(QString::fromUtf8("scaleSpinBox"));
        scaleSpinBox->setDecimals(6);
        scaleSpinBox->setMinimum(-1e+09);
        scaleSpinBox->setMaximum(1e+09);

        layout_2->addWidget(scaleSpinBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_2->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(scaleFrame);

        line_2 = new QFrame(ShiftAndScaleCloudDlg);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        warningLabel = new QLabel(ShiftAndScaleCloudDlg);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(106, 104, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        warningLabel->setPalette(palette);
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(warningLabel);

        label_3 = new QLabel(ShiftAndScaleCloudDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setItalic(true);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ShiftAndScaleCloudDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes|QDialogButtonBox::YesToAll);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ShiftAndScaleCloudDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ShiftAndScaleCloudDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ShiftAndScaleCloudDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShiftAndScaleCloudDlg);
    } // setupUi

    void retranslateUi(QDialog *ShiftAndScaleCloudDlg)
    {
        ShiftAndScaleCloudDlg->setWindowTitle(QApplication::translate("ShiftAndScaleCloudDlg", "Recenter cloud?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ShiftAndScaleCloudDlg", "Cloud coordinates are too big (original precision may be lost)!", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ShiftAndScaleCloudDlg", "Typical coordinates:", 0, QApplication::UnicodeUTF8));
        firstPointCoordsLabel->setText(QApplication::translate("ShiftAndScaleCloudDlg", "(0,0,0)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ShiftAndScaleCloudDlg", "Bounding box diagonal:", 0, QApplication::UnicodeUTF8));
        cloudDiagonalLabel->setText(QApplication::translate("ShiftAndScaleCloudDlg", "0.0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ShiftAndScaleCloudDlg", "Do you wish to modify the cloud or leave it unchanged?", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("ShiftAndScaleCloudDlg", "Shift", 0, QApplication::UnicodeUTF8));
        label1_2->setText(QApplication::translate("ShiftAndScaleCloudDlg", "Scale", 0, QApplication::UnicodeUTF8));
        warningLabel->setText(QApplication::translate("ShiftAndScaleCloudDlg", "Warning: precedent shift information doesn't seem pertinent for this file", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ShiftAndScaleCloudDlg", "shift/scale information will be stored and used to center back the cloud on save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShiftAndScaleCloudDlg: public Ui_ShiftAndScaleCloudDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIFTANDSCALECLOUDDLG_H
