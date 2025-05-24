/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QHBoxLayout *mainLayout;
    QGroupBox *peakHoursGroup;
    QVBoxLayout *peakHoursLayout;
    QPushButton *Peakhours;
    QTextEdit *textEdit;
    QGroupBox *parkingLocationGroup;
    QVBoxLayout *parkingLocationLayout;
    QPushButton *ParkingLocation;
    QTableView *tableView;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(800, 450);
        mainLayout = new QHBoxLayout(User);
        mainLayout->setObjectName("mainLayout");
        peakHoursGroup = new QGroupBox(User);
        peakHoursGroup->setObjectName("peakHoursGroup");
        peakHoursLayout = new QVBoxLayout(peakHoursGroup);
        peakHoursLayout->setObjectName("peakHoursLayout");
        Peakhours = new QPushButton(peakHoursGroup);
        Peakhours->setObjectName("Peakhours");

        peakHoursLayout->addWidget(Peakhours);

        textEdit = new QTextEdit(peakHoursGroup);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMinimumSize(QSize(150, 80));

        peakHoursLayout->addWidget(textEdit);


        mainLayout->addWidget(peakHoursGroup);

        parkingLocationGroup = new QGroupBox(User);
        parkingLocationGroup->setObjectName("parkingLocationGroup");
        parkingLocationLayout = new QVBoxLayout(parkingLocationGroup);
        parkingLocationLayout->setObjectName("parkingLocationLayout");
        ParkingLocation = new QPushButton(parkingLocationGroup);
        ParkingLocation->setObjectName("ParkingLocation");

        parkingLocationLayout->addWidget(ParkingLocation);

        tableView = new QTableView(parkingLocationGroup);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);

        parkingLocationLayout->addWidget(tableView);


        mainLayout->addWidget(parkingLocationGroup);


        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Parking Information", nullptr));
        peakHoursGroup->setTitle(QCoreApplication::translate("User", "Peak Hours Information", nullptr));
        Peakhours->setText(QCoreApplication::translate("User", "Show Peak Hours", nullptr));
        parkingLocationGroup->setTitle(QCoreApplication::translate("User", "Parking Availability", nullptr));
        ParkingLocation->setText(QCoreApplication::translate("User", "Check Parking Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
