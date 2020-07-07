#ifndef SRC_CMDWRITER_H
#define SRC_CMDWRITER_H

#include "writer.h"
#include <iostream>

class CMDWriter: public IWriter{
public:
    virtual void write(std::string& output);
};

#endif //SRC_CMDWRITER_H
