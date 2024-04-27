#include "btnshowlist.h"

BtnShowList::BtnShowList(QWidget *parent)
    : QPushButton{parent}
{

    //无边框，显示在窗口前方
    setWindowFlags(Qt::FramelessWindowHint | Qt::ToolTip);
    this->setFixedSize(25,50);
    this->setCheckable(true);
    this->setChecked(false);
    this->setFlat(true);
     this->setStyleSheet(qssL);
}
