/********************************************************************************
** Form generated from reading UI file 'sectionExtractionDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONEXTRACTIONDLG_H
#define UI_SECTIONEXTRACTIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SectionExtractionDlg
{
public:
    QHBoxLayout *horizontalLayout_2;
    QToolButton *polylineToolButton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *importFromDBToolButton;
    QToolButton *generateOrthoSectionsToolButton;
    QToolButton *extractPointsToolButton;
    QToolButton *exportSectionsToolButton;
    QToolButton *undoToolButton;
    QToolButton *cancelToolButton;
    QToolButton *validToolButton;
    QLabel *label;
    QComboBox *vertAxisComboBox;

    void setupUi(QDialog *SectionExtractionDlg)
    {
        if (SectionExtractionDlg->objectName().isEmpty())
            SectionExtractionDlg->setObjectName(QString::fromUtf8("SectionExtractionDlg"));
        SectionExtractionDlg->resize(304, 26);
        horizontalLayout_2 = new QHBoxLayout(SectionExtractionDlg);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        polylineToolButton = new QToolButton(SectionExtractionDlg);
        polylineToolButton->setObjectName(QString::fromUtf8("polylineToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        polylineToolButton->setIcon(icon);
        polylineToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(polylineToolButton);

        frame = new QFrame(SectionExtractionDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        importFromDBToolButton = new QToolButton(frame);
        importFromDBToolButton->setObjectName(QString::fromUtf8("importFromDBToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/dbHObjectSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        importFromDBToolButton->setIcon(icon1);

        horizontalLayout->addWidget(importFromDBToolButton);

        generateOrthoSectionsToolButton = new QToolButton(frame);
        generateOrthoSectionsToolButton->setObjectName(QString::fromUtf8("generateOrthoSectionsToolButton"));
        generateOrthoSectionsToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/orthoSections.png"), QSize(), QIcon::Normal, QIcon::Off);
        generateOrthoSectionsToolButton->setIcon(icon2);

        horizontalLayout->addWidget(generateOrthoSectionsToolButton);

        extractPointsToolButton = new QToolButton(frame);
        extractPointsToolButton->setObjectName(QString::fromUtf8("extractPointsToolButton"));
        extractPointsToolButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/sectionExtraction.png"), QSize(), QIcon::Normal, QIcon::Off);
        extractPointsToolButton->setIcon(icon3);

        horizontalLayout->addWidget(extractPointsToolButton);

        exportSectionsToolButton = new QToolButton(frame);
        exportSectionsToolButton->setObjectName(QString::fromUtf8("exportSectionsToolButton"));
        exportSectionsToolButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportSectionsToolButton->setIcon(icon4);

        horizontalLayout->addWidget(exportSectionsToolButton);

        undoToolButton = new QToolButton(frame);
        undoToolButton->setObjectName(QString::fromUtf8("undoToolButton"));
        undoToolButton->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoToolButton->setIcon(icon5);

        horizontalLayout->addWidget(undoToolButton);

        cancelToolButton = new QToolButton(frame);
        cancelToolButton->setObjectName(QString::fromUtf8("cancelToolButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelToolButton->setIcon(icon6);

        horizontalLayout->addWidget(cancelToolButton);

        validToolButton = new QToolButton(frame);
        validToolButton->setObjectName(QString::fromUtf8("validToolButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validToolButton->setIcon(icon7);

        horizontalLayout->addWidget(validToolButton);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        vertAxisComboBox = new QComboBox(frame);
        vertAxisComboBox->setObjectName(QString::fromUtf8("vertAxisComboBox"));

        horizontalLayout->addWidget(vertAxisComboBox);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(SectionExtractionDlg);
        QObject::connect(polylineToolButton, SIGNAL(toggled(bool)), frame, SLOT(setDisabled(bool)));

        vertAxisComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SectionExtractionDlg);
    } // setupUi

    void retranslateUi(QDialog *SectionExtractionDlg)
    {
        SectionExtractionDlg->setWindowTitle(QApplication::translate("SectionExtractionDlg", "Section Extraction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        polylineToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Create polyline by clicking on the screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        importFromDBToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Import one or several polylines from DB", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        generateOrthoSectionsToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Generate orthogonal sections along a path", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        extractPointsToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Extract points along active sections", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        exportSectionsToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Export manually defined sections to DB", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        undoToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Undo last polyline(s) addition", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        undoToolButton->setText(QApplication::translate("SectionExtractionDlg", "raz", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        validToolButton->setToolTip(QApplication::translate("SectionExtractionDlg", "Close the tool", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        validToolButton->setStatusTip(QApplication::translate("SectionExtractionDlg", "Close the tool", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        validToolButton->setText(QApplication::translate("SectionExtractionDlg", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SectionExtractionDlg", "Vert.", 0, QApplication::UnicodeUTF8));
        vertAxisComboBox->clear();
        vertAxisComboBox->insertItems(0, QStringList()
         << QApplication::translate("SectionExtractionDlg", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SectionExtractionDlg", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SectionExtractionDlg", "Z", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class SectionExtractionDlg: public Ui_SectionExtractionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONEXTRACTIONDLG_H
