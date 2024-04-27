#include "slidervolumndialog.h"
#include "ui_slidervolumndialog.h"

SliderVolumnDialog::SliderVolumnDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SliderVolumnDialog)
{
    ui->setupUi(this);

    //无边框，显示在窗口前方
    setWindowFlags(Qt::FramelessWindowHint | Qt::ToolTip);
}

SliderVolumnDialog::~SliderVolumnDialog()
{
    delete ui;
}

void SliderVolumnDialog::on_sliderVolumn_valueChanged(int value)
{
    emit sigVolumnValueChanged(value);
}

