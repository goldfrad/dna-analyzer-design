#include <fstream>
#include "fileReader.h"

FileReader::FileReader(const std::string & name): m_nameFile(name) {}

std::string FileReader::read() {

    std::ifstream file;
    std::string line;
    file.open(m_nameFile.c_str());
    std::getline(file, line);
    file.close();
    return line;
}
