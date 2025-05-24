#include "congestion.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

CongestionManager::CongestionManager(const QString &dbPath, int maxSlots)
    : maxSlots_(maxSlots)
{
    openDatabase(dbPath);
}

CongestionManager::~CongestionManager()
{
    if (db_.isOpen())
        db_.close();
}

bool CongestionManager::openDatabase(const QString &path)
{
    db_ = QSqlDatabase::addDatabase("QSQLITE", "congestion_connection");
    db_.setDatabaseName(path);

    if (!db_.open()) {
        qWarning() << "Failed to open SQLite DB at" << path << ":" << db_.lastError().text();
        return false;
    }
    return true;
}

bool CongestionManager::isOpen() const
{
    return db_.isOpen();
}

QMap<int, double> CongestionManager::measureCongestion()
{
    QMap<int, double> result;
    if (!db_.isOpen()) {
        qWarning() << "Database is not open.";
        return result;
    }

    QSqlQuery query(db_);
    query.prepare(R"(
        SELECT hours AS hour,
               AVG(used_slots) * 100.0 / :maxSlots AS avgCon
        FROM park_data
        GROUP BY hours
        ORDER BY avgCon DESC
    )");
    query.bindValue(":maxSlots", maxSlots_);

    if (!query.exec()) {
        qWarning() << "Failed to execute congestion query:" << query.lastError().text();
        return result;
    }

    while (query.next()) {
        int hour = query.value("hour").toInt();
        double avgCon = query.value("avgCon").toDouble();
        result.insert(hour, avgCon);
    }
    return result;
}
