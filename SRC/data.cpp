#include "data.h"

size_t Data::m_next_id = 0;

Data::Data(std::string &dnaseq, std::string &name): m_dnaseq(dnaseq) {
    m_id = ++m_next_id;
    m_name = name;
}

DNASequence& Data::getDNA() {
    return m_dnaseq;
}

size_t Data::getID() {
    return m_id;
}

std::string& Data::getName() {
    return m_name;
}