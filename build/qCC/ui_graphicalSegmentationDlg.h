/********************************************************************************
** Form generated from reading UI file 'graphicalSegmentationDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICALSEGMENTATIONDLG_H
#define UI_GRAPHICALSEGMENTATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_GraphicalSegmentationDlg
{
public:
    QAction *actionSetRectangularSelection;
    QAction *actionSetPolylineSelection;
    QAction *actionUseExistingPolyline;
    QAction *actionExportSegmentationPolyline;
    QHBoxLayout *hboxLayout;
    QToolButton *pauseButton;
    QToolButton *loadSaveToolButton;
    QToolButton *selectionModelButton;
    QToolButton *inButton;
    QToolButton *outButton;
    QToolButton *razButton;
    QToolButton *validButton;
    QToolButton *validAndDeleteButton;
    QToolButton *cancelButton;

    void setupUi(QDialog *GraphicalSegmentationDlg)
    {
        if (GraphicalSegmentationDlg->objectName().isEmpty())
            GraphicalSegmentationDlg->setObjectName(QString::fromUtf8("GraphicalSegmentationDlg"));
        GraphicalSegmentationDlg->resize(251, 26);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphicalSegmentationDlg->sizePolicy().hasHeightForWidth());
        GraphicalSegmentationDlg->setSizePolicy(sizePolicy);
        actionSetRectangularSelection = new QAction(GraphicalSegmentationDlg);
        actionSetRectangularSelection->setObjectName(QString::fromUtf8("actionSetRectangularSelection"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/smallRectangleSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetRectangularSelection->setIcon(icon);
        actionSetPolylineSelection = new QAction(GraphicalSegmentationDlg);
        actionSetPolylineSelection->setObjectName(QString::fromUtf8("actionSetPolylineSelection"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/smallPolygonSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPolylineSelection->setIcon(icon1);
        actionUseExistingPolyline = new QAction(GraphicalSegmentationDlg);
        actionUseExistingPolyline->setObjectName(QString::fromUtf8("actionUseExistingPolyline"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUseExistingPolyline->setIcon(icon2);
        actionExportSegmentationPolyline = new QAction(GraphicalSegmentationDlg);
        actionExportSegmentationPolyline->setObjectName(QString::fromUtf8("actionExportSegmentationPolyline"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExportSegmentationPolyline->setIcon(icon3);
        hboxLayout = new QHBoxLayout(GraphicalSegmentationDlg);
        hboxLayout->setSpacing(2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        pauseButton = new QToolButton(GraphicalSegmentationDlg);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/smallPause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon4);
        pauseButton->setCheckable(true);
        pauseButton->setChecked(false);

        hboxLayout->addWidget(pauseButton);

        loadSaveToolButton = new QToolButton(GraphicalSegmentationDlg);
        loadSaveToolButton->setObjectName(QString::fromUtf8("loadSaveToolButton"));
        loadSaveToolButton->setIcon(icon2);
        loadSaveToolButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout->addWidget(loadSaveToolButton);

        selectionModelButton = new QToolButton(GraphicalSegmentationDlg);
        selectionModelButton->setObjectName(QString::fromUtf8("selectionModelButton"));
        selectionModelButton->setIcon(icon1);
        selectionModelButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout->addWidget(selectionModelButton);

        inButton = new QToolButton(GraphicalSegmentationDlg);
        inButton->setObjectName(QString::fromUtf8("inButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/smallSegmentIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        inButton->setIcon(icon5);

        hboxLayout->addWidget(inButton);

        outButton = new QToolButton(GraphicalSegmentationDlg);
        outButton->setObjectName(QString::fromUtf8("outButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/smallSegmentOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        outButton->setIcon(icon6);

        hboxLayout->addWidget(outButton);

        razButton = new QToolButton(GraphicalSegmentationDlg);
        razButton->setObjectName(QString::fromUtf8("razButton"));
        razButton->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        razButton->setIcon(icon7);

        hboxLayout->addWidget(razButton);

        validButton = new QToolButton(GraphicalSegmentationDlg);
        validButton->setObjectName(QString::fromUtf8("validButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validButton->setIcon(icon8);

        hboxLayout->addWidget(validButton);

        validAndDeleteButton = new QToolButton(GraphicalSegmentationDlg);
        validAndDeleteButton->setObjectName(QString::fromUtf8("validAndDeleteButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/smallTrash.png"), QSize(), QIcon::Normal, QIcon::Off);
        validAndDeleteButton->setIcon(icon9);

        hboxLayout->addWidget(validAndDeleteButton);

        cancelButton = new QToolButton(GraphicalSegmentationDlg);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon10);

        hboxLayout->addWidget(cancelButton);


        retranslateUi(GraphicalSegmentationDlg);

        QMetaObject::connectSlotsByName(GraphicalSegmentationDlg);
    } // setupUi

    void retranslateUi(QDialog *GraphicalSegmentationDlg)
    {
        GraphicalSegmentationDlg->setWindowTitle(QApplication::translate("GraphicalSegmentationDlg", "Segmentation", 0, QApplication::UnicodeUTF8));
        actionSetRectangularSelection->setText(QApplication::translate("GraphicalSegmentationDlg", "Rectangular selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetRectangularSelection->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Activates rectangular selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetPolylineSelection->setText(QApplication::translate("GraphicalSegmentationDlg", "Polygonal selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetPolylineSelection->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Activaites polyline selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUseExistingPolyline->setText(QApplication::translate("GraphicalSegmentationDlg", "Use existing polyline", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUseExistingPolyline->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Import polyline from DB for segmentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExportSegmentationPolyline->setText(QApplication::translate("GraphicalSegmentationDlg", "Export segmentation polyline", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExportSegmentationPolyline->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Export segmentation polyline as new entity", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pauseButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Pause segmentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pauseButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Pause segmentation  (allow rotation/panning of 3D view)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        pauseButton->setText(QApplication::translate("GraphicalSegmentationDlg", "pause", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        loadSaveToolButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Load / save segmentation polyline", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        loadSaveToolButton->setText(QApplication::translate("GraphicalSegmentationDlg", "load/save segmentation polyline", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        selectionModelButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Polyline selection mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        selectionModelButton->setText(QApplication::translate("GraphicalSegmentationDlg", "polyline selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Segment In", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        inButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Segment (keep points inside)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        inButton->setText(QApplication::translate("GraphicalSegmentationDlg", "in", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        outButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Segment Out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        outButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Segment (keep points outside)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        outButton->setText(QApplication::translate("GraphicalSegmentationDlg", "out", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        razButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Clear segmentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        razButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Clear segmentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        razButton->setText(QApplication::translate("GraphicalSegmentationDlg", "raz", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        validButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm segmentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        validButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm segmentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        validButton->setText(QApplication::translate("GraphicalSegmentationDlg", "OK", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        validAndDeleteButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm and delete hidden points", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        validAndDeleteButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm and delete hidden points", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Cancel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cancelButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Cancel segentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        cancelButton->setText(QApplication::translate("GraphicalSegmentationDlg", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GraphicalSegmentationDlg: public Ui_GraphicalSegmentationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICALSEGMENTATIONDLG_H
