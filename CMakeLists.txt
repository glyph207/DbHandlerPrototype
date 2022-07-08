cmake_minimum_required(VERSION 3.5)

project(DbHandlerPrototype LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DbHandlerPrototype "main.cpp")
target_sources(DbHandlerPrototype
    PRIVATE
        concretelogger.h
        concretelogger.cpp
        dbmanager.h
        record.h
        session.h
        sql/sqler.h
        sql/sqlpgrs.h
        sql/sqlpgrs.cpp
        sql/sqlsqlite.h
        sql/sqlsqlite.cpp
        sql/sqlsqlitev.h
        sql/sqlsqlitev.cpp
)
