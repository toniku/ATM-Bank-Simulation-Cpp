#include "dllpincodeengine.h"
#include "ui_dllpincodeengine.h"
#include <QFont>

DLLPinCodeEngine::DLLPinCodeEngine(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    ui->lineEditPIN->setMaxLength(4);
    ui->lineEditPIN->setReadOnly(true);
    ui->lineEditPIN->setAlignment(Qt::AlignCenter);
}

DLLPinCodeEngine::~DLLPinCodeEngine()
{  
    delete timer;
    delete ui;
    timer = NULL;
    ui = NULL;
}

void DLLPinCodeEngine::on_button1_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "1");
    pauseTimer();
}

void DLLPinCodeEngine::on_button2_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "2");
    pauseTimer();
}

void DLLPinCodeEngine::on_button3_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "3");
    pauseTimer();
}

void DLLPinCodeEngine::on_button4_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "4");
    pauseTimer();
}

void DLLPinCodeEngine::on_button5_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "5");
    pauseTimer();
}

void DLLPinCodeEngine::on_button6_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "6");
    pauseTimer();
}

void DLLPinCodeEngine::on_button7_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "7");   
    pauseTimer();
}

void DLLPinCodeEngine::on_button8_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "8");
    pauseTimer();
}

void DLLPinCodeEngine::on_button9_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "9");
    pauseTimer();
}

void DLLPinCodeEngine::on_button0_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "0");
    pauseTimer();
}

void DLLPinCodeEngine::on_ButtonOk_clicked()
{
    pauseTimer();
    pincode = ui->lineEditPIN->text();
    ui->lineEditPIN->clear();
    emit sendPIN(pincode);
}

void DLLPinCodeEngine::on_ButtonNollaa_clicked()
{
    pauseTimer();
    ui->lineEditPIN->clear();
}

void DLLPinCodeEngine::updateTime()
{
    time--;
    if (time==0)
    {
        timer->stop();
        ui->lineEditPIN->clear();
        this->close();
    }
}

void DLLPinCodeEngine::Timer()
{
    timer->stop();
    time = 11;
    timer->setInterval(1000);
    timer->start();
    updateTime();
}

void DLLPinCodeEngine::pauseTimer()
{
    timer->stop();
    timer->start();
    time = 11;
    updateTime();
}

void DLLPinCodeEngine::setLabel(QString newLabel)
{
    QFont font = ui->label->font();
    font.setPointSize(48);
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setFont(font);
    ui->label->setText(newLabel);
}
