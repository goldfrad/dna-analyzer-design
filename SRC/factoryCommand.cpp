
#include "factoryCommand.h"

ICommand* FactoryCommand::getCommand(std::string& command) {

    if (!strcmp("new", command.c_str())){
        ICommand* n = new New;
        return n;
    }
    else if(!strcmp("load", command.c_str())){
        ICommand* n = new Load;
        return n;
    }
    return NULL;
}

