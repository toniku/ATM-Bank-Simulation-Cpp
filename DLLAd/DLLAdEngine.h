#ifndef DLLPINCODEENGINE_H
#define DLLADENGINE_H
#include <QApplication>
#include <QDialog>
#include <QString>
#include <QTimer>
#include <QMediaPlayer>
#include <QMultimedia>
#include <QDesktopWidget>
#include <QVideoWidget>
#include <QObject>

namespace Ui {
class Dialog;
}

class DLLAdEngine : public QDialog
{
    Q_OBJECT

public:
    DLLAdEngine(QWidget *parent = nullptr);
    ~DLLAdEngine();
    void showAd10();
    void showAd20();
    void showAd30();
    void showAd40();
    void showAd50();
    void showAd60();

private slots:
    void updateTime();

private:
    Ui::Dialog *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    short time;
    QTimer *timer;

signals:
    void advertOver();
};

#endif // DLLPINCODEENGINE_H
