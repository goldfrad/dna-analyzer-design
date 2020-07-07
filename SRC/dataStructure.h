#ifndef SRC_DATASTRUCTURE_H
#define SRC_DATASTRUCTURE_H

#include "data.h"
#include <map>


class DataStructure{
public:
    typedef std::map<size_t , Data> mapID;
    typedef std::map<std::string , Data> mapName;
    void insert(Data& data);

private:
    mapID m_idMap;
    mapName m_nameMap;
};

#endif //SRC_DATASTRUCTURE_H
