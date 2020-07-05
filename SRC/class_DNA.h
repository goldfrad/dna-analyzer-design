#ifndef CLASS_DNA_H
#define CLASS_DNA_H

#include <iostream>
#include <string.h>
#include <vector>

class DNASequence{
private:
    class Nucleotide
    {
    public:
        Nucleotide(){}

        Nucleotide(char c): m_c(c){}
        const Nucleotide& operator=(const Nucleotide& c);
        char getNucleotide(){ return m_c;}
        operator char ();

    private:
        char m_c;
    };

    Nucleotide* m_dnaString;

public:
    DNASequence(const char* dnaString);
    DNASequence(const std::string &dnaString);
    DNASequence(const DNASequence &dnaString);
    DNASequence(size_t size);
    DNASequence& operator = (DNASequence &dnaString);
    Nucleotide* InitDNA(const char* dnaString);
    size_t length();
    const char * getDNAData() const;
    Nucleotide& operator[](size_t index);
    DNASequence slice(size_t start, size_t stop);
    DNASequence pairing();

    long find(const DNASequence &subDNA, size_t index = 0);
    size_t count(const DNASequence& subDna);
    std::vector<size_t> findAll(const DNASequence& subDna);
    friend std::ostream& operator<<(std::ostream& os, const DNASequence &dnaString);
    ~DNASequence(){delete[] m_dnaString;}
};

bool operator == (const DNASequence &dnaString1, const DNASequence &dnaString2);
bool operator != (DNASequence &dnaString1, DNASequence &dnaString2);

#endif
