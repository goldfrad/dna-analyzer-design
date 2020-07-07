#include "dataStructure.h"

void DataStructure::insert(Data& data) {
    m_idMap.insert(std::pair<size_t, Data>(data.getID(), data));
    m_nameMap.insert(std::pair<std::string, Data>(data.getName(), data));
}


