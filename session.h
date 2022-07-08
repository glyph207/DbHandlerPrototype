#ifndef SESSION_H
#define SESSION_H

#include <chrono>
#include <string>

struct Session
{
    int id;
    using TimePoint = std::chrono::time_point<std::chrono::system_clock>;
    TimePoint start;
    TimePoint end;
    int size;
    std::string comment;
};

#endif // SESSION_H
