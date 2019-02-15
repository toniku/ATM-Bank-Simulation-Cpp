#include "DLLAdEngine.h"
#include "ui_dialog.h"
#include <QFont>
#include <qDebug>


DLLAdEngine::DLLAdEngine(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    player = new QMediaPlayer;
    videoWidget = new QVideoWidget;

}

DLLAdEngine::~DLLAdEngine()
{  
    delete ui;
    ui = NULL;
}

void DLLAdEngine::showAd10()
{
    timer->stop();
    time = 12;
    timer->setInterval(1000);
    timer->start();
    updateTime();
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl::fromLocalFile("/C:/Temp/advertisement10.wmv"));
    //vw->setGeometry(100,100,1080,1920);
    //videoWidget->setGeometry(desk->screenGeometry(0));
    videoWidget->showFullScreen();
    player->play();
}

void DLLAdEngine::showAd20()
{
    timer->stop();
    time = 22;
    timer->setInterval(1000);
    timer->start();
    updateTime();
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl::fromLocalFile("/C:/Temp/advertisement20.wmv"));
    //vw->setGeometry(100,100,1080,1920);
    //videoWidget->setGeometry(desk->screenGeometry(0));
    videoWidget->showFullScreen();
    player->play();
}

void DLLAdEngine::showAd30()
{
    timer->stop();
    time = 32;
    timer->setInterval(1000);
    timer->start();
    updateTime();
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl::fromLocalFile("/C:/Temp/advertisement30.wmv"));
    //vw->setGeometry(100,100,1080,1920);
    //videoWidget->setGeometry(desk->screenGeometry(0));
    videoWidget->showFullScreen();
    player->play();
}

void DLLAdEngine::showAd40()
{
    timer->stop();
    time = 42;
    timer->setInterval(1000);
    timer->start();
    updateTime();
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl::fromLocalFile("/C:/Temp/advertisement40.wmv"));
    //vw->setGeometry(100,100,1080,1920);
    //videoWidget->setGeometry(desk->screenGeometry(0));
    videoWidget->showFullScreen();
    player->play();
}

void DLLAdEngine::showAd50()
{
    timer->stop();
    time = 52;
    timer->setInterval(1000);
    timer->start();
    updateTime();
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl::fromLocalFile("/C:/Temp/advertisement50.wmv"));
    //vw->setGeometry(100,100,1080,1920);
    //videoWidget->setGeometry(desk->screenGeometry(0));
    videoWidget->showFullScreen();
    player->play();
}

void DLLAdEngine::showAd60()
{
    timer->stop();
    time = 62;
    timer->setInterval(1000);
    timer->start();
    updateTime();
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl::fromLocalFile("/C:/Temp/advertisement60.wmv"));
    //vw->setGeometry(100,100,1080,1920);
    //videoWidget->setGeometry(desk->screenGeometry(0));
    videoWidget->showFullScreen();
    player->play();
}

void DLLAdEngine::updateTime()
{
    time--;
    if (time==0)
    {
        emit advertOver();
        timer->stop();
        player->stop();
        videoWidget->close();
    }
}
