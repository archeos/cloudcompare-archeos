/********************************************************************************
** Form generated from reading UI file 'registrationDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONDLG_H
#define UI_REGISTRATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegistrationDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLineEdit *dataLineEdit;
    QToolButton *modelColorButton;
    QToolButton *dataColorButton;
    QLabel *label_9;
    QLineEdit *modelLineEdit;
    QPushButton *swapButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *iterationsCriterion;
    QSpinBox *maxIterationCount;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *errorCriterion;
    QLineEdit *rmsDifferenceLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *overlapSpinBox;
    QCheckBox *adjustScaleCheckBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *randomSamplingLimitSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *rotComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *TxCheckBox;
    QCheckBox *TyCheckBox;
    QCheckBox *TzCheckBox;
    QCheckBox *pointsRemoval;
    QCheckBox *checkBoxUseDataSFAsWeights;
    QCheckBox *checkBoxUseModelSFAsWeights;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegistrationDialog)
    {
        if (RegistrationDialog->objectName().isEmpty())
            RegistrationDialog->setObjectName(QString::fromUtf8("RegistrationDialog"));
        RegistrationDialog->resize(350, 567);
        verticalLayout_2 = new QVBoxLayout(RegistrationDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_5 = new QGroupBox(RegistrationDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 1, 1, 1);

        dataLineEdit = new QLineEdit(groupBox_5);
        dataLineEdit->setObjectName(QString::fromUtf8("dataLineEdit"));
        dataLineEdit->setReadOnly(true);

        gridLayout->addWidget(dataLineEdit, 0, 2, 1, 1);

        modelColorButton = new QToolButton(groupBox_5);
        modelColorButton->setObjectName(QString::fromUtf8("modelColorButton"));
        modelColorButton->setEnabled(false);

        gridLayout->addWidget(modelColorButton, 1, 0, 1, 1);

        dataColorButton = new QToolButton(groupBox_5);
        dataColorButton->setObjectName(QString::fromUtf8("dataColorButton"));
        dataColorButton->setEnabled(false);

        gridLayout->addWidget(dataColorButton, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 1, 1, 1);

        modelLineEdit = new QLineEdit(groupBox_5);
        modelLineEdit->setObjectName(QString::fromUtf8("modelLineEdit"));
        modelLineEdit->setReadOnly(true);

        gridLayout->addWidget(modelLineEdit, 1, 2, 1, 1);

        swapButton = new QPushButton(groupBox_5);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));
        swapButton->setFlat(false);

        gridLayout->addWidget(swapButton, 2, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        frame = new QFrame(RegistrationDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
#ifndef Q_OS_MAC
        verticalLayout_4->setSpacing(6);
#endif
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iterationsCriterion = new QRadioButton(groupBox_2);
        iterationsCriterion->setObjectName(QString::fromUtf8("iterationsCriterion"));

        horizontalLayout->addWidget(iterationsCriterion);

        maxIterationCount = new QSpinBox(groupBox_2);
        maxIterationCount->setObjectName(QString::fromUtf8("maxIterationCount"));
        maxIterationCount->setEnabled(false);
        maxIterationCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxIterationCount->setMinimum(1);
        maxIterationCount->setMaximum(999999);
        maxIterationCount->setValue(20);

        horizontalLayout->addWidget(maxIterationCount);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        errorCriterion = new QRadioButton(groupBox_2);
        errorCriterion->setObjectName(QString::fromUtf8("errorCriterion"));
        errorCriterion->setChecked(true);

        horizontalLayout_2->addWidget(errorCriterion);

        rmsDifferenceLineEdit = new QLineEdit(groupBox_2);
        rmsDifferenceLineEdit->setObjectName(QString::fromUtf8("rmsDifferenceLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rmsDifferenceLineEdit->sizePolicy().hasHeightForWidth());
        rmsDifferenceLineEdit->setSizePolicy(sizePolicy1);
        rmsDifferenceLineEdit->setLayoutDirection(Qt::RightToLeft);
        rmsDifferenceLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(rmsDifferenceLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: blue;"));

        horizontalLayout_6->addWidget(label_4);

        overlapSpinBox = new QSpinBox(groupBox_2);
        overlapSpinBox->setObjectName(QString::fromUtf8("overlapSpinBox"));
        overlapSpinBox->setStyleSheet(QString::fromUtf8("color: blue;"));
        overlapSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        overlapSpinBox->setMinimum(1);
        overlapSpinBox->setMaximum(100);
        overlapSpinBox->setSingleStep(10);
        overlapSpinBox->setValue(100);

        horizontalLayout_6->addWidget(overlapSpinBox);


        verticalLayout->addLayout(horizontalLayout_6);

        adjustScaleCheckBox = new QCheckBox(groupBox_2);
        adjustScaleCheckBox->setObjectName(QString::fromUtf8("adjustScaleCheckBox"));

        verticalLayout->addWidget(adjustScaleCheckBox);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        randomSamplingLimitSpinBox = new QSpinBox(groupBox);
        randomSamplingLimitSpinBox->setObjectName(QString::fromUtf8("randomSamplingLimitSpinBox"));
        randomSamplingLimitSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        randomSamplingLimitSpinBox->setMaximum(1000000000);
        randomSamplingLimitSpinBox->setSingleStep(10000);
        randomSamplingLimitSpinBox->setValue(50000);

        horizontalLayout_3->addWidget(randomSamplingLimitSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        rotComboBox = new QComboBox(groupBox);
        rotComboBox->setObjectName(QString::fromUtf8("rotComboBox"));
        sizePolicy1.setHeightForWidth(rotComboBox->sizePolicy().hasHeightForWidth());
        rotComboBox->setSizePolicy(sizePolicy1);
        rotComboBox->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_4->addWidget(rotComboBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        TxCheckBox = new QCheckBox(groupBox);
        TxCheckBox->setObjectName(QString::fromUtf8("TxCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TxCheckBox->sizePolicy().hasHeightForWidth());
        TxCheckBox->setSizePolicy(sizePolicy3);
        TxCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TxCheckBox);

        TyCheckBox = new QCheckBox(groupBox);
        TyCheckBox->setObjectName(QString::fromUtf8("TyCheckBox"));
        sizePolicy3.setHeightForWidth(TyCheckBox->sizePolicy().hasHeightForWidth());
        TyCheckBox->setSizePolicy(sizePolicy3);
        TyCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TyCheckBox);

        TzCheckBox = new QCheckBox(groupBox);
        TzCheckBox->setObjectName(QString::fromUtf8("TzCheckBox"));
        sizePolicy3.setHeightForWidth(TzCheckBox->sizePolicy().hasHeightForWidth());
        TzCheckBox->setSizePolicy(sizePolicy3);
        TzCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TzCheckBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        pointsRemoval = new QCheckBox(groupBox);
        pointsRemoval->setObjectName(QString::fromUtf8("pointsRemoval"));

        verticalLayout_3->addWidget(pointsRemoval);

        checkBoxUseDataSFAsWeights = new QCheckBox(groupBox);
        checkBoxUseDataSFAsWeights->setObjectName(QString::fromUtf8("checkBoxUseDataSFAsWeights"));

        verticalLayout_3->addWidget(checkBoxUseDataSFAsWeights);

        checkBoxUseModelSFAsWeights = new QCheckBox(groupBox);
        checkBoxUseModelSFAsWeights->setObjectName(QString::fromUtf8("checkBoxUseModelSFAsWeights"));

        verticalLayout_3->addWidget(checkBoxUseModelSFAsWeights);


        verticalLayout_4->addWidget(groupBox);


        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RegistrationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(dataLineEdit, modelLineEdit);
        QWidget::setTabOrder(modelLineEdit, swapButton);
        QWidget::setTabOrder(swapButton, buttonBox);
        QWidget::setTabOrder(buttonBox, dataColorButton);
        QWidget::setTabOrder(dataColorButton, modelColorButton);

        retranslateUi(RegistrationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegistrationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegistrationDialog, SLOT(reject()));
        QObject::connect(iterationsCriterion, SIGNAL(toggled(bool)), maxIterationCount, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(RegistrationDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistrationDialog)
    {
        RegistrationDialog->setWindowTitle(QApplication::translate("RegistrationDialog", "Clouds registration", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("RegistrationDialog", "Role assignation", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("RegistrationDialog", "Data:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dataLineEdit->setToolTip(QApplication::translate("RegistrationDialog", "the data cloud is the entity to align with the model cloud : it will be displaced (red cloud)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        dataLineEdit->setStatusTip(QApplication::translate("RegistrationDialog", "the data cloud is the entity to align with the model cloud : it will be displaced (red cloud)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        modelColorButton->setText(QString());
        dataColorButton->setText(QString());
        label_9->setText(QApplication::translate("RegistrationDialog", "Model:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        modelLineEdit->setToolTip(QApplication::translate("RegistrationDialog", "the model cloud is the reference : it won't move (yellow cloud)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        modelLineEdit->setStatusTip(QApplication::translate("RegistrationDialog", "the model cloud is the reference : it won't move (yellow cloud)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        swapButton->setToolTip(QApplication::translate("RegistrationDialog", "press once to exchange model and data clouds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        swapButton->setStatusTip(QApplication::translate("RegistrationDialog", "press once to exchange model and data clouds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        swapButton->setText(QApplication::translate("RegistrationDialog", "swap", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("RegistrationDialog", "Parameters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        iterationsCriterion->setToolTip(QApplication::translate("RegistrationDialog", "By chosing this criterion, you can control the computation time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        iterationsCriterion->setStatusTip(QApplication::translate("RegistrationDialog", "By chosing this criterion, you can control the computation time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        iterationsCriterion->setText(QApplication::translate("RegistrationDialog", "Number of iterations", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxIterationCount->setToolTip(QApplication::translate("RegistrationDialog", "Set the maximal number of step for the algorithm regsitration computation .", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        maxIterationCount->setStatusTip(QApplication::translate("RegistrationDialog", "Set the maximal number of step for the algorithm regsitration computation (great values lead to long computation time but results are more accurate).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        errorCriterion->setToolTip(QApplication::translate("RegistrationDialog", "By chosing this criterion, you can control the quality of the result.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        errorCriterion->setText(QApplication::translate("RegistrationDialog", "RMS difference", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rmsDifferenceLineEdit->setToolTip(QApplication::translate("RegistrationDialog", "Set the minimum RMS improvement between 2 consecutive iterations (below which the registration process will stop).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rmsDifferenceLineEdit->setText(QApplication::translate("RegistrationDialog", "1.0e-5", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("RegistrationDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("RegistrationDialog", "Final overlap", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        overlapSpinBox->setToolTip(QApplication::translate("RegistrationDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        overlapSpinBox->setSuffix(QApplication::translate("RegistrationDialog", "%", 0, QApplication::UnicodeUTF8));
        adjustScaleCheckBox->setText(QApplication::translate("RegistrationDialog", "Adjust scale", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RegistrationDialog", "'Research' parameters", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RegistrationDialog", "Random sampling limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        randomSamplingLimitSpinBox->setToolTip(QApplication::translate("RegistrationDialog", "Above this limit, clouds are randomly resampled at each iteration", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("RegistrationDialog", "Rotation", 0, QApplication::UnicodeUTF8));
        rotComboBox->clear();
        rotComboBox->insertItems(0, QStringList()
         << QApplication::translate("RegistrationDialog", "XYZ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RegistrationDialog", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RegistrationDialog", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RegistrationDialog", "Z", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("RegistrationDialog", "Translation", 0, QApplication::UnicodeUTF8));
        TxCheckBox->setText(QApplication::translate("RegistrationDialog", "Tx", 0, QApplication::UnicodeUTF8));
        TyCheckBox->setText(QApplication::translate("RegistrationDialog", "Ty", 0, QApplication::UnicodeUTF8));
        TzCheckBox->setText(QApplication::translate("RegistrationDialog", "Tz", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pointsRemoval->setToolTip(QApplication::translate("RegistrationDialog", "Chose this option to remove points that are likely to disturb the registration during the computation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pointsRemoval->setStatusTip(QApplication::translate("RegistrationDialog", "Chose this option to remove points that are likely to disturb the registration during the computation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        pointsRemoval->setText(QApplication::translate("RegistrationDialog", "Enable farthest points removal", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxUseDataSFAsWeights->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Use the displayed scalar field as weights (the bigger its associated scalar value/weight is, the more influence the point will have).</p><p>Note that only absolute distances are considered (i.e. minimal weight is 0).</p><p>Weights are automatically normalized.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxUseDataSFAsWeights->setText(QApplication::translate("RegistrationDialog", "Data: use displayed S.F. as weights", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxUseModelSFAsWeights->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Use the displayed scalar field as weights (the bigger its associated scalar value/weight is, the more influence the point will have).</p><p>Note that only absolute distances are considered (i.e. minimal weight is 0).</p><p>Weights are automatically normalized.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxUseModelSFAsWeights->setText(QApplication::translate("RegistrationDialog", "Model: use displayed S.F. as weights (only for clouds)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RegistrationDialog: public Ui_RegistrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONDLG_H
