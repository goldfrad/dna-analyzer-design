#ifndef SRC_CMDREADER_H
#define SRC_CMDREADER_H

#include <iostream>
#include "reader.h"

class CMDReader: public IReader{
public:
    virtual std::string read();
};

#endif //SRC_CMDREADER_H
