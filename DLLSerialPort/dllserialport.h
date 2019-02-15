#ifndef DLLSERIALPORT_H
#define DLLSERIALPORT_H
#include "dllserialport_global.h"
#include "dllserialportengine.h"
#include <QObject>

class DLLSERIALPORTSHARED_EXPORT DLLSerialPort : public QObject
{
    Q_OBJECT
public:
    DLLSerialPort();
    ~DLLSerialPort();
    void interfaceFunctionOpenConnection();

private slots:
    void receiveValue(QString);

signals:
    void returnValue(QString);

private:
    DLLSerialPortEngine *objectDLLSerialPortEngine;
};

#endif // DLLSERIALPORT_H
