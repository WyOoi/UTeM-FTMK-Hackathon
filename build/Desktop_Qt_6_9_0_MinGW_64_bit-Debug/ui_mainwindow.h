/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labLogin;
    QLabel *labUsername;
    QLineEdit *txUsername;
    QLabel *labPassword;
    QLineEdit *txPassword;
    QPushButton *Enterbtn;
    QPushButton *btnres;
    QLabel *statusLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labLogin = new QLabel(centralwidget);
        labLogin->setObjectName("labLogin");
        labLogin->setGeometry(QRect(300, 120, 200, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        labLogin->setFont(font);
        labLogin->setAlignment(Qt::AlignCenter);
        labUsername = new QLabel(centralwidget);
        labUsername->setObjectName("labUsername");
        labUsername->setGeometry(QRect(250, 200, 80, 28));
        txUsername = new QLineEdit(centralwidget);
        txUsername->setObjectName("txUsername");
        txUsername->setGeometry(QRect(340, 200, 210, 28));
        labPassword = new QLabel(centralwidget);
        labPassword->setObjectName("labPassword");
        labPassword->setGeometry(QRect(250, 245, 80, 28));
        txPassword = new QLineEdit(centralwidget);
        txPassword->setObjectName("txPassword");
        txPassword->setGeometry(QRect(340, 245, 210, 28));
        txPassword->setEchoMode(QLineEdit::Password);
        Enterbtn = new QPushButton(centralwidget);
        Enterbtn->setObjectName("Enterbtn");
        Enterbtn->setGeometry(QRect(340, 295, 100, 32));
        btnres = new QPushButton(centralwidget);
        btnres->setObjectName("btnres");
        btnres->setGeometry(QRect(450, 295, 100, 32));
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(250, 345, 300, 20));
        statusLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        labLogin->setText(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
#if QT_CONFIG(tooltip)
        labLogin->setToolTip(QCoreApplication::translate("MainWindow", "Welcome! Please log in below.", nullptr));
#endif // QT_CONFIG(tooltip)
        labUsername->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        txUsername->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter username", nullptr));
#if QT_CONFIG(tooltip)
        txUsername->setToolTip(QCoreApplication::translate("MainWindow", "Type your username here.", nullptr));
#endif // QT_CONFIG(tooltip)
        labPassword->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        txPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter password", nullptr));
#if QT_CONFIG(tooltip)
        txPassword->setToolTip(QCoreApplication::translate("MainWindow", "Type your password here.", nullptr));
#endif // QT_CONFIG(tooltip)
        Enterbtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
#if QT_CONFIG(tooltip)
        Enterbtn->setToolTip(QCoreApplication::translate("MainWindow", "Click to login", nullptr));
#endif // QT_CONFIG(tooltip)
        btnres->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
#if QT_CONFIG(tooltip)
        btnres->setToolTip(QCoreApplication::translate("MainWindow", "Click to register a new account", nullptr));
#endif // QT_CONFIG(tooltip)
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
