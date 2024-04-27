#include "effectdialog.h"
#include "ui_effectdialog.h"

#include <QGraphicsEffect>

EffectDialog::EffectDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EffectDialog)
{
    ui->setupUi(this);

    //无边框，显示在窗口前方
    setWindowFlags(Qt::FramelessWindowHint | Qt::ToolTip);

    //设置属性
    this->setAttribute(Qt::WA_DeleteOnClose);//堆区释放，点×会delete

    this->setStyleSheet("color:rgb(255,255,255);");

    ui->listWidget->setFixedWidth(100);
    this->setFixedSize(370,280);
    for (int i = 0; i < ui->listWidget->count(); ++i) {
        ui->listWidget->item(i)->setSizeHint(QSize(100,50));
    }

    //点击后颜色
    ui->listWidget->setStyleSheet("QListWidget::item:selected{background-color:rgb(0,150,255);};");


    //去掉滑动条
    ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //默认选中第一个item“播放”
    ui->listWidget->item(0)->setSelected(true);
    //默认显示“播放”对应的界面
    ui->stackedWidget->setCurrentIndex(0);


      ui->hSdrBrightness->setRange(0, 100);

}

EffectDialog::~EffectDialog()
{
    delete ui;
}


void EffectDialog::on_listWidget_currentTextChanged(const QString &currentText)
{
    if (currentText == QString("播放")) {
        ui->stackedWidget->setCurrentIndex(0);
    }
    else if(currentText == QString("色彩")) {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(currentText == QString("声音")) {
        ui->stackedWidget->setCurrentIndex(2);
    }
}


void EffectDialog::on_hSdrSpeed_valueChanged(int value)
{
    double speed = (double)value / 10;
    ui->label->setText(QString("倍速：%1倍").arg(speed));
    emit sigSendSpeedValue(value);
}


void EffectDialog::on_rBtn5_clicked()
{
    emit sigSendFastForwardValue(5);
    qDebug() << 5;
}


void EffectDialog::on_rBtn10_clicked()
{
    emit sigSendFastForwardValue(10);
    qDebug() << 10;
}


void EffectDialog::on_rBtn30_clicked()
{
    emit sigSendFastForwardValue(30);
    qDebug() << 30;
}
/*
void EffectDialog::setMediaPlay(QVideoWidget* videoWidget) {
    this->videoWidget = videoWidget;
    ui->hSdrBrightness->setRange(0, 100);
    qDebug() << "getthis";
}

*/


void EffectDialog::on_hSdrBrightness_valueChanged(int value)
{
    sigBrightnessValue(value);
    // connect(ui->hSdrBrightness, &QSlider::valueChanged, this->videoWidget, &QVideoWidget::setBrightness);
    //qt6的QVideoWidget没有了亮度、对比度调整的函数，次部分删除或者自行修改
}

