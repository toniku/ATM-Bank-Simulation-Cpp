#include "dllpincode.h"
#include <QDesktopWidget>

DLLPINCode::DLLPINCode()
{
    objectDesk = new QDesktopWidget;
    objectDLLPinCodeEngine = new DLLPinCodeEngine;
    QObject::connect(objectDLLPinCodeEngine, &DLLPinCodeEngine::sendPIN, this, &DLLPINCode::receivePIN);
}

DLLPINCode::~DLLPINCode()
{
    delete objectDLLPinCodeEngine;
    delete objectDesk;
    objectDLLPinCodeEngine = NULL;
    objectDesk = NULL;
}

void DLLPINCode::interfaceFunctionControlEngine()
{
    objectDLLPinCodeEngine->Timer();
    objectDLLPinCodeEngine->setGeometry(objectDesk->screenGeometry(0));
    objectDLLPinCodeEngine->showFullScreen();
    objectDLLPinCodeEngine->exec();
}

void DLLPINCode::interfaceFunctionCloseDialog()
{
    objectDLLPinCodeEngine->close();
}

void DLLPINCode::interfaceFunctionSetLabel(QString newLabel)
{
    objectDLLPinCodeEngine->setLabel(newLabel);
}

void DLLPINCode::receivePIN(QString receivedPIN)
{
    emit returnPIN(receivedPIN);
}
