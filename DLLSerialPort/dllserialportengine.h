#ifndef DLLSERIALPORTENGINE_H
#define DLLSERIALPORTENGINE_H
#include <QObject>
#include <QSerialPort>
#include <QString>
#include <QByteArray>
#include <QDebug>
#include <QTextCodec>

class DLLSerialPortEngine : public QObject
{
    Q_OBJECT
public:
    DLLSerialPortEngine(QObject *parent = nullptr);
    ~DLLSerialPortEngine();
    void openConnection();

signals:
    void sendString(QString);

private slots:
    void serialReceived();

private:
    QSerialPort *objectQSerialPort;
    QByteArray objectQByteArray;
    QString objectQString;
};

#endif // DLLSERIALPORTENGINE_H
