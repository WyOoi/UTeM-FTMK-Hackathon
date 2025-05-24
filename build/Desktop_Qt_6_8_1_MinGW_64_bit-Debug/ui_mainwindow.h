/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
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
    QLineEdit *txUsername;
    QLineEdit *txPassword;
    QPushButton *Enterbtn;
    QPushButton *btnres;
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
        labLogin->setGeometry(QRect(330, 190, 41, 31));
        txUsername = new QLineEdit(centralwidget);
        txUsername->setObjectName("txUsername");
        txUsername->setGeometry(QRect(300, 240, 131, 28));
        txPassword = new QLineEdit(centralwidget);
        txPassword->setObjectName("txPassword");
        txPassword->setGeometry(QRect(300, 280, 131, 28));
        Enterbtn = new QPushButton(centralwidget);
        Enterbtn->setObjectName("Enterbtn");
        Enterbtn->setGeometry(QRect(320, 320, 83, 29));
        btnres = new QPushButton(centralwidget);
        btnres->setObjectName("btnres");
        btnres->setGeometry(QRect(300, 370, 131, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        Enterbtn->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        btnres->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
