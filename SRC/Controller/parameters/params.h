#ifndef SRC_PARAMS_H
#define SRC_PARAMS_H

#include <string>
#include <vector>

class Params {
public:
    virtual bool chekParams(std::vector<std::string>&) = 0;
    virtual void paramProcessing(std::vector<std::string>&) = 0;
};


#endif //SRC_PARAMS_H
