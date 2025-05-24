/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLineEdit *txUsername;
    QLineEdit *txPassword;
    QLabel *label;
    QPushButton *registerbtn;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(1157, 696);
        txUsername = new QLineEdit(Register);
        txUsername->setObjectName("txUsername");
        txUsername->setGeometry(QRect(470, 310, 113, 28));
        txPassword = new QLineEdit(Register);
        txPassword->setObjectName("txPassword");
        txPassword->setGeometry(QRect(470, 370, 113, 28));
        label = new QLabel(Register);
        label->setObjectName("label");
        label->setGeometry(QRect(500, 260, 63, 20));
        registerbtn = new QPushButton(Register);
        registerbtn->setObjectName("registerbtn");
        registerbtn->setGeometry(QRect(480, 430, 83, 29));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register", "Register", nullptr));
        registerbtn->setText(QCoreApplication::translate("Register", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
