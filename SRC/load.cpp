#include "load.h"

int Load::run(std::vector<std::string> &vecParmeter) {
    try {
        FileReader file(vecParmeter[1]);
        std::string dna = file.read();
        Data newdna(dna, vecParmeter[2].erase(0, 1));
        ICommand::m_ds.insert(newdna);
        std::cout << "[" << newdna.getID() << "] " << newdna.getDNA() << " " << newdna.getName() << std::endl;
    }
    catch (const char* dnaExeption){
        std::cout << "this DNA wasnt create \nplease try again" << std::endl;
    }
    return 1;
}