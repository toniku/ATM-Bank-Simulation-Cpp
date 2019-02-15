#include "DLLAd.h"

DLLAd::DLLAd()
{
    objectDLLAdEngine = new DLLAdEngine;
    QObject::connect(objectDLLAdEngine, &DLLAdEngine::advertOver, this, &DLLAd::adOverReceived);
}

DLLAd::~DLLAd()
{
    delete objectDLLAdEngine;
    objectDLLAdEngine = NULL;
}

void DLLAd::interfaceFunctionControlShowAd10()
{
    objectDLLAdEngine->showAd10();
}

void DLLAd::interfaceFunctionControlShowAd20()
{
    objectDLLAdEngine->showAd20();
}

void DLLAd::interfaceFunctionControlShowAd30()
{
    objectDLLAdEngine->showAd30();
}

void DLLAd::interfaceFunctionControlShowAd40()
{
    objectDLLAdEngine->showAd40();
}

void DLLAd::interfaceFunctionControlShowAd50()
{
    objectDLLAdEngine->showAd50();
}

void DLLAd::interfaceFunctionControlShowAd60()
{
    objectDLLAdEngine->showAd60();
}

void DLLAd::adOverReceived()
{
    emit adIsOver();
}

