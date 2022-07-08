#include "sqlsqlite.h"

#include <iostream>

SqlSqlite::SqlSqlite()
{
    std::cout << "ctor sqlite default\n";
}

void SqlSqlite::openDatabase(const std::string &dbName) noexcept
{
    std::cout << "open db sqlite default\n";
}

void SqlSqlite::createTables(const std::string &createReq) noexcept
{
    std::cout << "create tables sqlite default\n";
}

void SqlSqlite::addSession(const Session &session) noexcept
{
    std::cout << "add session sqlite default\n";
}

void SqlSqlite::removeSession(const int id) noexcept
{
    std::cout << "remove session sqlite default\n";
}

void SqlSqlite::extractSessions(const std::vector<int> &ids, const std::string &fn) noexcept
{
    std::cout << "extract sqlite default\n";
}
