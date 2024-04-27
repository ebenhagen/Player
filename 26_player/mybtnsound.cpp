#include"mybtnsound.h"

#include <QEnterEvent>


MyBtnSound::MyBtnSound(QWidget *parent) : QPushButton(parent)
{

}


void MyBtnSound::enterEvent(QEnterEvent* event)
{
    if (sliderVolumnDialog == nullptr) {
        sliderVolumnDialog = new SliderVolumnDialog(this);
    }
    //设置音量滑动条对话框显示位置
    QPoint p1 = this->mapToGlobal(QPoint(0, 0));  //声音按钮左上角相对于桌面的绝对位置
    QRect rect1 = this->rect();
    QRect rect2 = sliderVolumnDialog->rect();     //rect包含标题栏，去掉标题栏后height不变

    int x = p1.x() + (rect1.width() - rect2.width()) / 2;
    int y = p1.y() - rect2.height() - 5;
    sliderVolumnDialog->move(x, y);   //move是相对于桌面原点的位置

    sliderVolumnDialog->show();
    timeId = startTimer(250);

    connect(sliderVolumnDialog, &SliderVolumnDialog::sigVolumnValueChanged, [=](int value) {
        emit sigVolumnValueChanged(value);
    });
}


void MyBtnSound::timerEvent(QTimerEvent* event)
{
    if ((sliderVolumnDialog != nullptr) && (sliderVolumnDialog->isVisible()))
    {
        QPoint p1 = QCursor::pos();   //鼠标绝对位置
        if (sliderVolumnDialog)
        {
            //鼠标在按钮和对话框的矩形范围内，则一直显示对话框
            QRect rect1 = this->rect();
            QRect rect2 = sliderVolumnDialog->rect();
            QRect rect3 = sliderVolumnDialog->geometry();

            QPoint p2 = this->mapToGlobal(QPoint(0, 0));   //声音按钮左上角相对于桌面的绝对位置

            QRect area(rect3.left(), rect3.top(), rect2.width(), p2.y() + rect1.height() - rect3.top()); //左上宽高

            if (!area.contains(p1))
            {
                sliderVolumnDialog->hide();
            }
        }
    }
}
