#ifndef DNAP_APLICATIONDNA_H
#define DNAP_APLICATIONDNA_H

#include <iostream>
#include <string>
#include "factoryCommand.h"

class AplicationDNA{
public:
    void start();

private:
    ICommand* m_nowCommand;
};
#endif //DNAP_APLICATIONDNA_H
