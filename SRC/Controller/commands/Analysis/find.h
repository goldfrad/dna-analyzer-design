#ifndef SRC_FIND_H
#define SRC_FIND_H

#include "analysis.h"

class Find :public Analysis{
public:
    virtual int run(std::vector<std::string>&);
};


#endif //SRC_FIND_H
