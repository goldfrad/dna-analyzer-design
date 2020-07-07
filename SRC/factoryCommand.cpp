
#include "factoryCommand.h"

ICommand* FactoryCommand::getCommand(std::string& command) {

    if (!strcmp("new", command.c_str())){
        ICommand* n = new New;
        return n;
    }
    return NULL;
}

