#include "class_DNA.h"

void isValid(const char c){
    try {
        if((c != 'A' && c != 'C' && c != 'G' && c != 'T'))
            throw "INVALID DNA";
    }
    catch (const char *dnaExeption){
        std::cout << dnaExeption << std::endl;
        throw;
    }
}

DNASequence::DNASequence(const char* dnaString) : m_dnaString(InitDNA(dnaString)){}

DNASequence::DNASequence(const std::string &dnaString) :m_dnaString(InitDNA(dnaString.c_str())){}

DNASequence::DNASequence(const DNASequence &dnaString): m_dnaString(InitDNA((const char *)dnaString.m_dnaString)){}

DNASequence::DNASequence(size_t size) {
    m_dnaString = new Nucleotide[size];
}

DNASequence& DNASequence::operator=(DNASequence &dnaString) {
    if(!(this == &dnaString))
    {
        delete[] m_dnaString;
        char* temp = strcpy(new char [ strlen(dnaString.getDNAData())+1], dnaString.getDNAData());
        m_dnaString = (Nucleotide*)temp;
    }
    return *this;
}

DNASequence::Nucleotide* DNASequence::InitDNA(const char *dnaString) {
    try {
        if (strlen(dnaString) == 0){
            throw "empty DNA";
        }
    }
    catch (const char *dnaExeption) {
        std::cout << dnaExeption << std::endl;
    }

    for (size_t i = 0; i < strlen(dnaString); ++i) {
        isValid(dnaString[i]);
    }

    char* temp = strcpy(new char [ strlen(dnaString)+1], dnaString);
    Nucleotide* newDNA = (Nucleotide*)temp;
    return newDNA;
}

size_t DNASequence::length() {
    return strlen((char *)m_dnaString);
}

const char * DNASequence::getDNAData() const {
    return (const char *)m_dnaString;
}

DNASequence::Nucleotide& DNASequence::operator[](size_t index) {
    try {
        if (index >= length())
            throw "INVALID INDEX";
    }
    catch (const char* indexExeption){
        std::cout << indexExeption << std::endl;
    }
    return m_dnaString[index];
}

DNASequence DNASequence::slice(size_t start, size_t stop) {
    try {
        if(start >= length() || start > stop || stop > length() )
            throw "INVALID INDEX";
    }
    catch (const char* indexExeption){
        std::cout << indexExeption << std::endl;
    }

    DNASequence sliceDNA(stop - start + 1);
    for (size_t i = start, j = 0; i <= stop; i++, j++){
        sliceDNA.m_dnaString[j] = m_dnaString[i];
    }
    return sliceDNA;
}

DNASequence DNASequence::pairing() {
    DNASequence pairDNA(length());
    for(size_t i = 0; i < length(); i++){
        switch(m_dnaString[i]){
            case 'A':
                pairDNA.m_dnaString[i] = 'T';
                break;
            case 'T':
                pairDNA.m_dnaString[i] = 'A';
                break;
            case 'C':
                pairDNA.m_dnaString[i] = 'G';
                break;
            case 'G':
                pairDNA.m_dnaString[i] = 'C';
        }
    }
    return pairDNA;
}

long DNASequence::find(const DNASequence &subDNA, size_t index) {
    const char * temp =  strstr(getDNAData() + index, subDNA.getDNAData());
    if(!temp){
        return -1;
    }
    return temp - getDNAData();
}

size_t DNASequence::count(const DNASequence &subDna) {
    size_t countSubDna = 0;
    long index = find(subDna, 0);

    while(-1 != index){
        ++countSubDna;
        index = find(subDna, index + 1);
    }

    return countSubDna;
}

std::vector<size_t> DNASequence::findAll(const DNASequence &subDna) {
    std::vector<size_t> indexVector;
    long index = find(subDna, 0);

    while(-1 != index){
        indexVector.push_back(index);
        index = find(subDna, index + 1);
    }

    return indexVector;
}

std::ostream& operator<<(std::ostream& os, const DNASequence &dnaString){
    if(os)
        os << dnaString.getDNAData();
    return os;
}

bool operator==(const DNASequence &dnaSequence1, const DNASequence &dnaSequence2) {
    if (dnaSequence1.getDNAData() - dnaSequence2.getDNAData())
        return false;
    return true;
}

bool operator!=(DNASequence &dnaSequence1, DNASequence &dnaSequence2) {
    return !(dnaSequence1 == dnaSequence2);
}

const DNASequence::Nucleotide& DNASequence::Nucleotide::operator=(const Nucleotide& c) {
    isValid(c.m_c);
    m_c = c.m_c;
    return c;
}

DNASequence::Nucleotide::operator char() {
    return m_c;
}
