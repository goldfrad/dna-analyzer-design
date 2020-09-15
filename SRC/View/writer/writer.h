#ifndef SRC_IWRITER_H
#define SRC_IWRITER_H

#include <string>

class IWriter{
public:
    virtual void write(std::string& output) = 0;
};

#endif //SRC_IWRITER_H
