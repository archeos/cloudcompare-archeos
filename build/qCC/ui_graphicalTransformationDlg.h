/********************************************************************************
** Form generated from reading UI file 'graphicalTransformationDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICALTRANSFORMATIONDLG_H
#define UI_GRAPHICALTRANSFORMATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GraphicalTransformationDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *pauseButton;
    QToolButton *razButton;
    QToolButton *okButton;
    QToolButton *cancelButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *rotComboBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *TxCheckBox;
    QCheckBox *TyCheckBox;
    QCheckBox *TzCheckBox;

    void setupUi(QDialog *GraphicalTransformationDlg)
    {
        if (GraphicalTransformationDlg->objectName().isEmpty())
            GraphicalTransformationDlg->setObjectName(QString::fromUtf8("GraphicalTransformationDlg"));
        GraphicalTransformationDlg->resize(136, 90);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphicalTransformationDlg->sizePolicy().hasHeightForWidth());
        GraphicalTransformationDlg->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(GraphicalTransformationDlg);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(GraphicalTransformationDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pauseButton = new QToolButton(frame);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setMinimumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/smallPause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon);
        pauseButton->setCheckable(true);
        pauseButton->setChecked(false);

        horizontalLayout->addWidget(pauseButton);

        razButton = new QToolButton(frame);
        razButton->setObjectName(QString::fromUtf8("razButton"));
        razButton->setMinimumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        razButton->setIcon(icon1);

        horizontalLayout->addWidget(razButton);

        okButton = new QToolButton(frame);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(25, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon2);

        horizontalLayout->addWidget(okButton);

        cancelButton = new QToolButton(frame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon3);

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addWidget(frame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(GraphicalTransformationDlg);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        rotComboBox = new QComboBox(GraphicalTransformationDlg);
        rotComboBox->setObjectName(QString::fromUtf8("rotComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rotComboBox->sizePolicy().hasHeightForWidth());
        rotComboBox->setSizePolicy(sizePolicy3);
        rotComboBox->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(rotComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        TxCheckBox = new QCheckBox(GraphicalTransformationDlg);
        TxCheckBox->setObjectName(QString::fromUtf8("TxCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TxCheckBox->sizePolicy().hasHeightForWidth());
        TxCheckBox->setSizePolicy(sizePolicy4);
        TxCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(TxCheckBox);

        TyCheckBox = new QCheckBox(GraphicalTransformationDlg);
        TyCheckBox->setObjectName(QString::fromUtf8("TyCheckBox"));
        sizePolicy4.setHeightForWidth(TyCheckBox->sizePolicy().hasHeightForWidth());
        TyCheckBox->setSizePolicy(sizePolicy4);
        TyCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(TyCheckBox);

        TzCheckBox = new QCheckBox(GraphicalTransformationDlg);
        TzCheckBox->setObjectName(QString::fromUtf8("TzCheckBox"));
        sizePolicy4.setHeightForWidth(TzCheckBox->sizePolicy().hasHeightForWidth());
        TzCheckBox->setSizePolicy(sizePolicy4);
        TzCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(TzCheckBox);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(GraphicalTransformationDlg);

        QMetaObject::connectSlotsByName(GraphicalTransformationDlg);
    } // setupUi

    void retranslateUi(QDialog *GraphicalTransformationDlg)
    {
        GraphicalTransformationDlg->setWindowTitle(QApplication::translate("GraphicalTransformationDlg", "Graphical Transformation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pauseButton->setToolTip(QApplication::translate("GraphicalTransformationDlg", "Pause segmentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pauseButton->setStatusTip(QApplication::translate("GraphicalTransformationDlg", "Pause transformation  (allow rotation/panning of 3D view)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        pauseButton->setText(QApplication::translate("GraphicalTransformationDlg", "pause", 0, QApplication::UnicodeUTF8));
        razButton->setText(QApplication::translate("GraphicalTransformationDlg", "...", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("GraphicalTransformationDlg", "...", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("GraphicalTransformationDlg", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GraphicalTransformationDlg", "Rotation", 0, QApplication::UnicodeUTF8));
        rotComboBox->clear();
        rotComboBox->insertItems(0, QStringList()
         << QApplication::translate("GraphicalTransformationDlg", "XYZ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GraphicalTransformationDlg", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GraphicalTransformationDlg", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GraphicalTransformationDlg", "Z", 0, QApplication::UnicodeUTF8)
        );
        TxCheckBox->setText(QApplication::translate("GraphicalTransformationDlg", "Tx", 0, QApplication::UnicodeUTF8));
        TyCheckBox->setText(QApplication::translate("GraphicalTransformationDlg", "Ty", 0, QApplication::UnicodeUTF8));
        TzCheckBox->setText(QApplication::translate("GraphicalTransformationDlg", "Tz", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GraphicalTransformationDlg: public Ui_GraphicalTransformationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICALTRANSFORMATIONDLG_H
