#ifndef SRC_PARAMSTOCREATE_H
#define SRC_PARAMSTOCREATE_H

#include "../params.h"

class ParamsToCreate :public Params{
public:
    virtual bool chekParams(std::vector<std::string>&);
    virtual void paramProcessing(std::vector<std::string>&) = 0;

protected:
    std::string m_dnas = "";
    std::string m_name = "";
};


#endif //SRC_PARAMSTOCREATE_H
