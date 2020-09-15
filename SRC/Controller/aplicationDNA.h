#ifndef DNAP_APLICATIONDNA_H
#define DNAP_APLICATIONDNA_H

#include <iostream>
#include "factoryCommand.h"
#include "../View/parser.h"

class AplicationDNA{
public:
    void start();

private:
    ICommand* m_nowCommand;
};
#endif //DNAP_APLICATIONDNA_H
