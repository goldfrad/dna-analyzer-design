#ifndef DNAP_CREATEDNA_H
#define DNAP_CREATEDNA_H

#include "command.h"

class CreateDNA: public ICommand{
    virtual int run() = 0;
};

#endif //DNAP_CREATEDNA_H
