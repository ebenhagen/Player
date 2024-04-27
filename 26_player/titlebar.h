#ifndef TitleBar_H
#define TitleBar_H

#include <QWidget>
#include <QMenu>

namespace Ui {
class TitleBar;
}

class TitleBar : public QWidget
{
    Q_OBJECT

public:
    explicit TitleBar(QWidget *parent = nullptr);
    ~TitleBar();

private:
    void initUI();

private:
    void mousePressEvent(QMouseEvent* event) override;               //窗口拖动
    void mouseDoubleClickEvent(QMouseEvent* event) override;         //双击改变窗口大小

public slots:
    void do_setFileName(QString fileName);

private slots:
    void on_btnLogo_clicked(bool checked);

    void on_btnMin_clicked();

    void on_btnMax_clicked();

    void on_btnClose_clicked();




signals:
    void sigClose();         //关闭
    void sigOpenFile();      //打开文件
    void sigOpenFolder();    //打开文件夹

private:
    QWidget* myWindow = nullptr;
    QMenu* menu = nullptr;

    QString qss_max1 = R"(
        QPushButton{
            border-image: url(:/images/images/max1.svg);
        }
        QPushButton:hover{
            border-image: url(:/images/images/max1_hover.svg);
        }
    )";

    QString qss_max2 = R"(
        QPushButton{
            border-image: url(:/images/images/max2.svg);
        }
        QPushButton:hover{
            border-image: url(:/images/images/max2_hover.svg);
        }
    )";

private:
    Ui::TitleBar *ui;
};

#endif // TitleBar_H
