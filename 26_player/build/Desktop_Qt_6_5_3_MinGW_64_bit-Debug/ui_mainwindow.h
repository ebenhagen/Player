/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mybtnsound.h>
#include <titlebar.h>
#include <tmyvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    TitleBar *titleBar;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    TMyVideoWidget *videoWidget;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QSlider *sliderPosition;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labRatio;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnStop;
    QPushButton *btnPrevious;
    QPushButton *btnPlay;
    QPushButton *btnNext;
    MyBtnSound *btnSound;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAdd;
    QPushButton *btnEffect;
    QPushButton *btnFullScreen;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnOneLoop;
    QPushButton *btnLoop;
    QPushButton *btnRemove;
    QPushButton *btnClear;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(997, 540);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleBar = new TitleBar(centralWidget);
        titleBar->setObjectName("titleBar");

        verticalLayout_3->addWidget(titleBar);

        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName("widget_3");
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget_3);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        videoWidget = new TMyVideoWidget(groupBox);
        videoWidget->setObjectName("videoWidget");

        verticalLayout->addWidget(videoWidget);


        verticalLayout_2->addWidget(groupBox);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(16777215, 25));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        sliderPosition = new QSlider(widget_2);
        sliderPosition->setObjectName("sliderPosition");
        sliderPosition->setTracking(false);
        sliderPosition->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(sliderPosition);


        verticalLayout_2->addWidget(widget_2);

        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 35));
        widget->setMaximumSize(QSize(16777215, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labRatio = new QLabel(widget);
        labRatio->setObjectName("labRatio");
        labRatio->setMinimumSize(QSize(80, 0));
        labRatio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(labRatio);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnStop = new QPushButton(widget);
        btnStop->setObjectName("btnStop");
        btnStop->setEnabled(true);
        btnStop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/stop.svg);\n"
"}\n"
""));
        btnStop->setCheckable(false);
        btnStop->setFlat(true);

        horizontalLayout->addWidget(btnStop);

        btnPrevious = new QPushButton(widget);
        btnPrevious->setObjectName("btnPrevious");
        btnPrevious->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/previous.svg);\n"
"}\n"
""));
        btnPrevious->setFlat(true);

        horizontalLayout->addWidget(btnPrevious);

        btnPlay = new QPushButton(widget);
        btnPlay->setObjectName("btnPlay");
        btnPlay->setEnabled(true);
        btnPlay->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/play.svg);\n"
"}\n"
""));
        btnPlay->setCheckable(true);
        btnPlay->setChecked(false);
        btnPlay->setFlat(true);

        horizontalLayout->addWidget(btnPlay);

        btnNext = new QPushButton(widget);
        btnNext->setObjectName("btnNext");
        btnNext->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/next.svg);\n"
"}\n"
""));
        btnNext->setFlat(true);

        horizontalLayout->addWidget(btnNext);

        btnSound = new MyBtnSound(widget);
        btnSound->setObjectName("btnSound");
        btnSound->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/sound.svg);\n"
"}\n"
""));
        btnSound->setFlat(true);

        horizontalLayout->addWidget(btnSound);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnAdd = new QPushButton(widget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/effect.svg);\n"
"}\n"
"QPushButton:hover{\n"
"	  border-image: url(:/images/images/effect_hover.svg);\n"
"}"));
        btnAdd->setFlat(true);

        horizontalLayout->addWidget(btnAdd);

        btnEffect = new QPushButton(widget);
        btnEffect->setObjectName("btnEffect");
        btnEffect->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/effect.svg);\n"
"}\n"
"QPushButton:hover{\n"
"	  border-image: url(:/images/images/effect_hover.svg);\n"
"}"));
        btnEffect->setCheckable(true);
        btnEffect->setFlat(true);

        horizontalLayout->addWidget(btnEffect);

        btnFullScreen = new QPushButton(widget);
        btnFullScreen->setObjectName("btnFullScreen");
        btnFullScreen->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/full_screen.svg);\n"
"}\n"
"QPushButton:hover{\n"
"	  border-image: url(:/images/images/full_screen_hover.svg);\n"
"}\n"
"\n"
""));
        btnFullScreen->setFlat(true);

        horizontalLayout->addWidget(btnFullScreen);


        verticalLayout_2->addWidget(widget);


        horizontalLayout_3->addWidget(widget_3);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox_2 = new QGroupBox(widget_6);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFlat(true);
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnOneLoop = new QPushButton(groupBox_2);
        btnOneLoop->setObjectName("btnOneLoop");
        btnOneLoop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/images/images/one_loop.svg);\n"
"}"));
        btnOneLoop->setCheckable(true);
        btnOneLoop->setAutoExclusive(true);
        btnOneLoop->setFlat(true);

        horizontalLayout_2->addWidget(btnOneLoop);

        btnLoop = new QPushButton(groupBox_2);
        btnLoop->setObjectName("btnLoop");
        btnLoop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/images/images/list_loop.svg);\n"
"}"));
        btnLoop->setCheckable(true);
        btnLoop->setChecked(true);
        btnLoop->setAutoExclusive(true);
        btnLoop->setFlat(true);

        horizontalLayout_2->addWidget(btnLoop);


        horizontalLayout_4->addWidget(groupBox_2);

        btnRemove = new QPushButton(widget_6);
        btnRemove->setObjectName("btnRemove");
        btnRemove->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/close.svg);\n"
"}\n"
"QPushButton:hover{\n"
"	  border-image: url(:/images/images/close_hover.svg);\n"
"}\n"
""));
        btnRemove->setFlat(true);

        horizontalLayout_4->addWidget(btnRemove);

        btnClear = new QPushButton(widget_6);
        btnClear->setObjectName("btnClear");
        btnClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	  border-image: url(:/images/images/clear.svg);\n"
"}\n"
"QPushButton:hover{\n"
"	  border-image: url(:/images/images/clear_hover.svg);\n"
"}\n"
""));
        btnClear->setFlat(true);

        horizontalLayout_4->addWidget(btnClear);


        verticalLayout_4->addWidget(widget_6);

        listWidget = new QListWidget(widget_5);
        listWidget->setObjectName("listWidget");

        verticalLayout_4->addWidget(listWidget);


        horizontalLayout_3->addWidget(widget_5);


        verticalLayout_3->addWidget(widget_4);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        groupBox->setTitle(QString());
        labRatio->setText(QString());
        btnStop->setText(QString());
        btnPrevious->setText(QString());
        btnPlay->setText(QString());
        btnNext->setText(QString());
        btnSound->setText(QString());
        btnAdd->setText(QString());
        btnEffect->setText(QString());
        btnFullScreen->setText(QString());
        groupBox_2->setTitle(QString());
        btnOneLoop->setText(QString());
        btnLoop->setText(QString());
        btnRemove->setText(QString());
        btnClear->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
