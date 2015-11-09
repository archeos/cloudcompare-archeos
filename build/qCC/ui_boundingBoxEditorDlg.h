/********************************************************************************
** Form generated from reading UI file 'boundingBoxEditorDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUNDINGBOXEDITORDLG_H
#define UI_BOUNDINGBOXEDITORDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BoundingBoxEditorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *pointTypeComboBox;
    QComboBox *widthComboBox;
    QLabel *xLabel;
    QDoubleSpinBox *xDoubleSpinBox;
    QDoubleSpinBox *dxDoubleSpinBox;
    QLabel *yLabel;
    QDoubleSpinBox *yDoubleSpinBox;
    QDoubleSpinBox *dyDoubleSpinBox;
    QLabel *zLabel;
    QDoubleSpinBox *zDoubleSpinBox;
    QDoubleSpinBox *dzDoubleSpinBox;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *warningLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *keepSquareCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *defaultPushButton;
    QPushButton *lastPushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *BoundingBoxEditorDialog)
    {
        if (BoundingBoxEditorDialog->objectName().isEmpty())
            BoundingBoxEditorDialog->setObjectName(QString::fromUtf8("BoundingBoxEditorDialog"));
        BoundingBoxEditorDialog->resize(480, 190);
        BoundingBoxEditorDialog->setMaximumSize(QSize(16777215, 200));
        verticalLayout = new QVBoxLayout(BoundingBoxEditorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pointTypeComboBox = new QComboBox(BoundingBoxEditorDialog);
        pointTypeComboBox->setObjectName(QString::fromUtf8("pointTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pointTypeComboBox->sizePolicy().hasHeightForWidth());
        pointTypeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pointTypeComboBox, 0, 1, 1, 1);

        widthComboBox = new QComboBox(BoundingBoxEditorDialog);
        widthComboBox->setObjectName(QString::fromUtf8("widthComboBox"));
        sizePolicy.setHeightForWidth(widthComboBox->sizePolicy().hasHeightForWidth());
        widthComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(widthComboBox, 0, 2, 1, 1);

        xLabel = new QLabel(BoundingBoxEditorDialog);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));

        gridLayout->addWidget(xLabel, 1, 0, 1, 1);

        xDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        xDoubleSpinBox->setObjectName(QString::fromUtf8("xDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xDoubleSpinBox->setSizePolicy(sizePolicy);
        xDoubleSpinBox->setDecimals(8);
        xDoubleSpinBox->setMinimum(-1e+09);
        xDoubleSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(xDoubleSpinBox, 1, 1, 1, 1);

        dxDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dxDoubleSpinBox->setObjectName(QString::fromUtf8("dxDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dxDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dxDoubleSpinBox->setSizePolicy(sizePolicy);
        dxDoubleSpinBox->setDecimals(8);
        dxDoubleSpinBox->setMinimum(0);
        dxDoubleSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(dxDoubleSpinBox, 1, 2, 1, 1);

        yLabel = new QLabel(BoundingBoxEditorDialog);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));

        gridLayout->addWidget(yLabel, 2, 0, 1, 1);

        yDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        yDoubleSpinBox->setObjectName(QString::fromUtf8("yDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yDoubleSpinBox->setSizePolicy(sizePolicy);
        yDoubleSpinBox->setDecimals(8);
        yDoubleSpinBox->setMinimum(-1e+09);
        yDoubleSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(yDoubleSpinBox, 2, 1, 1, 1);

        dyDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dyDoubleSpinBox->setObjectName(QString::fromUtf8("dyDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dyDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dyDoubleSpinBox->setSizePolicy(sizePolicy);
        dyDoubleSpinBox->setDecimals(8);
        dyDoubleSpinBox->setMinimum(0);
        dyDoubleSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(dyDoubleSpinBox, 2, 2, 1, 1);

        zLabel = new QLabel(BoundingBoxEditorDialog);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));

        gridLayout->addWidget(zLabel, 3, 0, 1, 1);

        zDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        zDoubleSpinBox->setObjectName(QString::fromUtf8("zDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zDoubleSpinBox->setSizePolicy(sizePolicy);
        zDoubleSpinBox->setDecimals(8);
        zDoubleSpinBox->setMinimum(-1e+09);
        zDoubleSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(zDoubleSpinBox, 3, 1, 1, 1);

        dzDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dzDoubleSpinBox->setObjectName(QString::fromUtf8("dzDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dzDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dzDoubleSpinBox->setSizePolicy(sizePolicy);
        dzDoubleSpinBox->setDecimals(8);
        dzDoubleSpinBox->setMinimum(0);
        dzDoubleSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(dzDoubleSpinBox, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        frame = new QFrame(BoundingBoxEditorDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(0, 20));
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        warningLabel = new QLabel(frame);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(warningLabel);


        verticalLayout->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        keepSquareCheckBox = new QCheckBox(BoundingBoxEditorDialog);
        keepSquareCheckBox->setObjectName(QString::fromUtf8("keepSquareCheckBox"));

        horizontalLayout->addWidget(keepSquareCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        defaultPushButton = new QPushButton(BoundingBoxEditorDialog);
        defaultPushButton->setObjectName(QString::fromUtf8("defaultPushButton"));

        horizontalLayout->addWidget(defaultPushButton);

        lastPushButton = new QPushButton(BoundingBoxEditorDialog);
        lastPushButton->setObjectName(QString::fromUtf8("lastPushButton"));

        horizontalLayout->addWidget(lastPushButton);

        okPushButton = new QPushButton(BoundingBoxEditorDialog);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(BoundingBoxEditorDialog);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BoundingBoxEditorDialog);

        pointTypeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BoundingBoxEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *BoundingBoxEditorDialog)
    {
        BoundingBoxEditorDialog->setWindowTitle(QApplication::translate("BoundingBoxEditorDialog", "Bounding Box Editor", 0, QApplication::UnicodeUTF8));
        pointTypeComboBox->clear();
        pointTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("BoundingBoxEditorDialog", "Min corner", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BoundingBoxEditorDialog", "Center", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BoundingBoxEditorDialog", "Max corner", 0, QApplication::UnicodeUTF8)
        );
        widthComboBox->clear();
        widthComboBox->insertItems(0, QStringList()
         << QApplication::translate("BoundingBoxEditorDialog", "Width", 0, QApplication::UnicodeUTF8)
        );
        xLabel->setText(QApplication::translate("BoundingBoxEditorDialog", "X", 0, QApplication::UnicodeUTF8));
        yLabel->setText(QApplication::translate("BoundingBoxEditorDialog", "Y", 0, QApplication::UnicodeUTF8));
        zLabel->setText(QApplication::translate("BoundingBoxEditorDialog", "Z", 0, QApplication::UnicodeUTF8));
        warningLabel->setText(QApplication::translate("BoundingBoxEditorDialog", "Warning, this box doesn't include the cloud bounding-box!", 0, QApplication::UnicodeUTF8));
        keepSquareCheckBox->setText(QApplication::translate("BoundingBoxEditorDialog", "keep square", 0, QApplication::UnicodeUTF8));
        defaultPushButton->setText(QApplication::translate("BoundingBoxEditorDialog", "Default", 0, QApplication::UnicodeUTF8));
        lastPushButton->setText(QApplication::translate("BoundingBoxEditorDialog", "Last", 0, QApplication::UnicodeUTF8));
        okPushButton->setText(QApplication::translate("BoundingBoxEditorDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelPushButton->setText(QApplication::translate("BoundingBoxEditorDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BoundingBoxEditorDialog: public Ui_BoundingBoxEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUNDINGBOXEDITORDLG_H
