/********************************************************************************
** Form generated from reading UI file 'pointPropertiesDlg.ui'
**
** Created: Sun Mar 10 15:48:34 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTPROPERTIESDLG_H
#define UI_POINTPROPERTIESDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_PointPropertiesDlg
{
public:
    QHBoxLayout *hboxLayout;
    QToolButton *pointPropertiesButton;
    QToolButton *pointPointDistanceButton;
    QToolButton *pointsAngleButton;
    QToolButton *rectZoneToolButton;
    QToolButton *saveLabelButton;
    QToolButton *razButton;
    QToolButton *closeButton;

    void setupUi(QDialog *PointPropertiesDlg)
    {
        if (PointPropertiesDlg->objectName().isEmpty())
            PointPropertiesDlg->setObjectName(QString::fromUtf8("PointPropertiesDlg"));
        PointPropertiesDlg->resize(201, 26);
        hboxLayout = new QHBoxLayout(PointPropertiesDlg);
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pointPropertiesButton = new QToolButton(PointPropertiesDlg);
        pointPropertiesButton->setObjectName(QString::fromUtf8("pointPropertiesButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Comp/images/comp/pointProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointPropertiesButton->setIcon(icon);

        hboxLayout->addWidget(pointPropertiesButton);

        pointPointDistanceButton = new QToolButton(PointPropertiesDlg);
        pointPointDistanceButton->setObjectName(QString::fromUtf8("pointPointDistanceButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/Comp/images/comp/pointDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointPointDistanceButton->setIcon(icon1);

        hboxLayout->addWidget(pointPointDistanceButton);

        pointsAngleButton = new QToolButton(PointPropertiesDlg);
        pointsAngleButton->setObjectName(QString::fromUtf8("pointsAngleButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/Comp/images/comp/pointsAngle.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointsAngleButton->setIcon(icon2);

        hboxLayout->addWidget(pointsAngleButton);

        rectZoneToolButton = new QToolButton(PointPropertiesDlg);
        rectZoneToolButton->setObjectName(QString::fromUtf8("rectZoneToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/Comp/images/comp/rectangleSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        rectZoneToolButton->setIcon(icon3);

        hboxLayout->addWidget(rectZoneToolButton);

        saveLabelButton = new QToolButton(PointPropertiesDlg);
        saveLabelButton->setObjectName(QString::fromUtf8("saveLabelButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/Menu/images/menu/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveLabelButton->setIcon(icon4);

        hboxLayout->addWidget(saveLabelButton);

        razButton = new QToolButton(PointPropertiesDlg);
        razButton->setObjectName(QString::fromUtf8("razButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/Comp/images/comp/raz.png"), QSize(), QIcon::Normal, QIcon::Off);
        razButton->setIcon(icon5);

        hboxLayout->addWidget(razButton);

        closeButton = new QToolButton(PointPropertiesDlg);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/Comp/images/comp/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon6);

        hboxLayout->addWidget(closeButton);


        retranslateUi(PointPropertiesDlg);

        QMetaObject::connectSlotsByName(PointPropertiesDlg);
    } // setupUi

    void retranslateUi(QDialog *PointPropertiesDlg)
    {
        PointPropertiesDlg->setWindowTitle(QApplication::translate("PointPropertiesDlg", "Points Properties", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pointPropertiesButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Select one point and display its information", "Display selected point properties", QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pointPropertiesButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Select one point and display its information", "Display selected point properties", QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        pointPropertiesButton->setText(QApplication::translate("PointPropertiesDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pointPointDistanceButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Select 2 points and display segment information (length, etc.)", "Compute point to point distance", QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pointPointDistanceButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Select 2 points and display segment information (length, etc.)", "Compute point to point distance", QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pointPointDistanceButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pointPointDistanceButton->setText(QApplication::translate("PointPropertiesDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pointsAngleButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Select 3 points and display corresponding triangle information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pointsAngleButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Select 3 points and display corresponding triangle information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        pointsAngleButton->setText(QApplication::translate("PointPropertiesDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rectZoneToolButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Define a rectangular 2D label", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rectZoneToolButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Define a rectangular 2D label", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        rectZoneToolButton->setText(QApplication::translate("PointPropertiesDlg", "2D zone", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        saveLabelButton->setToolTip(QApplication::translate("PointPropertiesDlg", "Save current label (added to cloud children)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveLabelButton->setStatusTip(QApplication::translate("PointPropertiesDlg", "Save current label (added to cloud children)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        saveLabelButton->setText(QApplication::translate("PointPropertiesDlg", "...", 0, QApplication::UnicodeUTF8));
        razButton->setText(QApplication::translate("PointPropertiesDlg", "...", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("PointPropertiesDlg", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PointPropertiesDlg: public Ui_PointPropertiesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTPROPERTIESDLG_H
