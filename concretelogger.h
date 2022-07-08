#ifndef CONCRETELOGGER_H
#define CONCRETELOGGER_H

#include <vector>
#include <string>

#include "record.h"
#include "dbmanager.h"
#include "sql/sqlpgrs.h"

class ConcreteLogger
{
public:
    explicit ConcreteLogger();

    static std::string generateInsert(const std::vector<RecBase *> &msg);

private:
    DbManager<SqlPgrs> db;
};

#endif // CONCRETELOGGER_H
