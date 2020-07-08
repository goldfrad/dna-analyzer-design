#ifndef SRC_LOAD_H
#define SRC_LOAD_H

#include "fileReader.h"
#include "createDNA.h"

class Load: public CreateDNA{
public:
    virtual int run(std::vector<std::string>&);
};

#endif //SRC_LOAD_H
