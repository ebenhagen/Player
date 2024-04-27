/********************************************************************************
** Form generated from reading UI file 'titlebar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEBAR_H
#define UI_TITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleBar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLogo;
    QSpacerItem *horizontalSpacer;
    QLabel *labCurMedia;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnMin;
    QPushButton *btnMax;
    QPushButton *btnClose;

    void setupUi(QWidget *TitleBar)
    {
        if (TitleBar->objectName().isEmpty())
            TitleBar->setObjectName("TitleBar");
        TitleBar->resize(835, 40);
        horizontalLayout = new QHBoxLayout(TitleBar);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        btnLogo = new QPushButton(TitleBar);
        btnLogo->setObjectName("btnLogo");
        btnLogo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnLogo->setFlat(true);

        horizontalLayout->addWidget(btnLogo);

        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labCurMedia = new QLabel(TitleBar);
        labCurMedia->setObjectName("labCurMedia");
        labCurMedia->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(labCurMedia);

        horizontalSpacer_2 = new QSpacerItem(157, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnMin = new QPushButton(TitleBar);
        btnMin->setObjectName("btnMin");
        btnMin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/min.svg);\n"
"}\n"
"QPushButton:hover{\n"
"      border-image: url(:/images/images/min_hover.svg);\n"
"}"));
        btnMin->setFlat(true);

        horizontalLayout->addWidget(btnMin);

        btnMax = new QPushButton(TitleBar);
        btnMax->setObjectName("btnMax");
        btnMax->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/max1.svg);\n"
"}\n"
"QPushButton:hover{\n"
"      border-image: url(:/images/images/max1_hover.svg);\n"
"}"));
        btnMax->setFlat(true);

        horizontalLayout->addWidget(btnMax);

        btnClose = new QPushButton(TitleBar);
        btnClose->setObjectName("btnClose");
        btnClose->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/close.svg);\n"
"}\n"
"QPushButton:hover{\n"
"      border-image: url(:/images/images/close_hover.svg);\n"
"}"));
        btnClose->setFlat(true);

        horizontalLayout->addWidget(btnClose);


        retranslateUi(TitleBar);

        QMetaObject::connectSlotsByName(TitleBar);
    } // setupUi

    void retranslateUi(QWidget *TitleBar)
    {
        TitleBar->setWindowTitle(QCoreApplication::translate("TitleBar", "Form", nullptr));
        btnLogo->setText(QCoreApplication::translate("TitleBar", "QQ\345\275\261\351\237\263", nullptr));
        labCurMedia->setText(QCoreApplication::translate("TitleBar", "\346\227\240\346\233\262\347\233\256", nullptr));
        btnMin->setText(QString());
        btnMax->setText(QString());
        btnClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TitleBar: public Ui_TitleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEBAR_H
