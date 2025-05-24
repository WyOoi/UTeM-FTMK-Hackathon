/********************************************************************************
** Form generated from reading UI file 'congestion.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONGESTION_H
#define UI_CONGESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CongestionWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *refreshButton;
    QTableWidget *tableWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CongestionWindow)
    {
        if (CongestionWindow->objectName().isEmpty())
            CongestionWindow->setObjectName("CongestionWindow");
        CongestionWindow->resize(600, 400);
        centralwidget = new QWidget(CongestionWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName("refreshButton");

        verticalLayout->addWidget(refreshButton);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setColumnCount(2);
        tableWidget->setRowCount(0);

        verticalLayout->addWidget(tableWidget);

        CongestionWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CongestionWindow);
        statusbar->setObjectName("statusbar");
        CongestionWindow->setStatusBar(statusbar);

        retranslateUi(CongestionWindow);

        QMetaObject::connectSlotsByName(CongestionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CongestionWindow)
    {
        CongestionWindow->setWindowTitle(QCoreApplication::translate("CongestionWindow", "Park Congestion Monitor", nullptr));
        refreshButton->setText(QCoreApplication::translate("CongestionWindow", "Refresh", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CongestionWindow", "Hour", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CongestionWindow", "Avg Congestion (%)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CongestionWindow: public Ui_CongestionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONGESTION_H
