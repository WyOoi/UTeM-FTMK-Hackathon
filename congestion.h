// congestion.h
#ifndef CONGESTION_H
#define CONGESTION_H

#include <QMap>
#include <QString>
#include <QSqlDatabase>

class CongestionManager {
public:
    explicit CongestionManager(const QString &dbPath, int maxSlots = 30);
    ~CongestionManager();

    /// Returns true if the SQLite database opened successfully.
    bool isOpen() const;

    /// Measure congestion: returns a map of hour -> average congestion (%)
    QMap<int, double> measureCongestion();

private:
    bool openDatabase(const QString &path);

    QSqlDatabase db_;
    int maxSlots_;
};

#endif // CONGESTION_H
