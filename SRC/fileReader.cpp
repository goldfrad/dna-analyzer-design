#include <fstream>
#include "fileReader.h"

FileReader::FileReader(const std::string & name): m_nameFile(name) {}

std::string FileReader::read() {

    std::ifstream file("filedna.txt");
    std::string line;
    if (file.is_open()) {
        std::getline(file, line);
        file.close();
    }
    return line;
}
