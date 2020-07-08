#include "dup.h"

int Dup::run(std::vector<std::string> &vecParmeter) {
    try {
        std::istringstream iss(vecParmeter[1].erase(0, 1));
        size_t id;
        iss >> id;
        std::string temp((ICommand::m_ds.findByID(id).getDNA()).getDNAData());
        Data newdna(temp, vecParmeter[2].erase(0, 1));
        ICommand::m_ds.insert(newdna);
        std::cout << "[" << newdna.getID() << "] " << newdna.getDNA() << " " << newdna.getName() << std::endl;
    }
    catch (const char* dnaExeption){
        std::cout << "this DNA wasnt create \nplease try again" << std::endl;
    }
    return 1;
}

