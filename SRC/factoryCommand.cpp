
#include "factoryCommand.h"

static ICommand* FactoryCommand::getCommand(std::string& lineOfCommand) {
    std::vector<std::string> array;
    std::stringstream ss(lineOfCommand);
    std::string temp;
    while (ss >> temp)
        array.push_back(temp);
    if (!strcmp("new", array[0].c_str())){
        ICommand* n = new New;
        return n;
    }
    return NULL;
}

