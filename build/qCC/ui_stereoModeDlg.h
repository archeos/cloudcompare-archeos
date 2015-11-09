/********************************************************************************
** Form generated from reading UI file 'stereoModeDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEREOMODEDLG_H
#define UI_STEREOMODEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StereoModeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *glassTypeComboBox;
    QLabel *label_2;
    QDoubleSpinBox *focalDoubleSpinBox;
    QCheckBox *autoFocalCheckBox;
    QLabel *label_3;
    QDoubleSpinBox *eyeSepDoubleSpinBox;
    QLabel *autoFocusLabel;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StereoModeDialog)
    {
        if (StereoModeDialog->objectName().isEmpty())
            StereoModeDialog->setObjectName(QString::fromUtf8("StereoModeDialog"));
        StereoModeDialog->resize(350, 160);
        verticalLayout = new QVBoxLayout(StereoModeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(StereoModeDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        glassTypeComboBox = new QComboBox(frame);
        glassTypeComboBox->setObjectName(QString::fromUtf8("glassTypeComboBox"));

        gridLayout->addWidget(glassTypeComboBox, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        focalDoubleSpinBox = new QDoubleSpinBox(frame);
        focalDoubleSpinBox->setObjectName(QString::fromUtf8("focalDoubleSpinBox"));
        focalDoubleSpinBox->setEnabled(false);
        focalDoubleSpinBox->setDecimals(3);
        focalDoubleSpinBox->setMinimum(0);
        focalDoubleSpinBox->setMaximum(1e+06);
        focalDoubleSpinBox->setValue(5);

        gridLayout->addWidget(focalDoubleSpinBox, 2, 1, 1, 1);

        autoFocalCheckBox = new QCheckBox(frame);
        autoFocalCheckBox->setObjectName(QString::fromUtf8("autoFocalCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(autoFocalCheckBox->sizePolicy().hasHeightForWidth());
        autoFocalCheckBox->setSizePolicy(sizePolicy);
        autoFocalCheckBox->setChecked(true);

        gridLayout->addWidget(autoFocalCheckBox, 2, 2, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        eyeSepDoubleSpinBox = new QDoubleSpinBox(frame);
        eyeSepDoubleSpinBox->setObjectName(QString::fromUtf8("eyeSepDoubleSpinBox"));
        eyeSepDoubleSpinBox->setDecimals(1);
        eyeSepDoubleSpinBox->setMinimum(0.1);
        eyeSepDoubleSpinBox->setSingleStep(0.1);
        eyeSepDoubleSpinBox->setValue(3.3);

        gridLayout->addWidget(eyeSepDoubleSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(frame);

        autoFocusLabel = new QLabel(StereoModeDialog);
        autoFocusLabel->setObjectName(QString::fromUtf8("autoFocusLabel"));
        QFont font;
        font.setItalic(true);
        autoFocusLabel->setFont(font);
        autoFocusLabel->setStyleSheet(QString::fromUtf8("color: blue;"));

        verticalLayout->addWidget(autoFocusLabel);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(StereoModeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StereoModeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StereoModeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StereoModeDialog, SLOT(reject()));
        QObject::connect(autoFocalCheckBox, SIGNAL(toggled(bool)), focalDoubleSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(autoFocalCheckBox, SIGNAL(toggled(bool)), autoFocusLabel, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(StereoModeDialog);
    } // setupUi

    void retranslateUi(QDialog *StereoModeDialog)
    {
        StereoModeDialog->setWindowTitle(QApplication::translate("StereoModeDialog", "Stereo mode", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StereoModeDialog", "Glasses", 0, QApplication::UnicodeUTF8));
        glassTypeComboBox->clear();
        glassTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("StereoModeDialog", "Red-Blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("StereoModeDialog", "Red-Cyan", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("StereoModeDialog", "Focal distance", 0, QApplication::UnicodeUTF8));
        autoFocalCheckBox->setText(QApplication::translate("StereoModeDialog", "auto", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("StereoModeDialog", "Eyes separation", 0, QApplication::UnicodeUTF8));
        eyeSepDoubleSpinBox->setSuffix(QApplication::translate("StereoModeDialog", "%", 0, QApplication::UnicodeUTF8));
        autoFocusLabel->setText(QApplication::translate("StereoModeDialog", "Note: the focus will depend on the distance to the rotation center", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StereoModeDialog: public Ui_StereoModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEREOMODEDLG_H
