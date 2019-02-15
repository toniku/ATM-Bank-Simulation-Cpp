/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *lineEditPIN;
    QPushButton *ButtonOk;
    QPushButton *button0;
    QPushButton *ButtonNollaa;
    QPushButton *button9;
    QPushButton *button8;
    QPushButton *button7;
    QPushButton *button6;
    QPushButton *button5;
    QPushButton *button4;
    QPushButton *button3;
    QPushButton *button2;
    QPushButton *button1;
    QLabel *label;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QLatin1String("Dialog"));
        Dialog->resize(1080, 1920);
        Dialog->setStyleSheet(QLatin1String("background-color: rgb(60, 60, 60);"));
        lineEditPIN = new QLineEdit(Dialog);
        lineEditPIN->setObjectName(QLatin1String("lineEditPIN"));
        lineEditPIN->setGeometry(QRect(10, 560, 1061, 111));
        QPalette palette;
        QBrush brush(QColor(255, 93, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(60, 60, 60, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lineEditPIN->setPalette(palette);
        QFont font;
        font.setPointSize(80);
        lineEditPIN->setFont(font);
        lineEditPIN->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEditPIN->setMaxLength(4);
        lineEditPIN->setFrame(true);
        lineEditPIN->setEchoMode(QLineEdit::Password);
        ButtonOk = new QPushButton(Dialog);
        ButtonOk->setObjectName(QLatin1String("ButtonOk"));
        ButtonOk->setGeometry(QRect(360, 20, 341, 281));
        QPalette palette1;
        QBrush brush2(QColor(231, 231, 231, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(33, 0, 100, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        ButtonOk->setPalette(palette1);
        ButtonOk->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button0 = new QPushButton(Dialog);
        button0->setObjectName(QLatin1String("button0"));
        button0->setGeometry(QRect(370, 1620, 341, 281));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button0->setPalette(palette2);
        button0->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        ButtonNollaa = new QPushButton(Dialog);
        ButtonNollaa->setObjectName(QLatin1String("ButtonNollaa"));
        ButtonNollaa->setGeometry(QRect(10, 1620, 341, 281));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        ButtonNollaa->setPalette(palette3);
        ButtonNollaa->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button9 = new QPushButton(Dialog);
        button9->setObjectName(QLatin1String("button9"));
        button9->setGeometry(QRect(730, 1310, 341, 281));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button9->setPalette(palette4);
        button9->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button8 = new QPushButton(Dialog);
        button8->setObjectName(QLatin1String("button8"));
        button8->setGeometry(QRect(370, 1310, 341, 281));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button8->setPalette(palette5);
        button8->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button7 = new QPushButton(Dialog);
        button7->setObjectName(QLatin1String("button7"));
        button7->setGeometry(QRect(10, 1310, 341, 281));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button7->setPalette(palette6);
        button7->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button6 = new QPushButton(Dialog);
        button6->setObjectName(QLatin1String("button6"));
        button6->setGeometry(QRect(730, 1000, 341, 281));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button6->setPalette(palette7);
        button6->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; "));
        button5 = new QPushButton(Dialog);
        button5->setObjectName(QLatin1String("button5"));
        button5->setGeometry(QRect(370, 1000, 341, 281));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button5->setPalette(palette8);
        button5->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button4 = new QPushButton(Dialog);
        button4->setObjectName(QLatin1String("button4"));
        button4->setGeometry(QRect(10, 1000, 341, 281));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button4->setPalette(palette9);
        button4->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button3 = new QPushButton(Dialog);
        button3->setObjectName(QLatin1String("button3"));
        button3->setGeometry(QRect(730, 690, 341, 281));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button3->setPalette(palette10);
        button3->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button2 = new QPushButton(Dialog);
        button2->setObjectName(QLatin1String("button2"));
        button2->setGeometry(QRect(370, 690, 341, 281));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button2->setPalette(palette11);
        button2->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button1 = new QPushButton(Dialog);
        button1->setObjectName(QLatin1String("button1"));
        button1->setGeometry(QRect(10, 690, 341, 281));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        button1->setPalette(palette12);
        button1->setStyleSheet(QLatin1String("background-color: rgb(33, 0, 100);\n"
"font: 60pt \"Ebrima\"; \n"
""));
        button1->setIconSize(QSize(20, 20));
        label = new QLabel(Dialog);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(0, 290, 1080, 271));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush5(QColor(255, 255, 255, 127));
        brush5.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label->setPalette(palette13);
        lcdNumber = new QLCDNumber(Dialog);
        lcdNumber->setObjectName(QLatin1String("lcdNumber"));
        lcdNumber->setGeometry(QRect(870, 30, 131, 61));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        lineEditPIN->setText(QString());
        ButtonOk->setText(QApplication::translate("Dialog", "OK", nullptr));
        button0->setText(QApplication::translate("Dialog", "0", nullptr));
        ButtonNollaa->setText(QApplication::translate("Dialog", "Nollaa", nullptr));
        button9->setText(QApplication::translate("Dialog", "9", nullptr));
        button8->setText(QApplication::translate("Dialog", "8", nullptr));
        button7->setText(QApplication::translate("Dialog", "7", nullptr));
        button6->setText(QApplication::translate("Dialog", "6", nullptr));
        button5->setText(QApplication::translate("Dialog", "5", nullptr));
        button4->setText(QApplication::translate("Dialog", "4", nullptr));
        button3->setText(QApplication::translate("Dialog", "3", nullptr));
        button2->setText(QApplication::translate("Dialog", "2", nullptr));
        button1->setText(QApplication::translate("Dialog", "1", nullptr));
        label->setText(QApplication::translate("Dialog", "\n"
"<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">Sy\303\266t\303\244 Pin-koodi</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
