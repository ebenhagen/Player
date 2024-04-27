/********************************************************************************
** Form generated from reading UI file 'slidervolumndialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDERVOLUMNDIALOG_H
#define UI_SLIDERVOLUMNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_SliderVolumnDialog
{
public:
    QGridLayout *gridLayout;
    QSlider *sliderVolumn;

    void setupUi(QDialog *SliderVolumnDialog)
    {
        if (SliderVolumnDialog->objectName().isEmpty())
            SliderVolumnDialog->setObjectName("SliderVolumnDialog");
        SliderVolumnDialog->resize(44, 169);
        SliderVolumnDialog->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(SliderVolumnDialog);
        gridLayout->setObjectName("gridLayout");
        sliderVolumn = new QSlider(SliderVolumnDialog);
        sliderVolumn->setObjectName("sliderVolumn");
        sliderVolumn->setMaximum(100);
        sliderVolumn->setValue(50);
        sliderVolumn->setOrientation(Qt::Vertical);

        gridLayout->addWidget(sliderVolumn, 0, 0, 1, 1);


        retranslateUi(SliderVolumnDialog);

        QMetaObject::connectSlotsByName(SliderVolumnDialog);
    } // setupUi

    void retranslateUi(QDialog *SliderVolumnDialog)
    {
        SliderVolumnDialog->setWindowTitle(QCoreApplication::translate("SliderVolumnDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SliderVolumnDialog: public Ui_SliderVolumnDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDERVOLUMNDIALOG_H
