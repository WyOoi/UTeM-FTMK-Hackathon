#include "user.h"
#include "ui_user.h"
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>

User::User(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

void User::on_ParkingLocation_clicked()
{
    // Make sure the database is open
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open.");
        return;
    }

    // Create the model
    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("parking"); // Your table name is "parking"
    model->select(); // Load the data

    // Set model to the table view
    ui->tableView->setModel(model);

}


void User::on_Peakhours_clicked()
{

}

