/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QVBoxLayout *verticalLayout_Main;
    QLabel *titleLabel;
    QFormLayout *formLayout;
    QLabel *labelUsername;
    QLineEdit *txUsername;
    QLabel *labelPassword;
    QLineEdit *txPassword;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_Button;
    QSpacerItem *horizontalSpacer_Left;
    QPushButton *registerbtn;
    QSpacerItem *horizontalSpacer_Right;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(350, 220);
        verticalLayout_Main = new QVBoxLayout(Register);
        verticalLayout_Main->setObjectName("verticalLayout_Main");
        titleLabel = new QLabel(Register);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_Main->addWidget(titleLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelUsername = new QLabel(Register);
        labelUsername->setObjectName("labelUsername");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelUsername);

        txUsername = new QLineEdit(Register);
        txUsername->setObjectName("txUsername");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txUsername);

        labelPassword = new QLabel(Register);
        labelPassword->setObjectName("labelPassword");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, labelPassword);

        txPassword = new QLineEdit(Register);
        txPassword->setObjectName("txPassword");
        txPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, txPassword);


        verticalLayout_Main->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Main->addItem(verticalSpacer);

        horizontalLayout_Button = new QHBoxLayout();
        horizontalLayout_Button->setObjectName("horizontalLayout_Button");
        horizontalSpacer_Left = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Button->addItem(horizontalSpacer_Left);

        registerbtn = new QPushButton(Register);
        registerbtn->setObjectName("registerbtn");
        registerbtn->setMinimumSize(QSize(100, 0));

        horizontalLayout_Button->addWidget(registerbtn);

        horizontalSpacer_Right = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Button->addItem(horizontalSpacer_Right);


        verticalLayout_Main->addLayout(horizontalLayout_Button);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "User Registration", nullptr));
        titleLabel->setText(QCoreApplication::translate("Register", "Register", nullptr));
        labelUsername->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        txUsername->setPlaceholderText(QCoreApplication::translate("Register", "Enter your username", nullptr));
        labelPassword->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        txPassword->setPlaceholderText(QCoreApplication::translate("Register", "Enter your password", nullptr));
        registerbtn->setText(QCoreApplication::translate("Register", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
