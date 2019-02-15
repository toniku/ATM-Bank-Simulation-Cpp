#include "dllserialportengine.h"

DLLSerialPortEngine::DLLSerialPortEngine(QObject *parent) : QObject(parent)
{
    objectQSerialPort = new QSerialPort(this);
    objectQSerialPort->setPortName("COM9");
    objectQSerialPort->setBaudRate(QSerialPort::Baud9600);
    objectQSerialPort->setDataBits(QSerialPort::Data8);
    objectQSerialPort->setParity(QSerialPort::NoParity);
    objectQSerialPort->setStopBits(QSerialPort::OneStop);
    objectQSerialPort->setFlowControl(QSerialPort::NoFlowControl);
    //objectQSerialPort->open(QIODevice::ReadOnly);
    QObject::connect(objectQSerialPort, SIGNAL(readyRead()), this, SLOT(serialReceived()));
}

DLLSerialPortEngine::~DLLSerialPortEngine()
{
    objectQSerialPort->close();
    delete objectQSerialPort;
    objectQSerialPort = NULL;
}

void DLLSerialPortEngine::serialReceived()
{
    // store serial data into a byte array
    objectQByteArray = objectQSerialPort->readAll();

    // convert into string
    objectQString = QTextCodec::codecForMib(106)->toUnicode(objectQByteArray);

    // trim excess
    objectQString.remove("\r\n");
    objectQString.remove("-");
    objectQString.remove(">");
    emit sendString(objectQString);
}

void DLLSerialPortEngine::openConnection()
{
    objectQSerialPort->open(QIODevice::ReadOnly);
    objectQSerialPort->clear(QSerialPort::AllDirections);   // clear buffer before reading new data
}
