#include "class_DNA.h"

int main() {
    std::cout << "class DNA" << std::endl;

    DNASequence dna1("AGACTTTG");
    std::cout << "len need be 8: " << dna1.length() << std::endl;
    std::string str("GGAGCAATGTG");
    DNASequence dna2(str);
    std::cout << "len need be 11: " << dna2.length() << std::endl;
    DNASequence dna3(dna1);
    std::cout << "char need be G: " << dna2[1].getNucleotide() << std::endl;
    std::cout << "dna need be \"GGAGCAATGTG\": " << dna2 << std::endl;
    dna1 = dna2;
    std::cout << dna2.slice(2, 7) << std::endl;
    std::cout << dna2.pairing() << std::endl;
    std::cout << dna2.count( "TG") << std::endl;
    std::vector<size_t> vec = dna2.findAll("TG");
    for (size_t i = 0; i < vec.size(); ++i){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "len need be 11: " << dna1.length() << std::endl;

    DNASequence invalidDNA("AAAy");
    std::cout << invalidDNA << std::endl;

    return 0;
}