#include <iostream>
#include <vector>

#include "concretelogger.h"

int main()
{
    std::vector<RecBase *> msg { new RecInt(6, "abaddon"), new RecInt(6, "Fenriz"), new RecInt(6, "Tezcalipoca"), new RecDouble(666., "Yaotzin") };
    std::cout << ConcreteLogger::generateInsert(msg);

    return 0;
}
