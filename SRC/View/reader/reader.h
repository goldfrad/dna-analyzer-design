#ifndef SRC_READER_H
#define SRC_READER_H

#include <string>

class IReader{
public:
    virtual std::string read() = 0;
};

#endif //SRC_READER_H
