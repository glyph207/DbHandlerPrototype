#include "sqlpgrs.h"

#include <iostream>

SqlPgrs::SqlPgrs()
{
    std::cout << "ctor postgresql default\n";
}

void SqlPgrs::openDatabase(const std::string &dbName) noexcept
{
    std::cout << "open db postgresql default\n";
}

void SqlPgrs::createTables(const std::string &createReq) noexcept
{
    std::cout << "create tables postgresql default\n";
}

void SqlPgrs::addSession(const Session &session) noexcept
{
    std::cout << "add session postgresql default\n";
}

void SqlPgrs::removeSession(const int id) noexcept
{
    std::cout << "remove session postgresql default\n";
}

void SqlPgrs::extractSessions(const std::vector<int> &ids, const std::string &fn) noexcept
{
    std::cout << "extract sessions postgresql default\n";
}
