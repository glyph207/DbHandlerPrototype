#ifndef SQLER_H
#define SQLER_H

#include <string>
#include <vector>

#include "../session.h"

class Sqler
{
public:
    virtual void openDatabase(const std::string &dbName) = 0;
    virtual void createTables(const std::string &createReq) = 0;
    virtual void addSession(const Session &session) = 0;
    virtual void removeSession(const int id) = 0;
    virtual void extractSessions(const std::vector<int> &ids, const std::string &fn) = 0;
};

#endif // SQLER_H
