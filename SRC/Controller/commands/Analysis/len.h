#ifndef SRC_LEN_H
#define SRC_LEN_H

#include <sstream>
#include "analysis.h"

class Len :public Analysis{
public:
    virtual int run(std::vector<std::string>&);
};


#endif //SRC_LEN_H
