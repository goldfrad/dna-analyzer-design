#ifndef SRC_DATASTRUCTURE_H
#define SRC_DATASTRUCTURE_H

#include "data.h"
#include <map>

class DataStructure{
    void insert(Data);
    void insert(size_t, Data);
    void insert(std::string, Data);
private:
    std::map<size_t , Data> m_idMap;
    std::map<std::string , Data> m_nameMap;
};

#endif //SRC_DATASTRUCTURE_H
