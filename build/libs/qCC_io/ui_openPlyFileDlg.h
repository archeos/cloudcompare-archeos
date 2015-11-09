/********************************************************************************
** Form generated from reading UI file 'openPlyFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENPLYFILEDLG_H
#define UI_OPENPLYFILEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PlyOpenDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *plyTypeEdit;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QLineEdit *elementsEdit;
    QLabel *label_3;
    QLineEdit *propertiesEdit;
    QLabel *label_18;
    QLineEdit *textureCountEdit;
    QFormLayout *formLayout;
    QLabel *label_4;
    QComboBox *xComboBox;
    QLabel *label_5;
    QComboBox *yComboBox;
    QLabel *label_6;
    QComboBox *zComboBox;
    QLabel *label_7;
    QComboBox *rComboBox;
    QLabel *label_8;
    QComboBox *gComboBox;
    QLabel *label_9;
    QComboBox *bComboBox;
    QLabel *label_10;
    QComboBox *iComboBox;
    QLabel *label_12;
    QComboBox *nxComboBox;
    QLabel *label_13;
    QComboBox *nyComboBox;
    QLabel *label_14;
    QComboBox *nzComboBox;
    QLabel *label_15;
    QComboBox *facesComboBox;
    QLabel *label_16;
    QComboBox *textCoordsComboBox;
    QComboBox *sfComboBox;
    QLabel *label_11;
    QLabel *label_17;
    QComboBox *texIndexComboBox;
    QToolButton *addSFToolButton;
    QSpacerItem *verticalSpacer;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *applyButton;
    QPushButton *applyAllButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PlyOpenDlg)
    {
        if (PlyOpenDlg->objectName().isEmpty())
            PlyOpenDlg->setObjectName(QString::fromUtf8("PlyOpenDlg"));
        PlyOpenDlg->setWindowModality(Qt::ApplicationModal);
        PlyOpenDlg->resize(334, 530);
        verticalLayout = new QVBoxLayout(PlyOpenDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(PlyOpenDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(label);

        plyTypeEdit = new QLineEdit(PlyOpenDlg);
        plyTypeEdit->setObjectName(QString::fromUtf8("plyTypeEdit"));
        plyTypeEdit->setReadOnly(true);

        hboxLayout->addWidget(plyTypeEdit);


        verticalLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(PlyOpenDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        elementsEdit = new QLineEdit(PlyOpenDlg);
        elementsEdit->setObjectName(QString::fromUtf8("elementsEdit"));
        elementsEdit->setMaximumSize(QSize(50, 16777215));
        elementsEdit->setMaxLength(3);
        elementsEdit->setReadOnly(true);

        hboxLayout1->addWidget(elementsEdit);

        label_3 = new QLabel(PlyOpenDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        propertiesEdit = new QLineEdit(PlyOpenDlg);
        propertiesEdit->setObjectName(QString::fromUtf8("propertiesEdit"));
        propertiesEdit->setMaximumSize(QSize(50, 16777215));
        propertiesEdit->setMaxLength(3);
        propertiesEdit->setReadOnly(true);

        hboxLayout1->addWidget(propertiesEdit);

        label_18 = new QLabel(PlyOpenDlg);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        hboxLayout1->addWidget(label_18);

        textureCountEdit = new QLineEdit(PlyOpenDlg);
        textureCountEdit->setObjectName(QString::fromUtf8("textureCountEdit"));
        textureCountEdit->setMaximumSize(QSize(50, 16777215));
        textureCountEdit->setMaxLength(3);

        hboxLayout1->addWidget(textureCountEdit);


        verticalLayout->addLayout(hboxLayout1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, 4, 0, 4);
        label_4 = new QLabel(PlyOpenDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        xComboBox = new QComboBox(PlyOpenDlg);
        xComboBox->setObjectName(QString::fromUtf8("xComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, xComboBox);

        label_5 = new QLabel(PlyOpenDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        yComboBox = new QComboBox(PlyOpenDlg);
        yComboBox->setObjectName(QString::fromUtf8("yComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, yComboBox);

        label_6 = new QLabel(PlyOpenDlg);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        zComboBox = new QComboBox(PlyOpenDlg);
        zComboBox->setObjectName(QString::fromUtf8("zComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, zComboBox);

        label_7 = new QLabel(PlyOpenDlg);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        rComboBox = new QComboBox(PlyOpenDlg);
        rComboBox->setObjectName(QString::fromUtf8("rComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, rComboBox);

        label_8 = new QLabel(PlyOpenDlg);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        gComboBox = new QComboBox(PlyOpenDlg);
        gComboBox->setObjectName(QString::fromUtf8("gComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, gComboBox);

        label_9 = new QLabel(PlyOpenDlg);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        bComboBox = new QComboBox(PlyOpenDlg);
        bComboBox->setObjectName(QString::fromUtf8("bComboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, bComboBox);

        label_10 = new QLabel(PlyOpenDlg);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_10);

        iComboBox = new QComboBox(PlyOpenDlg);
        iComboBox->setObjectName(QString::fromUtf8("iComboBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, iComboBox);

        label_12 = new QLabel(PlyOpenDlg);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_12);

        nxComboBox = new QComboBox(PlyOpenDlg);
        nxComboBox->setObjectName(QString::fromUtf8("nxComboBox"));

        formLayout->setWidget(8, QFormLayout::FieldRole, nxComboBox);

        label_13 = new QLabel(PlyOpenDlg);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_13);

        nyComboBox = new QComboBox(PlyOpenDlg);
        nyComboBox->setObjectName(QString::fromUtf8("nyComboBox"));

        formLayout->setWidget(9, QFormLayout::FieldRole, nyComboBox);

        label_14 = new QLabel(PlyOpenDlg);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_14);

        nzComboBox = new QComboBox(PlyOpenDlg);
        nzComboBox->setObjectName(QString::fromUtf8("nzComboBox"));

        formLayout->setWidget(10, QFormLayout::FieldRole, nzComboBox);

        label_15 = new QLabel(PlyOpenDlg);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_15);

        facesComboBox = new QComboBox(PlyOpenDlg);
        facesComboBox->setObjectName(QString::fromUtf8("facesComboBox"));

        formLayout->setWidget(11, QFormLayout::FieldRole, facesComboBox);

        label_16 = new QLabel(PlyOpenDlg);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_16);

        textCoordsComboBox = new QComboBox(PlyOpenDlg);
        textCoordsComboBox->setObjectName(QString::fromUtf8("textCoordsComboBox"));

        formLayout->setWidget(12, QFormLayout::FieldRole, textCoordsComboBox);

        sfComboBox = new QComboBox(PlyOpenDlg);
        sfComboBox->setObjectName(QString::fromUtf8("sfComboBox"));

        formLayout->setWidget(14, QFormLayout::FieldRole, sfComboBox);

        label_11 = new QLabel(PlyOpenDlg);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(14, QFormLayout::LabelRole, label_11);

        label_17 = new QLabel(PlyOpenDlg);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_17);

        texIndexComboBox = new QComboBox(PlyOpenDlg);
        texIndexComboBox->setObjectName(QString::fromUtf8("texIndexComboBox"));

        formLayout->setWidget(13, QFormLayout::FieldRole, texIndexComboBox);


        verticalLayout->addLayout(formLayout);

        addSFToolButton = new QToolButton(PlyOpenDlg);
        addSFToolButton->setObjectName(QString::fromUtf8("addSFToolButton"));

        verticalLayout->addWidget(addSFToolButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonFrame = new QFrame(PlyOpenDlg);
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


        verticalLayout->addWidget(buttonFrame);


        retranslateUi(PlyOpenDlg);

        QMetaObject::connectSlotsByName(PlyOpenDlg);
    } // setupUi

    void retranslateUi(QDialog *PlyOpenDlg)
    {
        PlyOpenDlg->setWindowTitle(QApplication::translate("PlyOpenDlg", "Ply File Open", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PlyOpenDlg", "Type", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PlyOpenDlg", "Elements", 0, QApplication::UnicodeUTF8));
        elementsEdit->setText(QApplication::translate("PlyOpenDlg", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PlyOpenDlg", "Properties", 0, QApplication::UnicodeUTF8));
        propertiesEdit->setText(QApplication::translate("PlyOpenDlg", "0", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("PlyOpenDlg", "Textures", 0, QApplication::UnicodeUTF8));
        textureCountEdit->setText(QApplication::translate("PlyOpenDlg", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PlyOpenDlg", "Point X", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PlyOpenDlg", "Point Y", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PlyOpenDlg", "Point Z", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PlyOpenDlg", "Red", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PlyOpenDlg", "Green", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PlyOpenDlg", "Blue", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PlyOpenDlg", "Intensity", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("PlyOpenDlg", "Nx", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("PlyOpenDlg", "Ny", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("PlyOpenDlg", "Nz", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("PlyOpenDlg", "Faces", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("PlyOpenDlg", "Texture coordinates", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PlyOpenDlg", "Scalar", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("PlyOpenDlg", "Texture index", 0, QApplication::UnicodeUTF8));
        addSFToolButton->setText(QApplication::translate("PlyOpenDlg", "Add Scalar field", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("PlyOpenDlg", "Apply", 0, QApplication::UnicodeUTF8));
        applyAllButton->setText(QApplication::translate("PlyOpenDlg", "Apply all", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("PlyOpenDlg", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PlyOpenDlg: public Ui_PlyOpenDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENPLYFILEDLG_H
