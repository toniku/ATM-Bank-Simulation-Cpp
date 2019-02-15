#ifndef DLLPINCODEENGINE_H
#define DLLPINCODEENGINE_H
#include <QApplication>
#include <QDialog>
#include <QString>
#include <QTimer>

namespace Ui {
class Dialog;
}

class DLLPinCodeEngine : public QDialog
{
    Q_OBJECT

public:
    DLLPinCodeEngine(QWidget *parent = 0);
    ~DLLPinCodeEngine();
    void pauseTimer();
    void setLabel(QString);
    void Timer();

private slots:
    void on_button1_clicked();
    void on_button2_clicked();
    void on_button3_clicked();
    void on_button4_clicked();
    void on_button5_clicked();
    void on_button6_clicked();
    void on_button7_clicked();
    void on_button8_clicked();
    void on_button9_clicked();
    void on_button0_clicked();
    void on_ButtonOk_clicked();
    void on_ButtonNollaa_clicked();
    void updateTime();

private:
    short time;
    QTimer *timer;
    QString pincode;
    Ui::Dialog *ui;

signals:
    void sendPIN(QString);
};

#endif // DLLPINCODEENGINE_H
