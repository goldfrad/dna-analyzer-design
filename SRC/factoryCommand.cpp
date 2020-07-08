
#include "factoryCommand.h"

ICommand* FactoryCommand::getCommand(std::string& command) {

    if ("new" == command){
        ICommand* n = new New;
        return n;
    }
    else if("load" == command){
        ICommand* n = new Load;
        return n;
    }
    else if("dup" == command){
        ICommand* n = new Dup;
        return n;
    }
    return NULL;
}

