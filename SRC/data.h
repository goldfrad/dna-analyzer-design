#ifndef SRC_DATA_H
#define SRC_DATA_H

#include "class_DNA.h"

typedef struct Data{
    static size_t m_next_id;
    DNASequence m_dnaseq;
    size_t m_id;
}Data;

#endif //SRC_DATA_H