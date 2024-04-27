#include "titlebar.h"
#include "ui_titlebar.h"

#include <qt_windows.h>

#include <QAction>

TitleBar::TitleBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TitleBar)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    setMouseTracking(true);
    initUI();
}

TitleBar::~TitleBar()
{
    delete ui;
}

void TitleBar::initUI()
{
    //禁止父窗口影响子窗口样式
    setAttribute(Qt::WA_StyledBackground);
    this->setFixedHeight(35 + 5 * 2);
    this->setStyleSheet("background-color:rgb(54,54,54)");

    ui->btnClose->setFixedSize(20,20);

    ui->btnMax->setFixedSize(20,20);
    ui->btnMin->setFixedSize(20,20);

    ui->btnLogo->setFixedSize(80,35);

    menu = new QMenu(this);
    menu->hide();

    QAction* actFile = new QAction("打开文件", this);
    QAction* actFolder = new QAction("打开文件夹", this);
    QAction* actUrl = new QAction("打开Url", this);
    QAction* actExit = new QAction("退出", this);

    connect(actFile, &QAction::triggered, [=](){
        emit sigOpenFile();
    });
    connect(actFolder, &QAction::triggered, [=](){
        emit sigOpenFolder();
    });
    connect(actExit, &QAction::triggered, [=](){
        emit sigClose();
    });

    menu->addAction(actFile);
    menu->addAction(actFolder);
    menu->addAction(actUrl);
    menu->addAction(actExit);

    ui->btnLogo->setMenu(menu);

    myWindow = this->window();

}

void TitleBar::mousePressEvent(QMouseEvent* event)
{
    if (ReleaseCapture())
    {
        if (myWindow->isTopLevel())
        {
            SendMessage(HWND(myWindow->winId()), WM_SYSCOMMAND, SC_MOVE + HTCAPTION, 0);
        }
    }
}

void TitleBar::mouseDoubleClickEvent(QMouseEvent* event)
{
    on_btnMax_clicked();
}

void TitleBar::on_btnLogo_clicked(bool checked)
{
    if (checked) {
        menu->show();
    }
    else {
        menu->hide();
    }
}


void TitleBar::on_btnMin_clicked()
{
    myWindow->showMinimized();
}


void TitleBar::on_btnMax_clicked()
{
    if (myWindow->isMaximized()) {
        myWindow->showNormal();
        ui->btnMax->setStyleSheet(qss_max1);
    }
    else {
        myWindow->showMaximized();
        ui->btnMax->setStyleSheet(qss_max2);
    }
}


void TitleBar::on_btnClose_clicked()
{
    emit sigClose();
}

void TitleBar::do_setFileName(QString fileName)
{
    ui->labCurMedia->setText(fileName);
}

