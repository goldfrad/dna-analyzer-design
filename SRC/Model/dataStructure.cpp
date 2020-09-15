#include "dataStructure.h"

void DataStructure::insert(Data& data) {
    m_idMap.insert({data.getID(), data});
    m_nameMap.insert({data.getName(), data});
}

Data& DataStructure::findByID(size_t id) {
    mapID::iterator itr = m_idMap.find(id);
    return itr->second;
}

Data& DataStructure::findByName(std::string& name) {
    mapName::iterator itr = m_nameMap.find(name);
    return itr->second;
}
