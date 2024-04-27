#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>

#include    <QtMultimedia>
#include    <QListWidgetItem>

#include "titlebar.h"
#include "tmyvideowidget.h"
#include "effectdialog.h"
#include "btnshowlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QMediaPlayer  *player;       //视频播放器
    bool    loopPlay = true;     //列表循环播放
    bool    oneLoopPlay = false; //单个循环播放
    QString  durationTime;       //文件总长度，mm:ss字符串
    QString  positionTime;       //当前播放到位置，mm:ss字符串

    int fastForwardValue = 10;   //快进秒数值，默认按一次10秒

    EffectDialog* effectDialog = nullptr;
    BtnShowList* btnShowList = nullptr;

    QMap<QString, QString> fileMap; //文件名和文件路径

    QString qssL = R"(
        QPushButton{
            border-image: url(:/images/images/left.svg);
            background-color:rgb(54,54,54);
        }
        QPushButton:hover{
            border-image: url(:/images/images/left_hover.svg);
        }
    )";

    QString qssR = R"(
        QPushButton{
            border-image: url(:/images/images/right.svg);
            background-color:rgb(54,54,54);
        }
        QPushButton:hover{
            border-image: url(:/images/images/right_hover.svg);
        }
    )";

    QString qssOneLoop = R"(
        QPushButton{
            border-image: url(:/images/images/one_loop.svg);
            background-color:rgb(0,150,255);
        }
    )";

    QString qssOneLoop2 = R"(
        QPushButton{
            border-image: url(:/images/images/one_loop.svg);
            background-color:rgb(54,54,54);
        }
    )";

    QString qssLoop = R"(
        QPushButton{
            border-image: url(:/images/images/list_loop.svg);
            background-color:rgb(0,150,255);
        }
    )";

    QString qssLoop2 = R"(
        QPushButton{
            border-image: url(:/images/images/list_loop.svg);
            background-color:rgb(54,54,54);
        }
    )";

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QUrl getUrlFromItem(QListWidgetItem *item);          //获取item的用户数据
    bool eventFilter(QObject *watched, QEvent *event);   //事件过滤处理

protected:
    void keyPressEvent(QKeyEvent* event)override;


signals:
    void sigSendFileName(QString fileName);

private slots:
    //自定义槽函数
    void do_stateChanged(QMediaPlayer::PlaybackState state);    //播放器状态发生变化

    void do_sourceChanged(const QUrl &media);   //文件发生变化

    void do_durationChanged(qint64 duration);   //文件长度发生变化

    void do_positionChanged(qint64 position);   //播放位置发生变化

    void do_close();
    void do_openFile();
    void do_openFolder();

    void do_changeSpeed(int value);        //接收effectDlalog的倍速滑动条的值
    void do_changeFastForward(int value);  //接收effectDlalog的快进秒数值

    void do_opencvBright(int value);   //接收effectDlalog的亮度调整值

    void do_buildBtnShowList();

//
    void on_btnAdd_clicked();

    void on_btnPlay_clicked(bool checked);

    void on_btnStop_clicked();

    void on_btnSound_clicked();

    void on_sliderPosition_valueChanged(int value);

    void on_btnFullScreen_clicked();

    void on_btnLoop_clicked(bool checked);

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_btnPrevious_clicked();

    void on_btnNext_clicked();

    void do_volumnValueChanged(int value);

    void on_btnRemove_clicked();

    void on_btnClear_clicked();

    void on_btnEffect_clicked(bool checked);

    void on_btnOneLoop_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
