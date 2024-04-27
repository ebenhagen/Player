#ifndef BTNSHOWLIST_H
#define BTNSHOWLIST_H

#include <QPushButton>

class BtnShowList : public QPushButton
{
    Q_OBJECT
public:
    explicit BtnShowList(QWidget *parent = nullptr);

private:
    QString qssL = R"(
        QPushButton{
            border-image: url(:/images/images/left.svg);
            background-color:rgb(54,54,54);
        }
        QPushButton:hover{
            border-image: url(:/images/images/left_hover.svg);
        }
    )";
};

#endif // BTNSHOWLIST_H
