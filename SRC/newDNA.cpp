#include "newDNA.h"

int New::run(std::vector<std::string>& vecParmeter) {
    Data newdna(vecParmeter[1]);
    std::cout << "[" << newdna.getID() << "] " << newdna.getDNA() << std::endl;
    return 1;
}

