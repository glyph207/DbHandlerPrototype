#ifndef SQLPGRS_H
#define SQLPGRS_H

#include "sqler.h"

class SqlPgrs : public Sqler
{
public:
    explicit SqlPgrs();

    void openDatabase(const std::string &dbName) noexcept override;
    void createTables(const std::string &createReq) noexcept override;
    void addSession(const Session &session) noexcept override;
    void removeSession(const int id) noexcept override;
    void extractSessions(const std::vector<int> &ids, const std::string &fn) noexcept override;
};

#endif // SQLPGRS_H
