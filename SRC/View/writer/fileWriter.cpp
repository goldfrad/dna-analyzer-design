#include "fileWriter.h"

FileWriter::FileWriter(std::string &file): m_filename(file) {}

void FileWriter::write(std::string &output) {
    std::ofstream file;
    file.open(m_filename.c_str());
    file.write(output.c_str(), output.size());
    file.close();
}

