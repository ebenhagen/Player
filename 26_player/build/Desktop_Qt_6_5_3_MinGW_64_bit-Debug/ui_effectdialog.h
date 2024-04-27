/********************************************************************************
** Form generated from reading UI file 'effectdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFFECTDIALOG_H
#define UI_EFFECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EffectDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *hSdrSpeed;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_1;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rBtn5;
    QRadioButton *rBtn10;
    QRadioButton *rBtn30;
    QWidget *page_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *hSdrBrightness;
    QLabel *label_6;
    QSlider *hSdrContract;
    QWidget *page_2;

    void setupUi(QDialog *EffectDialog)
    {
        if (EffectDialog->objectName().isEmpty())
            EffectDialog->setObjectName("EffectDialog");
        EffectDialog->resize(370, 341);
        horizontalLayout = new QHBoxLayout(EffectDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(EffectDialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(EffectDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        widget = new QWidget(page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 80, 231, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        hSdrSpeed = new QSlider(widget);
        hSdrSpeed->setObjectName("hSdrSpeed");
        hSdrSpeed->setMinimum(5);
        hSdrSpeed->setMaximum(20);
        hSdrSpeed->setValue(10);
        hSdrSpeed->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hSdrSpeed);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_1 = new QLabel(widget_2);
        label_1->setObjectName("label_1");

        horizontalLayout_2->addWidget(label_1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addWidget(widget_2);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 20, 231, 61));
        groupBox->setFlat(true);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        rBtn5 = new QRadioButton(groupBox);
        rBtn5->setObjectName("rBtn5");

        horizontalLayout_3->addWidget(rBtn5);

        rBtn10 = new QRadioButton(groupBox);
        rBtn10->setObjectName("rBtn10");
        rBtn10->setChecked(true);

        horizontalLayout_3->addWidget(rBtn10);

        rBtn30 = new QRadioButton(groupBox);
        rBtn30->setObjectName("rBtn30");

        horizontalLayout_3->addWidget(rBtn30);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 40, 231, 171));
        groupBox_2->setFlat(true);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        hSdrBrightness = new QSlider(groupBox_2);
        hSdrBrightness->setObjectName("hSdrBrightness");
        hSdrBrightness->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hSdrBrightness, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        hSdrContract = new QSlider(groupBox_2);
        hSdrContract->setObjectName("hSdrContract");
        hSdrContract->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hSdrContract, 1, 1, 1, 1);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        retranslateUi(EffectDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EffectDialog);
    } // setupUi

    void retranslateUi(QDialog *EffectDialog)
    {
        EffectDialog->setWindowTitle(QCoreApplication::translate("EffectDialog", "Dialog", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("EffectDialog", "\346\222\255\346\224\276", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("EffectDialog", "\350\211\262\345\275\251", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("EffectDialog", "\345\243\260\351\237\263", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("EffectDialog", "\345\200\215\351\200\237\357\274\2321.0\345\200\215", nullptr));
        label_1->setText(QCoreApplication::translate("EffectDialog", "0.5\345\200\215", nullptr));
        label_3->setText(QCoreApplication::translate("EffectDialog", "1.0\345\200\215", nullptr));
        label_5->setText(QCoreApplication::translate("EffectDialog", "1.5\350\242\253", nullptr));
        label_4->setText(QCoreApplication::translate("EffectDialog", "2.0\345\200\215", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EffectDialog", "\345\277\253\350\277\233/\345\277\253\351\200\200", nullptr));
        rBtn5->setText(QCoreApplication::translate("EffectDialog", "5\347\247\222", nullptr));
        rBtn10->setText(QCoreApplication::translate("EffectDialog", "10\347\247\222", nullptr));
        rBtn30->setText(QCoreApplication::translate("EffectDialog", "30\347\247\222", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EffectDialog", "\350\211\262\345\275\251", nullptr));
        label_2->setText(QCoreApplication::translate("EffectDialog", "\344\272\256\345\272\246\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("EffectDialog", "\345\257\271\346\257\224\345\272\246\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EffectDialog: public Ui_EffectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFFECTDIALOG_H
