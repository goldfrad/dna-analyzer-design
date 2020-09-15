#ifndef DNAP_FACTORYCOMMAND_H
#define DNAP_FACTORYCOMMAND_H

#include "commands/newDna/newDNA.h"
#include "commands/newDna/load.h"
#include "commands/newDna/dup.h"
#include "commands/command.h"
#include <iostream>
#include <string.h>

class FactoryCommand{
public:
    ICommand* getCommand(std::string& command);
};

#endif //DNAP_FACTORYCOMMAND_H
