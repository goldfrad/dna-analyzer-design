#ifndef DNAP_COMMAND_H
#define DNAP_COMMAND_H

#include <string>
#include <vector>
#include "data.h"

class ICommand{
public:
    virtual int run(std::vector<std::string>&) = 0;
};

#endif //DNAP_COMMAND_H
