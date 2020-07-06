#include "aplicationDNA.h"

void AplicationDNA::start() {
    int f = 4;
    FactoryCommand factory;
    while(f){
        std::string messageVar;
        std::cout << "< cmd <<< ";
        getline (std::cin, messageVar);
        m_nowCommand = factory.getCommand(messageVar);
        if(m_nowCommand){
            std::cout << m_nowCommand->run() << std::endl;
        }
        else{
            std::cout << "this command not found" << std::endl;
        }
        f--;
    }
}

