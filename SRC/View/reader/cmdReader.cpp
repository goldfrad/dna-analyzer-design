#include "cmdReader.h"

std::string CMDReader::read() {
    std::string messageline;
    getline (std::cin, messageline);
    return messageline;
}

