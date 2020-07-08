#include "newDNA.h"

int New::run(std::vector<std::string>& vecParmeter) {
    try {
        Data newdna(vecParmeter[1], vecParmeter[2].erase(0, 1));
        m_ds.insert(newdna);
        std::cout << "[" << newdna.getID() << "] " << newdna.getDNA() << " " << newdna.getName() << std::endl;
    }
    catch (const char* dnaExeption){
        std::cout << "this DNA wasnt create \nplease try again" << std::endl;
    }
    return 1;
}

