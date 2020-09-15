#ifndef SRC_FILEREADER_H
#define SRC_FILEREADER_H

#include "reader.h"

class FileReader: public IReader{
public:
    FileReader(const std::string&);
    virtual std::string read();

private:
    const std::string& m_nameFile;
};

#endif //SRC_FILEREADER_H
