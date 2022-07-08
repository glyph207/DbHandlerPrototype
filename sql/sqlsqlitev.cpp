#include "sqlsqlitev.h"

#include <iostream>

SqlSqliteV::SqlSqliteV()
{
    std::cout << "ctor sqlite vn edition\n";
}

void SqlSqliteV::openDatabase(const std::string &dbName) noexcept
{
    std::cout << "open db sqlite vn edition\n";
}

void SqlSqliteV::createTables(const std::string &createReq) noexcept
{
    std::cout << "create tables sqlite vn edition\n";
}

void SqlSqliteV::addSession(const Session &session) noexcept
{
    std::cout << "add session sqlite vn edition\n";
}

void SqlSqliteV::removeSession(const int id) noexcept
{
    std::cout << "remove session sqlite vn edition\n";
}

void SqlSqliteV::extractSessions(const std::vector<int> &ids, const std::string &fn) noexcept
{
    std::cout << "extract sessions sqlite vn edition\n";
}
