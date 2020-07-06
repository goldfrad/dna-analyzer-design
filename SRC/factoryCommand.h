#ifndef DNAP_FACTORYCOMMAND_H
#define DNAP_FACTORYCOMMAND_H

#include "newDNA.h"
#include <iostream>
#include <sstream>
#include <string.h>

class FactoryCommand{
public:
    static ICommand* getCommand(std::string& lineOfCommand);
};

#endif //DNAP_FACTORYCOMMAND_H
