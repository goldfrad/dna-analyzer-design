#include <sstream>
#include "find.h"

int Find::run(std::vector<std::string> &vecParmeter) {
    try {
        std::istringstream iss(vecParmeter[1].erase(0, 1));
        size_t id;
        iss >> id;
        long index = ICommand::m_ds.findByID(id).getDNA().find(vecParmeter[2]);

        if(-1 == index){
            std::cout << "not exist" << std::endl;
        }
        else{
            std::cout << index << std::endl;
        }
    }
    catch (const char* dnaExeption){
        std::cout << "Error \nplease try again" << std::endl;
    }

    return 1;
}