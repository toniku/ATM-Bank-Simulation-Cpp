#include "banksimul.h"
#include "ui_mainwindow.h"

BankSimul::BankSimul(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) // constructor
{
    ui->setupUi(this); // create instances of widgets
    ui->stackedWidget->setCurrentIndex(0);  // set default page to page-1 (mainmenu)
    timer = new QTimer(this);
    timer->stop();  // timer is stopped when in default page
    objectDLLAd = new DLLAd;
    objectDLLSerialPort = new DLLSerialPort;    //create objects
    objectDLLPINCode = new DLLPINCode;
    objectDLLMySQL = new DLLMySQL;
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    QObject::connect(objectDLLSerialPort, &DLLSerialPort::returnValue, this, &BankSimul::checkId);  // send read card-id to checkId function
    QObject::connect(objectDLLPINCode, &DLLPINCode::returnPIN, this, &BankSimul::checkPIN); // send pin-code that user inputs to checkPIN function
    QObject::connect(objectDLLMySQL, &DLLMySQL::sendPage, this, &BankSimul::noMoneyPage);   // if user doesn't have enough money show errorpage
    QObject::connect(objectDLLAd, &DLLAd::adIsOver, this, &BankSimul::goodByePage); // when the advert is over go to goodbye page
    objectDLLSerialPort->interfaceFunctionOpenConnection(); // open serial-port connection for RFID-card reader
    attempts = 0;   // Login attempts
    loggedIn = false;   // logged in state
    withdrawalAmount = 0;   // withdrawal amount
    eventsPage = 0;
    index = 0;
}

BankSimul::~BankSimul() // Destructor
{
    delete ui;
    delete timer;
    delete objectDLLMySQL;
    delete objectDLLPINCode;
    delete objectDLLSerialPort;
    delete objectDLLAd;
    ui = NULL;
    timer = NULL;
    objectDLLMySQL = NULL;
    objectDLLPINCode = NULL;
    objectDLLSerialPort = NULL;
    objectDLLAd = NULL;
}

void BankSimul::checkId(QString CardId) // RFID-card check function when card-input
{
    if (loggedIn == false)  // if user is not logged in, start db-connection
    {
        objectDLLMySQL->interfaceFunctionStartConnection();
        objectDLLPINCode->interfaceFunctionSetLabel("Syötä Pin-koodi"); // set text "Syötä Pin-koodi" in case it's "Väärä tunnusluku!"
        if (objectDLLMySQL->interfaceFunctionCardIdentification(CardId)) // Check if card exists
        {
            if (objectDLLMySQL->interfaceFunctionIsLocked())    // If card is locked, display 10 second error on page 2
            {
                ui->stackedWidget->setCurrentIndex(1);
                page = 2;
                Timer10();
            }
            else
            {
                objectDLLPINCode->interfaceFunctionControlEngine();     // If card is not locked, open pin-code dialog
            }
        }
    }
}

void BankSimul::checkPIN(QString checkedPIN)
{
    objectDLLPINCode->interfaceFunctionSetLabel("Syötä Pin-koodi"); // set text "Syötä Pin-koodi" in case it's "Väärä tunnusluku!"
    bool result = objectDLLMySQL->interfaceFunctionLogIn(checkedPIN);   // Database returns true or false
    if(result)  // if pin-code is correct, close pin-code dialog -> open main ATM interface -> set Logged in state as true
    {
        ui->stackedWidget->setCurrentIndex(2);
        Timer30();
        page = 3;
        attempts = 0;
        loggedIn = true;
        objectDLLPINCode->interfaceFunctionCloseDialog();
    }
    else    // if user inputs pin-code wrong, add one attempt, set error text to the label
    {
        attempts++;
        objectDLLPINCode->interfaceFunctionSetLabel("Tunnusluku väärin!\nYritä uudelleen!");
    }
    if(attempts == 3)   // if user has used all 3 attempts inputting the pin-code:
    {
        objectDLLMySQL->interfaceFunctionLockCard();        // Lock card
        objectDLLPINCode->interfaceFunctionCloseDialog();   // Close pin-code dialog
        ui->stackedWidget->setCurrentIndex(1);              // Display error page
        page = 2;   // Set page as page-2
        Timer10();  // start 10 second timer

        //loggedIn = false;    //necessary?         //18756€
    }
}

void BankSimul::updateTime()    // updateTime function
{
    time--;
    timer->setInterval(1000);
    timer->start();
    if(time == 0)   // when time is null:
    {
        if(page == 3 || page == 9 || page == 6) // if user is on page 3, 9 or 5
        {
            timer->stop();      // stop the timer, login state false, go to default page, close all database connections
            loggedIn = false;
            ui->stackedWidget->setCurrentIndex(0);
            objectDLLMySQL->interfaceFunctionLogOut();
        }
        else if(page < 9 && page > 3)   // user can view withdrawal, activity or balance -pages for 10 seconds
        {
            timer->stop();
            ui->stackedWidget->setCurrentIndex(2);
            Timer30();
            page = 3;
        }
        else if(page == 2)  // if user has locked the card, stop timer, go to default page, set login state false
        {
            timer->stop();
            ui->stackedWidget->setCurrentIndex(0);
            loggedIn = false;   //necessary?
        }

        else if(page == 10) // if user doesn't have enough money, go to main menu
        {
            timer->stop();
            ui->stackedWidget->setCurrentIndex(3);
            Timer10();
            page = 4;
        }
    }
}

void BankSimul::Timer10()   // 10 second timer
{
    timer->stop();
    time = 11;
    timer->setInterval(1000);
    timer->start();
    updateTime();
}

void BankSimul::Timer30()   // 30 second timer
{
    timer->stop();
    time = 31;
    timer->setInterval(1000);
    timer->start();
    updateTime();
}

// when each button is pressed, the configured page is set and timer is set to start

void BankSimul::on_NostaRahaa_clicked()
{
    money = true;
    page = 4;
    ui->stackedWidget->setCurrentIndex(3);
    Timer10();
    QString returnString = objectDLLMySQL->interfaceFunctionShowBalance();
    QStringList balanceList = returnString.split('|');
    QFont font = ui->labelNostoSaldo->font();
    font.setPointSize(40);
    ui->labelNostoSaldo->setAlignment(Qt::AlignCenter);
    ui->labelNostoSaldo->setFont(font);
    ui->labelNostoSaldo->setText(balanceList[0] + " " + balanceList[1] + "\nSaldo: " + balanceList[2] + "€");
}

void BankSimul::on_NaytaSaldo_clicked()
{
    page = 8;
    ui->stackedWidget->setCurrentIndex(7);
    Timer10();
    QString returnString = objectDLLMySQL->interfaceFunctionShowBalance();
    QStringList balanceList = returnString.split('|');
    QString eventString = objectDLLMySQL->interfaceFunctionGetAccountEvent();
    QStringList eventList = eventString.split('|');
    QFont font = ui->labelSaldo->font();
    font.setPointSize(40);
    ui->labelSaldo->setAlignment(Qt::AlignCenter);
    ui->labelSaldo->setFont(font);
    ui->labelSaldo->setText(balanceList[0] + " " + balanceList[1] + "\nSaldo: " + balanceList[2] + "€");
    font.setPointSize(22);
    ui->labelTapahtuma->setFont(font);
    ui->labelTapahtuma->setText(eventList[0] + " " + eventList[1] + " " + eventList[2] + "€ " + eventList[3]
                                + "\n" + eventList[4] + " " + eventList[5] + " " + eventList[6] + "€ " + eventList[7]
                                + "\n" + eventList[8] + " " + eventList[9] + " " + eventList[10] + "€ " + eventList[11]
                                + "\n" + eventList[12] + " " + eventList[13] + " " + eventList[14] + "€ " + eventList[15]
                                + "\n" + eventList[16] + " " + eventList[17] + " " + eventList[18] + "€ " + eventList[19]);
}

void BankSimul::on_SelaaTili_clicked()
{
    page = 7;
    ui->stackedWidget->setCurrentIndex(6);
    Timer10();
    QString returnString = objectDLLMySQL->interfaceFunctionShowBalance();
    QStringList balanceList = returnString.split('|');
    QFont font = ui->labelTiliSaldo->font();
    font.setPointSize(40);
    ui->labelTiliSaldo->setAlignment(Qt::AlignCenter);
    ui->labelTiliSaldo->setFont(font);
    ui->labelTiliSaldo->setText(balanceList[0] + " " + balanceList[1] + "\nSaldo: " + balanceList[2] + "€");

    QString eventString = objectDLLMySQL->interfaceFunctionGetAccountEvent();

    QStringList eventList = eventString.split('|');
    font.setPointSize(22);
    ui->label1->setFont(font);
    ui->label1->setText(       eventList[0] + " " + eventList[1] + " " + eventList[2] + "€ " + eventList[3]
                               + "\n" + eventList[4] + " " + eventList[5] + " " + eventList[6] + "€ " + eventList[7]
                               + "\n" + eventList[8] + " " + eventList[9] + " " + eventList[10] + "€ " + eventList[11]
                               + "\n" + eventList[12] + " " + eventList[13] + " " + eventList[14] + "€ " + eventList[15]
                               + "\n" + eventList[16] + " " + eventList[17] + " " + eventList[18] + "€ " + eventList[19]
                               + "\n" + eventList[20] + " " + eventList[21] + " " + eventList[22] + "€ " + eventList[23]
                               + "\n" + eventList[24] + " " + eventList[25] + " " + eventList[26] + "€ " + eventList[27]
                               + "\n" + eventList[28] + " " + eventList[29] + " " + eventList[30] + "€ " + eventList[31]
                               + "\n" + eventList[32] + " " + eventList[33] + " " + eventList[34] + "€ " + eventList[35]
                               + "\n" + eventList[36] + " " + eventList[37] + " " + eventList[38] + "€ " + eventList[39]);

}

void BankSimul::on_Eteenpain_clicked()
{
    if (index < 120 )
    {
        index = index + 40;
    }
    Timer10();
        QFont font = ui->label1->font();
        QString eventString = objectDLLMySQL->interfaceFunctionGetAccountEvent();
        QStringList eventList = eventString.split('|');
        font.setPointSize(20);
        ui->label1->setFont(font);
        ui->label1->setText(       eventList[0+index] + " " + eventList[1+index] + " " + eventList[2+index] + "€ " + eventList[3+index]
                                   + "\n" + eventList[4+index] + " " + eventList[5+index] + " " + eventList[6+index] + "€ " + eventList[7+index]
                                   + "\n" + eventList[8+index] + " " + eventList[9+index] + " " + eventList[10+index] + "€ " + eventList[11+index]
                                   + "\n" + eventList[12+index] + " " + eventList[13+index] + " " + eventList[14+index] + "€ " + eventList[15+index]
                                   + "\n" + eventList[16+index] + " " + eventList[17+index] + " " + eventList[18+index] + "€ " + eventList[19+index]
                                   + "\n" + eventList[20+index] + " " + eventList[21+index] + " " + eventList[22+index] + "€ " + eventList[23+index]
                                   + "\n" + eventList[24+index] + " " + eventList[25+index] + " " + eventList[26+index] + "€ " + eventList[27+index]
                                   + "\n" + eventList[28+index] + " " + eventList[29+index] + " " + eventList[30+index] + "€ " + eventList[31+index]
                                   + "\n" + eventList[32+index] + " " + eventList[33+index] + " " + eventList[34+index] + "€ " + eventList[35+index]
                                   + "\n" + eventList[36+index] + " " + eventList[37+index] + " " + eventList[38+index] + "€ " + eventList[39+index]);
}

void BankSimul::on_Taaksepain_clicked()
{
    if(index > 0)
    {
        index = index - 40;
    }

    Timer10();
        QFont font = ui->label1->font();
        QString eventString = objectDLLMySQL->interfaceFunctionGetAccountEvent();
        QStringList eventList = eventString.split('|');
        font.setPointSize(20);
        ui->label1->setFont(font);
        ui->label1->setText(         eventList[0+index] + " " + eventList[1+index] + " " + eventList[2+index] + "€ " + eventList[3+index]
                                   + "\n" + eventList[4+index] + " " + eventList[5+index] + " " + eventList[6+index] + "€ " + eventList[7+index]
                                   + "\n" + eventList[8+index] + " " + eventList[9+index] + " " + eventList[10+index] + "€ " + eventList[11+index]
                                   + "\n" + eventList[12+index] + " " + eventList[13+index] + " " + eventList[14+index] + "€ " + eventList[15+index]
                                   + "\n" + eventList[16+index] + " " + eventList[17+index] + " " + eventList[18+index] + "€ " + eventList[19+index]
                                   + "\n" + eventList[20+index] + " " + eventList[21+index] + " " + eventList[22+index] + "€ " + eventList[23+index]
                                   + "\n" + eventList[24+index] + " " + eventList[25+index] + " " + eventList[26+index] + "€ " + eventList[27+index]
                                   + "\n" + eventList[28+index] + " " + eventList[29+index] + " " + eventList[30+index] + "€ " + eventList[31+index]
                                   + "\n" + eventList[32+index] + " " + eventList[33+index] + " " + eventList[34+index] + "€ " + eventList[35+index]
                                   + "\n" + eventList[36+index] + " " + eventList[37+index] + " " + eventList[38+index] + "€ " + eventList[39+index]);

}

void BankSimul::on_KirjauduUlos_clicked()   // logout button clicked:
{
    ui->stackedWidget->setCurrentIndex(0);      // go to default page
    timer->stop();                              // stop the timer
    loggedIn = false;                           // set logged in state false
    objectDLLMySQL->interfaceFunctionLogOut();  // close all database connections
}

void BankSimul::on_Nosto20e_clicked()
{
    withdrawalAmount = 20;
    page = 5;
    ui->stackedWidget->setCurrentIndex(4);
    Timer10();
}

void BankSimul::on_Nosto40e_clicked()
{
    withdrawalAmount = 40;
    page = 5;
    ui->stackedWidget->setCurrentIndex(4);
    Timer10();
}

void BankSimul::on_Nosto60e_clicked()
{
    withdrawalAmount = 60;
    page = 5;
    ui->stackedWidget->setCurrentIndex(4);
    Timer10();
}

void BankSimul::on_Nosto100e_clicked()
{
    withdrawalAmount = 100;
    page = 5;
    ui->stackedWidget->setCurrentIndex(4);
    Timer10();
}

void BankSimul::on_Nosto200e_clicked()
{
    withdrawalAmount = 200;
    page = 5;
    ui->stackedWidget->setCurrentIndex(4);
    Timer10();
}

void BankSimul::on_Nosto500e_clicked()
{
    withdrawalAmount = 500;
    page = 5;
    ui->stackedWidget->setCurrentIndex(4);
    Timer10();
}

void BankSimul::on_Peruuta_clicked()
{
    page = 3;
    ui->stackedWidget->setCurrentIndex(2);
    Timer30();
}

void BankSimul::on_OhitaMainos_clicked()
{

    ui->stackedWidget->setCurrentIndex(5);
    page = 6;

    if(withdrawalAmount == 20)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawalSkipAd(20 * 1.10);
    }
    else if(withdrawalAmount == 40)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawalSkipAd(40 * 1.10);
    }
    else if(withdrawalAmount == 60)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawalSkipAd(60 * 1.10);
    }
    else if(withdrawalAmount == 100)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawalSkipAd(100 * 1.10);
    }
    else if(withdrawalAmount == 200)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawalSkipAd(200 * 1.10);
    }
    else if(withdrawalAmount == 500)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawalSkipAd(500 * 1.10);
    }
}

void BankSimul::on_KatsoMainos_clicked()
{
    if(withdrawalAmount == 20)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawal(20);
        objectDLLAd->interfaceFunctionControlShowAd10();
        timer->stop();
    }
    else if(withdrawalAmount == 40)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawal(40.00);
        objectDLLAd->interfaceFunctionControlShowAd20();
        timer->stop();
    }
    else if(withdrawalAmount == 60)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawal(60.00);
        objectDLLAd->interfaceFunctionControlShowAd30();
        timer->stop();
    }
    else if(withdrawalAmount == 100)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawal(100.00);
        objectDLLAd->interfaceFunctionControlShowAd40();
        timer->stop();
    }
    else if(withdrawalAmount == 200)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawal(200.00);
        objectDLLAd->interfaceFunctionControlShowAd50();
        timer->stop();
    }
    else if(withdrawalAmount == 500)
    {
        objectDLLMySQL->interfaceFunctionCashWithdrawal(500.00);
        objectDLLAd->interfaceFunctionControlShowAd60();
        timer->stop();
    }
}

void BankSimul::noMoneyPage()
{
    page = 10;
    money = false;
    ui->stackedWidget->setCurrentIndex(9);
    Timer10();
}

void BankSimul::goodByePage()
{
    Timer10();
    if(money == true)
    {
        page = 9;
        ui->stackedWidget->setCurrentIndex(8);
        Timer10();
    }
}

void BankSimul::on_Jatka_clicked()
{
    page = 9;
    ui->stackedWidget->setCurrentIndex(8);
    Timer10();
}

void BankSimul::on_Sulje_clicked()
{
    page = 3;
    ui->stackedWidget->setCurrentIndex(2);
    Timer30();
    eventsPage = 0;
}

void BankSimul::on_Sulje_2_clicked()
{
    page = 3;
    ui->stackedWidget->setCurrentIndex(2);
    Timer30();
}

void BankSimul::on_Paavalikko_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
