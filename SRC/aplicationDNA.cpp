#include "aplicationDNA.h"

void AplicationDNA::start() {
    int f = 4;
    FactoryCommand factory;
    while(f){
        std::string messageVar;
        std::cout << "< cmd <<< ";
        getline (std::cin, messageVar);
        std::vector<std::string> massageVec = Parser::getAsList(messageVar);

        m_nowCommand = factory.getCommand(massageVec.front());
        if(m_nowCommand){
            m_nowCommand->run(massageVec);
        }
        else{
            std::cout << "'" << massageVec.front() << "' command not found" << std::endl;
        }
        f--;
    }
}

