#ifndef SRC_FILEREADER_H
#define SRC_FILEREADER_H

#include "reader.h"

class FileReader: public IReader{
public:
    virtual std::string read();
};

#endif //SRC_FILEREADER_H
