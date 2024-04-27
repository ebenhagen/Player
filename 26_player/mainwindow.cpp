#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QFileDialog>

QUrl MainWindow::getUrlFromItem(QListWidgetItem *item)
{
    QVariant itemData= item->data(Qt::UserRole);    //获取用户数据
    QUrl source =itemData.value<QUrl>();    //QVariant转换为QUrl类型
    return source;
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type() != QEvent::KeyPress)      //不是KeyPress事件，退出
        return QWidget::eventFilter(watched,event);

    QKeyEvent *keyEvent=static_cast<QKeyEvent *>(event);
    if (keyEvent->key() != Qt::Key_Delete)      //按下的不是Delete键，退出
        return QWidget::eventFilter(watched,event);

    if (watched==ui->listWidget)
    {
        QListWidgetItem *item= ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete  item;
    }
    return true;    //表示事件已经被处理
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()){
    case Qt::Key_A: {
        ui->sliderPosition->setValue(ui->sliderPosition->sliderPosition() - fastForwardValue * 1000); //快退
        break;
    }
    case Qt::Key_D: {
        ui->sliderPosition->setValue(ui->sliderPosition->sliderPosition() + fastForwardValue * 1000); //快进
        break;
    }
    default:
        break;
    }
}

void MainWindow::do_buildBtnShowList()
{
    if (btnShowList == nullptr) {
        btnShowList = new BtnShowList(this);
    }

    //设置音量滑动条对话框显示位置
    QPoint p1 = ui->videoWidget->mapToGlobal(QPoint(0, 0));  //videoWidget左上角相对于桌面的绝对位置
    QRect rect1 = ui->videoWidget->rect();
    QRect rect2 = btnShowList->rect();

    int x = p1.x() + rect1.width() - rect2.width();
    int y = p1.y() + rect1.height()/2 - rect2.height()/2;
    btnShowList->move(x, y);
    btnShowList->show();

    connect(btnShowList, &BtnShowList::clicked, [=](bool checked){
        if (checked) {

            btnShowList->setStyleSheet(qssR);

            QPoint p1 = ui->videoWidget->mapToGlobal(QPoint(0, 0));
            QRect rect1 = ui->videoWidget->rect();
            QRect rect2 = btnShowList->rect();
            int x = p1.x() + rect1.width() - rect2.width();
            int y = p1.y() + rect1.height()/2 - rect2.height()/2;
            btnShowList->move(x, y);
            ui->widget_5->show();
        }
        else {

            btnShowList->setStyleSheet(qssL);

            QPoint p1 = ui->videoWidget->mapToGlobal(QPoint(0, 0));
            QRect rect1 = ui->videoWidget->rect();
            QRect rect2 = btnShowList->rect();
            int x = p1.x() + rect1.width() - rect2.width();
            int y = p1.y() + rect1.height()/2 - rect2.height()/2;
            btnShowList->move(x, y);
             ui->widget_5->hide();
        }
    });
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowFlag(Qt::FramelessWindowHint); //设置窗口无边框
    //下方五个按钮
    ui->btnStop->setFixedSize(12,12);
    ui->btnPrevious->setFixedSize(12,12);
    ui->btnPlay->setFixedSize(40,40);
    ui->btnNext->setFixedSize(12,12);
    ui->btnSound->setFixedSize(12,12);
    //右下角三个按钮
    ui->btnFullScreen->setFixedSize(20,20);
    ui->btnEffect->setFixedSize(20,20);
    ui->btnAdd->setFixedSize(20,20);
    //列表上方四个按钮
    ui->btnClear->setFixedSize(20,20);
    ui->btnRemove->setFixedSize(20, 20);
    ui->btnLoop->setFixedSize(20,20);
    ui->btnOneLoop->setFixedSize(20,20);

    ui->sliderPosition->setFixedHeight(10);
    ui->widget_2->setFixedHeight(10);
    ui->widget_2->setStyleSheet("background-color:rgb(200,200,200)");

    ui->widget_5->setFixedWidth(200);
    ui->widget->setFixedHeight(52);
    ui->widget->setStyleSheet("background-color:rgb(54,54,54)");
    ui->widget_6->setStyleSheet("background-color:rgb(54,54,54)");

    ui->listWidget->setStyleSheet("background-color:rgb(54,54,54)");
    ui->listWidget->setFixedWidth(200);
    ui->listWidget->installEventFilter(this);       //安装事件过滤器
    ui->listWidget->setDragEnabled(true);           //允许拖放操作
    ui->listWidget->setDragDropMode(QAbstractItemView::InternalMove);   //列表项可移动

    //去掉滑动条
    ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->widget_5->hide(); //初始隐藏

    player = new QMediaPlayer(this);            //创建视频播放器
    QAudioOutput *audioOutput= new QAudioOutput(this);
    player->setAudioOutput(audioOutput);        //设置音频输出通道
    player->setVideoOutput(ui->videoWidget);    //设置视频显示组件
    ui->videoWidget->setMediaPlayer(player);    //设置显示组件的关联播放器

    connect(player,&QMediaPlayer::positionChanged,      //播放位置发生变化
            this, &MainWindow::do_positionChanged);

    connect(player,&QMediaPlayer::durationChanged,      //播放源长度发生变化
            this, &MainWindow::do_durationChanged);

    connect(player, &QMediaPlayer::sourceChanged,       //播放源发生变化
            this, &MainWindow::do_sourceChanged);

    connect(player, &QMediaPlayer::playbackStateChanged,    //播放器状态发生变化
            this,  &MainWindow::do_stateChanged);

    connect(ui->titleBar, &TitleBar::sigClose, this, &MainWindow::do_close);
    connect(ui->titleBar, &TitleBar::sigOpenFile, this, &MainWindow::do_openFile);
    connect(ui->titleBar, &TitleBar::sigOpenFolder, this, &MainWindow::do_openFolder);

    connect(ui->btnSound, &MyBtnSound::sigVolumnValueChanged, [=](int value) {
        //调节音量
        player->audioOutput()->setVolume(value/100.0);
    });

    connect(this, &MainWindow::sigSendFileName, ui->titleBar, &TitleBar::do_setFileName);

    this->setStyleSheet("color:rgb(255,255,255);");
    ui->groupBox->setStyleSheet("background-color:rgb(0,0,0)");
    ui->widget_2->setStyleSheet("background-color:rgb(0,0,0)");

    QTimer* t = new QTimer(this);//加入对象树
    t->start(100);
    connect(t, &QTimer::timeout, this, &MainWindow::do_buildBtnShowList);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::do_stateChanged(QMediaPlayer::PlaybackState state)
{   //播放器状态变化时执行，更新按钮状态，或播放下一音频
    if (state == QMediaPlayer::PlayingState) {
        ui->btnPlay->setChecked(true);
        ui->btnPlay->setStyleSheet("border-image: url(:/images/images/pause.svg);");  //播放状态
    }
    if (state != QMediaPlayer::PlayingState)  {
        ui->btnPlay->setChecked(false);
        ui->btnPlay->setStyleSheet("border-image: url(:/images/images/play.svg);");   //停止状态
    }

    //播放完一音频后停止了，如果loopPlay为true，自动播放下一音频
    if (loopPlay && (state ==QMediaPlayer::StoppedState))
    {
        int count=ui->listWidget->count();
        int curRow=ui->listWidget->currentRow();
        curRow++;
        curRow= curRow>=count? 0:curRow;
        ui->listWidget->setCurrentRow(curRow);
        player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
        ui->sliderPosition->setValue(0);  //奇怪的bug，有些音乐在没播放过时，轮到它播放时直接到播放完了。每次重置进度条
        player->play();
    }
     //播放完一音频后停止了，如果oneLoopPlay为true，自动再次播放本音频
    if (oneLoopPlay && (state ==QMediaPlayer::StoppedState))
    {
        int curRow=ui->listWidget->currentRow();
        ui->listWidget->setCurrentRow(curRow);
        player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
        ui->sliderPosition->setValue(0);  //奇怪的bug，有些音乐在没播放过时，轮到它播放时直接到播放完了。每次重置进度条
        player->play();
    }
}

void MainWindow::do_sourceChanged(const QUrl &media)
{//播放的文件发生变化时的响应
    emit sigSendFileName(media.fileName());
}

void MainWindow::do_durationChanged(qint64 duration)
{//文件时长变化
    ui->sliderPosition->setMaximum(duration);

    int   secs=duration/1000;   //秒
    int   mins=secs/60;         //分钟
    secs=secs % 60;             //余数秒
    durationTime=QString::asprintf("%d:%d",mins,secs);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

void MainWindow::do_positionChanged(qint64 position)
{//文件播放位置变化
    if (ui->sliderPosition->isSliderDown())
        return;     //如果正在拖动滑条，退出
    ui->sliderPosition->setSliderPosition(position);

    int   secs=position/1000;   //秒
    int   mins=secs/60;         //分钟
    secs=secs % 60;             //余数秒
    positionTime=QString::asprintf("%d:%d",mins,secs);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

void MainWindow::on_btnAdd_clicked()
{//打开文件
    QString curPath=QDir::homePath();  //获取系统当前目录
    QString dlgTitle="选择视频文件";
    QString filter="视频文件(*.wmv *.mp4 *.mkv *.mp3 *.wav *.wma);;所有文件(*.*)";  //文件过滤器
    QStringList fileList=QFileDialog::getOpenFileNames(this,dlgTitle,curPath,filter);

    if (fileList.count()<1)
        return;

    for (int i=0; i<fileList.size();i++)
    {
        QString  aFile=fileList.at(i);
        QFileInfo  fileInfo(aFile);
        QListWidgetItem *aItem =new QListWidgetItem(fileInfo.fileName());
        fileMap.insert(fileInfo.fileName(), fileInfo.filePath());
        aItem->setIcon(QIcon(":/images/images/musicFile.png"));
        aItem->setData(Qt::UserRole, QUrl::fromLocalFile(aFile));  //设置用户数据，QUrl对象
        ui->listWidget->addItem(aItem);
        emit sigSendFileName(fileInfo.fileName());
    }

    if (player->playbackState() != QMediaPlayer::PlayingState)
    {   //当前没有在播放，就播放第1个文件
        ui->listWidget->setCurrentRow(0);
        QUrl source= getUrlFromItem(ui->listWidget->currentItem());
        player->setSource(source);
    }
    player->play();
    ui->listWidget->currentItem()->setSelected(true);
    ui->btnPlay->setStyleSheet("border-image: url(:/images/images/pause.svg);");
}

void MainWindow::on_btnPlay_clicked(bool checked)
{
    if (ui->listWidget->count() == 0) {  //没打开视频时，点击播放调用“添加”槽函数
        on_btnAdd_clicked();
        return;
    }
    if (checked) {
        //播放
        player->play();
        loopPlay=ui->btnLoop->isChecked();  //是否循环播放
        ui->btnPlay->setStyleSheet("border-image: url(:/images/images/pause.svg);");
    }
    else {
        //暂停
        player->pause();
        ui->btnPlay->setStyleSheet("border-image: url(:/images/images/play.svg);");
    }
}


void MainWindow::on_btnStop_clicked()
{//停止
    loopPlay=false;
    oneLoopPlay = false;
    player->stop();
}



void MainWindow::do_volumnValueChanged(int value)
{//调节音量
    player->audioOutput()->setVolume(value/100.0);
}

void MainWindow::on_btnSound_clicked()
{//静音按钮
    bool mute=player->audioOutput()->isMuted();
    player->audioOutput()->setMuted(!mute);
    if (mute)
        ui->btnSound->setStyleSheet("  QPushButton{border-image: url(:/images/images/sound.svg);}");
    else
        ui->btnSound->setStyleSheet("  QPushButton{border-image: url(:/images/images/no_sound.svg);}");
}

void MainWindow::on_sliderPosition_valueChanged(int value)
{//播放位置
   player->setPosition(value);
}

void MainWindow::on_btnFullScreen_clicked()
{//全屏按钮
    ui->videoWidget->setFullScreen(true);
}


void MainWindow::on_btnLoop_clicked(bool checked)
{
    //"列表循环" 按钮
    loopPlay = checked;
    oneLoopPlay = !checked;
    ui->btnLoop->setStyleSheet(qssLoop);
    ui->btnOneLoop->setStyleSheet(qssOneLoop2);
    qDebug() << loopPlay << oneLoopPlay;
}

void MainWindow::on_btnOneLoop_clicked(bool checked)
{
    //"单个循环" 按钮
    oneLoopPlay = checked;
    loopPlay = !checked;
    ui->btnOneLoop->setStyleSheet(qssOneLoop);
    ui->btnLoop->setStyleSheet(qssLoop2);
    qDebug() << loopPlay << oneLoopPlay;
}



void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    //双击listWidget时切换播放文件
    Q_UNUSED(index);
    loopPlay=false;     //暂时设置为false，防止do_stateChanged()里切换音频目
    oneLoopPlay = false;
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay=ui->btnLoop->isChecked();
    oneLoopPlay = ui->btnOneLoop->isChecked();
}

void MainWindow::do_close()
{
     close();
}

void MainWindow::do_openFile()
{
    on_btnAdd_clicked();
}

void MainWindow::do_openFolder()
{
    on_btnAdd_clicked();
}


void MainWindow::on_btnPrevious_clicked()
{
    //前一音频
    int count=ui->listWidget->count();
    int curRow=ui->listWidget->currentRow();
    curRow--;
    curRow = curRow < 0 ? count - 1:curRow;
    ui->listWidget->setCurrentRow(curRow);  //设置当前行

    loopPlay=false;     //暂时设置为false，防止do_stateChanged()里切换音频目
    oneLoopPlay = false;
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay=ui->btnLoop->isChecked();
    oneLoopPlay = ui->btnOneLoop->isChecked();
}

void MainWindow::on_btnNext_clicked()
{
    //下一音频
    int count=ui->listWidget->count();
    int curRow=ui->listWidget->currentRow();
    curRow++;
    curRow= curRow>=count? 0:curRow;
    ui->listWidget->setCurrentRow(curRow);

    loopPlay=false;     //暂时设置为false，防止do_stateChanged()里切换音频目
    oneLoopPlay=false;
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay=ui->btnLoop->isChecked();
    oneLoopPlay = ui->btnOneLoop->isChecked();
}


void MainWindow::on_btnRemove_clicked()
{
    //"移除"按钮，移除列表中的当前项
    int index =ui->listWidget->currentRow();
    if (index>=0)
    {
        QListWidgetItem *item= ui->listWidget->takeItem(index);
        delete item;
        if (index == 0) {
            loopPlay=false;     //防止do_stateChanged()里切换音频目
            oneLoopPlay = false;
            player->stop();
        }
        else {
            on_btnNext_clicked();
        }
    }
}


void MainWindow::on_btnClear_clicked()
{
    //"清空"按钮，清空播放列表
    loopPlay=false;     //防止do_stateChanged()里切换音频目
    oneLoopPlay = false;
    ui->listWidget->clear();
    player->stop();
}


void MainWindow::on_btnEffect_clicked(bool checked)
{
    if (effectDialog == nullptr) {
        effectDialog = new EffectDialog(ui->btnEffect);   //显示调节对话框
        connect(effectDialog, &EffectDialog::sigSendSpeedValue, this, &MainWindow::do_changeSpeed);
        connect(effectDialog, &EffectDialog::sigSendFastForwardValue, this, &MainWindow::do_changeFastForward);
        connect(effectDialog, &EffectDialog::sigBrightnessValue, this, &MainWindow::do_opencvBright);
    }
    if (checked) {
        QPoint p1 = ui->btnEffect->mapToGlobal(QPoint(0, 0));  //效果按钮左上角相对于桌面的绝对位置
        QRect rect1 = ui->btnEffect->rect();
        QRect rect2 = effectDialog->rect();

        int x = p1.x() + (rect1.width() - rect2.width()) / 2;
        int y = p1.y() - rect2.height() - 5;

        effectDialog->move(x, y);
        effectDialog->show();
    }
    else {
        effectDialog->hide();
    }
}

void MainWindow::do_changeSpeed(int value)
{
    //value(5-20)，转成一位小数
    double speed = (double)value / 10;
    player->setPlaybackRate(speed);
}

void MainWindow::do_changeFastForward(int value)
{
    fastForwardValue = value;
}

void MainWindow::do_opencvBright(int value)
{

}



