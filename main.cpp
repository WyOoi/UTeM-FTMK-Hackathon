#include "mainwindow.h"
#include "dbmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (!DBManager::connect()) {
        return -1; // Stop if cannot connect
    }

    MainWindow w;
    w.show();
    return a.exec();
}
