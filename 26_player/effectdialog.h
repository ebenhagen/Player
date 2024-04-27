#ifndef EFFECTDIALOG_H
#define EFFECTDIALOG_H

#include <QDialog>
#include <QVideoWidget>

namespace Ui {
class EffectDialog;
}

class EffectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EffectDialog(QWidget *parent = nullptr);
    ~EffectDialog();
    void setMediaPlay(QVideoWidget *videoWidget);

private:
    QVideoWidget* videoWidget;

signals:
    void sigSendSpeedValue(int value);        //发送播放倍速
    void sigSendFastForwardValue(int value);  //发送快进秒数
    void sigBrightnessValue(int value);     //发送亮度

private slots:
    void on_listWidget_currentTextChanged(const QString &currentText);

    void on_hSdrSpeed_valueChanged(int value);

    void on_rBtn5_clicked();

    void on_rBtn10_clicked();

    void on_rBtn30_clicked();

    void on_hSdrBrightness_valueChanged(int value);

private:
    Ui::EffectDialog *ui;
};

#endif // EFFECTDIALOG_H
