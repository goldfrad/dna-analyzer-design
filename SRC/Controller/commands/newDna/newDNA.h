#ifndef DNAP_NEWDNA_H
#define DNAP_NEWDNA_H

#include "createDNA.h"

class New: public CreateDNA{
public:
    virtual int run(std::vector<std::string>& vecParmeter);
};

#endif //DNAP_NEWDNA_H
