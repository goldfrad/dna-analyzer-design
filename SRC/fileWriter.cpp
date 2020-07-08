#include "fileWriter.h"

FileWriter::FileWriter(std::string &file): m_filename(file) {}

void FileWriter::write(std::string &output) {
    std::ofstream file1(m_filename);
    file1.write(output.c_str(), output.size());
    file1.close();
}

