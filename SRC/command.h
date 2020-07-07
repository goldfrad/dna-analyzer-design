#ifndef DNAP_COMMAND_H
#define DNAP_COMMAND_H

#include <string>
#include <vector>
#include "dataStructure.h"

class ICommand{
public:
    virtual int run(std::vector<std::string>&) = 0;

protected:
    DataStructure m_ds;
};

#endif //DNAP_COMMAND_H
