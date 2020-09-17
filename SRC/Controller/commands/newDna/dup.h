#ifndef SRC_DUP_H
#define SRC_DUP_H

#include "createDNA.h"

class Dup: public CreateDNA{
public:
    virtual int run(std::vector<std::string>&);
};

#endif //SRC_DUP_H
