#include "banksimul.h"
#include <QApplication>
#include <QWindow>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BankSimul w;
    w.showFullScreen();

    return a.exec();
}
