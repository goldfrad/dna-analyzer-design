#ifndef DNAP_FACTORYCOMMAND_H
#define DNAP_FACTORYCOMMAND_H

#include "newDNA.h"
#include "load.h"
#include <iostream>
#include <string.h>

class FactoryCommand{
public:
    ICommand* getCommand(std::string& command);
};

#endif //DNAP_FACTORYCOMMAND_H
