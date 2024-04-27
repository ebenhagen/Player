#ifndef SLIDERVOLUMNDIALOG_H
#define SLIDERVOLUMNDIALOG_H

#include <QDialog>

namespace Ui {
class SliderVolumnDialog;
}

class SliderVolumnDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SliderVolumnDialog(QWidget *parent = nullptr);
    ~SliderVolumnDialog();

signals:
    void sigVolumnValueChanged(int& value);

private slots:
    void on_sliderVolumn_valueChanged(int value);

private:
    Ui::SliderVolumnDialog *ui;
};

#endif // SLIDERVOLUMNDIALOG_H
