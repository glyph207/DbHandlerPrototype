#ifndef RECORD_H
#define RECORD_H

#include <string>

struct RecBase
{
    enum class Type {
        Int, Double
    };
    RecBase(const Type t, const std::string &fieldName) : t(t), fieldName(fieldName) {}

    Type t;
    std::string fieldName;

    std::string getFieldName() const { return fieldName; }
};

struct RecInt : public RecBase
{
    RecInt(const int val, const std::string &fieldName) : RecBase(RecBase::Type::Int, fieldName), val(val) {}
    int val;
};

struct RecDouble: public RecBase
{
    RecDouble(const double val, const std::string &fieldName) : RecBase(RecBase::Type::Double, fieldName), val(val) {}
    double val;
};

#endif // RECORD_H
