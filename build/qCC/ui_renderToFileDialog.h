/********************************************************************************
** Form generated from reading UI file 'renderToFileDialog.ui'
**
** Created: Sun Mar 10 15:48:35 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERTOFILEDIALOG_H
#define UI_RENDERTOFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenderToFileDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *filenameLineEdit;
    QToolButton *chooseFileButton;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QDoubleSpinBox *zoomDoubleSpinBox;
    QLabel *label_3;
    QLabel *finalSizeLabel;
    QSpacerItem *spacerItem;
    QCheckBox *dontScaleFeaturesCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenderToFileDialog)
    {
        if (RenderToFileDialog->objectName().isEmpty())
            RenderToFileDialog->setObjectName(QString::fromUtf8("RenderToFileDialog"));
        RenderToFileDialog->resize(350, 123);
        vboxLayout = new QVBoxLayout(RenderToFileDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(RenderToFileDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        filenameLineEdit = new QLineEdit(RenderToFileDialog);
        filenameLineEdit->setObjectName(QString::fromUtf8("filenameLineEdit"));

        hboxLayout->addWidget(filenameLineEdit);

        chooseFileButton = new QToolButton(RenderToFileDialog);
        chooseFileButton->setObjectName(QString::fromUtf8("chooseFileButton"));

        hboxLayout->addWidget(chooseFileButton);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(RenderToFileDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        zoomDoubleSpinBox = new QDoubleSpinBox(RenderToFileDialog);
        zoomDoubleSpinBox->setObjectName(QString::fromUtf8("zoomDoubleSpinBox"));
        zoomDoubleSpinBox->setMinimum(1);
        zoomDoubleSpinBox->setMaximum(100);

        hboxLayout1->addWidget(zoomDoubleSpinBox);

        label_3 = new QLabel(RenderToFileDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        finalSizeLabel = new QLabel(RenderToFileDialog);
        finalSizeLabel->setObjectName(QString::fromUtf8("finalSizeLabel"));

        hboxLayout1->addWidget(finalSizeLabel);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout1);

        dontScaleFeaturesCheckBox = new QCheckBox(RenderToFileDialog);
        dontScaleFeaturesCheckBox->setObjectName(QString::fromUtf8("dontScaleFeaturesCheckBox"));

        vboxLayout->addWidget(dontScaleFeaturesCheckBox);

        buttonBox = new QDialogButtonBox(RenderToFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(RenderToFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RenderToFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RenderToFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RenderToFileDialog);
    } // setupUi

    void retranslateUi(QDialog *RenderToFileDialog)
    {
        RenderToFileDialog->setWindowTitle(QApplication::translate("RenderToFileDialog", "Render to file", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RenderToFileDialog", "Filename", 0, QApplication::UnicodeUTF8));
        chooseFileButton->setText(QApplication::translate("RenderToFileDialog", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RenderToFileDialog", "Zoom", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RenderToFileDialog", "Result:", 0, QApplication::UnicodeUTF8));
        finalSizeLabel->setText(QApplication::translate("RenderToFileDialog", "(? x ?)", 0, QApplication::UnicodeUTF8));
        dontScaleFeaturesCheckBox->setText(QApplication::translate("RenderToFileDialog", "Don't scale features (e.g. points size, lines thickness, text, etc.)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenderToFileDialog: public Ui_RenderToFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERTOFILEDIALOG_H
