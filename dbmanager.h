#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <vector>
#include <string>

#include "session.h"
#include "record.h"

template <typename SqlImpl>
class DbManager
{
public:
    DbManager(const std::string &dbName, const std::string &tableCreateReq)
    {
        sqlImpl.openDatabase(dbName);
        sqlImpl.createTables(tableCreateReq);
    }

    void addSession(const Session &session)
    {
        sqlImpl.addSession(session);
    }

    void removeSession(const int id)
    {
        sqlImpl.removeSession(id);
    }

    void extractSessions(const std::vector<int> &ids, const std::string &fn)
    {
        sqlImpl.extractSessions(ids, fn);
    }

private:
    SqlImpl sqlImpl;

};

#endif // DBMANAGER_H
