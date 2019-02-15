#include "dllserialport.h"

DLLSerialPort::DLLSerialPort()
{
    objectDLLSerialPortEngine = new DLLSerialPortEngine;
    QObject::connect(objectDLLSerialPortEngine, &DLLSerialPortEngine::sendString, this, &DLLSerialPort::receiveValue);
}

DLLSerialPort::~DLLSerialPort()
{
    delete objectDLLSerialPortEngine;
    objectDLLSerialPortEngine = NULL;
}

void DLLSerialPort::receiveValue(QString returnString)
{
    emit returnValue(returnString);
}

void DLLSerialPort::interfaceFunctionOpenConnection()
{
    objectDLLSerialPortEngine->openConnection();
}
