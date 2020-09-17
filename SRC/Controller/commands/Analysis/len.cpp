#include "len.h"

int Len::run(std::vector<std::string> &vecParmeter) {
    try {
        std::istringstream iss(vecParmeter[1].erase(0, 1));
        size_t id;
        iss >> id;
        size_t len = ICommand::m_ds.findByID(id).getDNA().length();
        std::cout << len << std::endl;
    }
    catch (const char* dnaExeption){
        std::cout << "Error \nplease try again" << std::endl;
    }
    return 1;
}