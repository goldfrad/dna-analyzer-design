#ifndef DNAP_COMMAND_H
#define DNAP_COMMAND_H

#include <vector>
#include "class_DNA.h"

class ICommand{
public:
    virtual int run() = 0;
};

#endif //DNAP_COMMAND_H
