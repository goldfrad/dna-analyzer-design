
#include "factoryCommand.h"

ICommand* FactoryCommand::getCommand(std::string& command) {

    if ("new" == command){
        ICommand* n = new New;
        return n;
    }

    if("load" == command){
        ICommand* n = new Load;
        return n;
    }

    if("dup" == command){
        ICommand* n = new Dup;
        return n;
    }

    if("len" == command){
        ICommand* n = new Len;
        return n;
    }

    if("find" == command){
        ICommand* n = new Find;
        return n;
    }
    return NULL;
}

