/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QPushButton *Peakhours;
    QTextEdit *textEdit;
    QPushButton *ParkingLocation;
    QTableView *tableView;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(1268, 709);
        Peakhours = new QPushButton(User);
        Peakhours->setObjectName("Peakhours");
        Peakhours->setGeometry(QRect(160, 260, 83, 29));
        textEdit = new QTextEdit(User);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(150, 320, 104, 85));
        ParkingLocation = new QPushButton(User);
        ParkingLocation->setObjectName("ParkingLocation");
        ParkingLocation->setGeometry(QRect(770, 250, 121, 29));
        tableView = new QTableView(User);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(630, 290, 401, 241));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Dialog", nullptr));
        Peakhours->setText(QCoreApplication::translate("User", "Peak Hours", nullptr));
        ParkingLocation->setText(QCoreApplication::translate("User", "Check Parking", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
