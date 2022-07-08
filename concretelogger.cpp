#include "concretelogger.h"

namespace {
template <typename Rec>
std::string getValStr(Rec* rec)
{
    std::string res = std::to_string(rec->val);
    res += ", ";
    return res;
}

bool endsWith(const std::string &str, const std::string &ending)
{
    if (str.length() >= ending.length()) {
            return (0 == str.compare (str.length() - ending.length(), ending.length(), ending));
        } else {
            return false;
        }
}

} // nameless namespace

ConcreteLogger::ConcreteLogger()
    : db("name", "req")
{}

std::string ConcreteLogger::generateInsert(const std::vector<RecBase *> &msg)
{
    std::string result = "INSET INTO SATAN (";
    std::string fieldNames;
    std::string values = " VALUES (";

    for (RecBase *r: msg) {
        fieldNames += r->getFieldName() + ", ";
        switch (r->t) {
        case RecBase::Type::Int:
            values += getValStr(static_cast<RecInt*>(r));
            break;
        case RecBase::Type::Double:
            values += getValStr(static_cast<RecDouble*>(r));
            break;
        }
    }
    auto removeTrailingComma = [](std::string &s){
        std::string strToRemove(", ");
        const int sz = strToRemove.size();
        if (endsWith(s, ", ")) s.erase(s.size() - sz, sz);
    };
    removeTrailingComma(fieldNames);
    removeTrailingComma(values);

    fieldNames += ")";
    values += ")";

    return result + fieldNames + values;
}
