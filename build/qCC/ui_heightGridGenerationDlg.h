/********************************************************************************
** Form generated from reading UI file 'heightGridGenerationDlg.ui'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEIGHTGRIDGENERATIONDLG_H
#define UI_HEIGHTGRIDGENERATIONDLG_H

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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HeightGridGenerationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_3;
    QLabel *label_2;
    QDoubleSpinBox *gridStep;
    QHBoxLayout *layout_2;
    QLabel *label;
    QComboBox *typeOfProjection;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *dimensionComboBox;
    QFrame *interpolateSFFrame;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *interpolateSFCheckBox;
    QComboBox *scalarFieldProjection;
    QFrame *emptyCellsFrame;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *fillEmptyCells;
    QDoubleSpinBox *emptyValueDoubleSpinBox;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QCheckBox *generateCloudCheckBox;
    QCheckBox *generateCountSFcheckBox;
    QCheckBox *generateImageCheckBox;
    QCheckBox *generateASCIICheckBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HeightGridGenerationDialog)
    {
        if (HeightGridGenerationDialog->objectName().isEmpty())
            HeightGridGenerationDialog->setObjectName(QString::fromUtf8("HeightGridGenerationDialog"));
        HeightGridGenerationDialog->resize(400, 300);
        HeightGridGenerationDialog->setAcceptDrops(true);
        HeightGridGenerationDialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(HeightGridGenerationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layout_3 = new QHBoxLayout();
        layout_3->setObjectName(QString::fromUtf8("layout_3"));
        label_2 = new QLabel(HeightGridGenerationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        layout_3->addWidget(label_2);

        gridStep = new QDoubleSpinBox(HeightGridGenerationDialog);
        gridStep->setObjectName(QString::fromUtf8("gridStep"));
        gridStep->setDecimals(3);
        gridStep->setMinimum(0.001);
        gridStep->setMaximum(1000);
        gridStep->setSingleStep(0.001);
        gridStep->setValue(1);

        layout_3->addWidget(gridStep);


        verticalLayout->addLayout(layout_3);

        layout_2 = new QHBoxLayout();
        layout_2->setObjectName(QString::fromUtf8("layout_2"));
        label = new QLabel(HeightGridGenerationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        layout_2->addWidget(label);

        typeOfProjection = new QComboBox(HeightGridGenerationDialog);
        typeOfProjection->setObjectName(QString::fromUtf8("typeOfProjection"));

        layout_2->addWidget(typeOfProjection);


        verticalLayout->addLayout(layout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(HeightGridGenerationDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        dimensionComboBox = new QComboBox(HeightGridGenerationDialog);
        dimensionComboBox->setObjectName(QString::fromUtf8("dimensionComboBox"));

        horizontalLayout_2->addWidget(dimensionComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        interpolateSFFrame = new QFrame(HeightGridGenerationDialog);
        interpolateSFFrame->setObjectName(QString::fromUtf8("interpolateSFFrame"));
        horizontalLayout_3 = new QHBoxLayout(interpolateSFFrame);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        interpolateSFCheckBox = new QCheckBox(interpolateSFFrame);
        interpolateSFCheckBox->setObjectName(QString::fromUtf8("interpolateSFCheckBox"));
        interpolateSFCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(interpolateSFCheckBox);

        scalarFieldProjection = new QComboBox(interpolateSFFrame);
        scalarFieldProjection->setObjectName(QString::fromUtf8("scalarFieldProjection"));

        horizontalLayout_3->addWidget(scalarFieldProjection);


        verticalLayout->addWidget(interpolateSFFrame);

        emptyCellsFrame = new QFrame(HeightGridGenerationDialog);
        emptyCellsFrame->setObjectName(QString::fromUtf8("emptyCellsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emptyCellsFrame->sizePolicy().hasHeightForWidth());
        emptyCellsFrame->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(emptyCellsFrame);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(emptyCellsFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        fillEmptyCells = new QComboBox(emptyCellsFrame);
        fillEmptyCells->setObjectName(QString::fromUtf8("fillEmptyCells"));

        gridLayout->addWidget(fillEmptyCells, 0, 1, 1, 1);

        emptyValueDoubleSpinBox = new QDoubleSpinBox(emptyCellsFrame);
        emptyValueDoubleSpinBox->setObjectName(QString::fromUtf8("emptyValueDoubleSpinBox"));
        emptyValueDoubleSpinBox->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(emptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        emptyValueDoubleSpinBox->setSizePolicy(sizePolicy1);
        emptyValueDoubleSpinBox->setDecimals(6);
        emptyValueDoubleSpinBox->setMinimum(-1e+09);
        emptyValueDoubleSpinBox->setMaximum(1e+09);
        emptyValueDoubleSpinBox->setValue(0);

        gridLayout->addWidget(emptyValueDoubleSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(emptyCellsFrame);

        frame = new QFrame(HeightGridGenerationDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        generateCloudCheckBox = new QCheckBox(frame);
        generateCloudCheckBox->setObjectName(QString::fromUtf8("generateCloudCheckBox"));
        generateCloudCheckBox->setChecked(true);

        horizontalLayout->addWidget(generateCloudCheckBox);

        generateCountSFcheckBox = new QCheckBox(frame);
        generateCountSFcheckBox->setObjectName(QString::fromUtf8("generateCountSFcheckBox"));

        horizontalLayout->addWidget(generateCountSFcheckBox);


        verticalLayout->addWidget(frame);

        generateImageCheckBox = new QCheckBox(HeightGridGenerationDialog);
        generateImageCheckBox->setObjectName(QString::fromUtf8("generateImageCheckBox"));

        verticalLayout->addWidget(generateImageCheckBox);

        generateASCIICheckBox = new QCheckBox(HeightGridGenerationDialog);
        generateASCIICheckBox->setObjectName(QString::fromUtf8("generateASCIICheckBox"));
        generateASCIICheckBox->setChecked(false);

        verticalLayout->addWidget(generateASCIICheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(HeightGridGenerationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HeightGridGenerationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HeightGridGenerationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HeightGridGenerationDialog, SLOT(reject()));
        QObject::connect(interpolateSFCheckBox, SIGNAL(toggled(bool)), scalarFieldProjection, SLOT(setEnabled(bool)));
        QObject::connect(generateCloudCheckBox, SIGNAL(toggled(bool)), generateCountSFcheckBox, SLOT(setEnabled(bool)));

        typeOfProjection->setCurrentIndex(1);
        dimensionComboBox->setCurrentIndex(2);
        scalarFieldProjection->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HeightGridGenerationDialog);
    } // setupUi

    void retranslateUi(QDialog *HeightGridGenerationDialog)
    {
        HeightGridGenerationDialog->setWindowTitle(QApplication::translate("HeightGridGenerationDialog", "Height grid generation", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("HeightGridGenerationDialog", "grid step:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gridStep->setToolTip(QApplication::translate("HeightGridGenerationDialog", "size of step of the grid generated (in the same units as the coordinates of the point cloud)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("HeightGridGenerationDialog", "type of projection:", 0, QApplication::UnicodeUTF8));
        typeOfProjection->clear();
        typeOfProjection->insertItems(0, QStringList()
         << QApplication::translate("HeightGridGenerationDialog", "minimum height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "average height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "maximum height", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        typeOfProjection->setToolTip(QApplication::translate("HeightGridGenerationDialog", "choose the height (z coordinate) projected : maximum = highest point in the cell or average)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("HeightGridGenerationDialog", "projection direction:", 0, QApplication::UnicodeUTF8));
        dimensionComboBox->clear();
        dimensionComboBox->insertItems(0, QStringList()
         << QApplication::translate("HeightGridGenerationDialog", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "Z", 0, QApplication::UnicodeUTF8)
        );
        interpolateSFCheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "interpolate scalar field(s)", 0, QApplication::UnicodeUTF8));
        scalarFieldProjection->clear();
        scalarFieldProjection->insertItems(0, QStringList()
         << QApplication::translate("HeightGridGenerationDialog", "minimum value", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "average value", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "maximum value", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        scalarFieldProjection->setToolTip(QApplication::translate("HeightGridGenerationDialog", "choose the height (z coordinate) projected : maximum = highest point in the cell or average)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("HeightGridGenerationDialog", "fill empty cells with:", 0, QApplication::UnicodeUTF8));
        fillEmptyCells->clear();
        fillEmptyCells->insertItems(0, QStringList()
         << QApplication::translate("HeightGridGenerationDialog", "leave empty", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "minimum height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "average height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "maximum height", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HeightGridGenerationDialog", "user specified value", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        fillEmptyCells->setToolTip(QApplication::translate("HeightGridGenerationDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateCloudCheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "generate grid as a point cloud", 0, QApplication::UnicodeUTF8));
        generateCountSFcheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "save per-cell count as SF", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateImageCheckBox->setToolTip(QApplication::translate("HeightGridGenerationDialog", "image is automatically generated in the application directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateImageCheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "generate grid as an image (height_grid_image.tiff)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        generateASCIICheckBox->setToolTip(QApplication::translate("HeightGridGenerationDialog", "file is automatically generated in the application directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        generateASCIICheckBox->setText(QApplication::translate("HeightGridGenerationDialog", "generate grid as an ASCII file (height_grid_text_file.txt)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HeightGridGenerationDialog: public Ui_HeightGridGenerationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEIGHTGRIDGENERATIONDLG_H
