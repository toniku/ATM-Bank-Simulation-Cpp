#ifndef DLLMYSQLENGINE_H
#define DLLMYSQLENGINE_H
#include <QObject>
#include <QDebug>
#include <QtSql/QtSql>
#include <QDateTime>

class DLLMySQLEngine : public QObject
{
    Q_OBJECT

public:
    DLLMySQLEngine();
    ~DLLMySQLEngine();
    bool StartConnection();
    bool logIn(QString pinCode);
    bool cardIdentification(QString cardID);
    bool isLocked();
    void logOut();
    QString showBalance();
    QString getAccountEvent();
    void cashWithdrawal(double amount);
    void cashWithdrawalSkipAd(double amount);
    void customerInf();
    void lockCard();

signals:
    void changePage();

private:
    QSqlDatabase db;
    double newAmount;


    struct Customer
    {
        QString firstname;
        QString lastname;
        int customerID;
    } customerData;

    struct Card
    {
        int id;
        int password;
        int cardnumber;
        int lockState;
    } cardData;

    struct Account
    {
        int id;
        double balance;
    } accountData;

    struct accountEvents
    {
        QString recipient;
        QString definition;
        double amount;
        QString datetime;
    } events;

};

#endif // DLLMYSQLENGINE_H
