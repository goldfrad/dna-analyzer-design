#include <fstream>
#include "fileReader.h"

std::string FileReader::read() {

    std::ifstream file("filedna.txt");
    std::string line;
    if (file.is_open()) {
        std::getline(file, line);
        file.close();
    }
    return line;
}
