#ifndef MYBTNSOUND_H
#define MYBTNSOUND_H

#include <QEnterEvent>
#include <QPushButton>
#include "slidervolumndialog.h"

class MyBtnSound : public QPushButton
{
    Q_OBJECT
public:
    explicit MyBtnSound(QWidget *parent = nullptr);

signals:
    void sigVolumnValueChanged(int& value);

protected:
    void enterEvent(QEnterEvent *event);
    void timerEvent(QTimerEvent *event);

    int timeId = -1;
private:
    SliderVolumnDialog* sliderVolumnDialog = nullptr;
};

#endif // MYBTNSOUND_H
