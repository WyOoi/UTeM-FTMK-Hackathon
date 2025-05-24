#include "register.h"
#include "ui_register.h"
#include <QSqlQuery>
#include <QMessageBox>

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);

    ui->txUsername->setPlaceholderText("Username");
    ui->txPassword->setPlaceholderText("Password");
}

Register::~Register()
{
    delete ui;
}

void Register::on_registerbtn_clicked()
{
    QString username = ui->txUsername->text();
    QString password = ui->txPassword->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Registration successful!");
        this->close(); // Close the registration window after successful registration
    } else {
        QMessageBox::warning(this, "Error", "Registration failed. Username might already exist.");
    }
}

