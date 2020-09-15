#ifndef SRC_FILEWRITER_H
#define SRC_FILEWRITER_H

#include <fstream>
#include "writer.h"

class FileWriter: public IWriter{
public:
    FileWriter(std::string& file);
    virtual void write(std::string& output);

private:
    std::string& m_filename;
};

#endif //SRC_FILEWRITER_H
