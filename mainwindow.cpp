#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "register.h"
#include "user.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->txUsername->setPlaceholderText("Username");
    ui->txPassword->setPlaceholderText("Password");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnres_clicked()
{

    Register *registerWindow = new Register(this);
    registerWindow->show();

}


void MainWindow::on_Enterbtn_clicked()
{
    QString username = ui->txUsername->text();
    QString password = ui->txPassword->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        if (query.next()) {
            // Login successful
            QMessageBox::information(this, "Login Success", "Welcome, " + username + "!");

            User *userWindow = new User(this);
            userWindow->show();
            this->hide(); // Optional: hide the login window
        } else {
            // No matching username+password
            QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
        }
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to execute query.");
    }
}

