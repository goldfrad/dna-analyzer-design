#include "newDNA.h"

int New::run(std::vector<std::string>& vecParmeter) {
    Data newdna(vecParmeter[1], vecParmeter[2].erase(0, 1));
    m_ds.insert(newdna);
    std::cout << "[" << newdna.getID() << "] " << newdna.getDNA() << " " << newdna.getName() << std::endl;
    return 1;
}

