#ifndef SRC_DATA_H
#define SRC_DATA_H

#include "class_DNA.h"

class Data{
public:
    Data(std::string& dnaseq, std::string& name);
    DNASequence& getDNA();
    size_t getID();
    std::string& getName();
private:
    static size_t m_next_id;
    DNASequence m_dnaseq;
    size_t m_id;
    std::string m_name;
};

#endif //SRC_DATA_H
