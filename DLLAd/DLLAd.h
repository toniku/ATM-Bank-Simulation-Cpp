#ifndef DLLAD_H
#define DLLAD_H
#include "DLLAd_global.h"
#include "DLLAdEngine.h"
#include <QDesktopWidget>
#include <QWidget>
#include <QObject>

class DLLADSHARED_EXPORT DLLAd : public QWidget
{
    Q_OBJECT

public:
    DLLAd();
    ~DLLAd();
    void interfaceFunctionControlShowAd10();
    void interfaceFunctionControlShowAd20();
    void interfaceFunctionControlShowAd30();
    void interfaceFunctionControlShowAd40();
    void interfaceFunctionControlShowAd50();
    void interfaceFunctionControlShowAd60();

private:
    DLLAdEngine *objectDLLAdEngine;


private slots:
    void adOverReceived();

signals:
    void adIsOver();

};



#endif // DLLPINCODE_H
