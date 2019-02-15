#ifndef DLLPINCODE_H
#define DLLPINCODE_H
#include "dllpincode_global.h"
#include "dllpincodeengine.h"
#include <QDesktopWidget>
#include <QWidget>

class DLLPINCODESHARED_EXPORT DLLPINCode : public QWidget
{
    Q_OBJECT

public:
    DLLPINCode();
    ~DLLPINCode();
    void interfaceFunctionControlEngine();
    void interfaceFunctionCloseDialog();
    void interfaceFunctionSetLabel(QString newLabel);

private:
    DLLPinCodeEngine *objectDLLPinCodeEngine;
    QDesktopWidget *objectDesk;

private slots:
    void receivePIN(QString);

signals:
    void returnPIN(QString);

};



#endif // DLLPINCODE_H
