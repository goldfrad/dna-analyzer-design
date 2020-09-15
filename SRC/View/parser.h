#ifndef SRC_PARSER_H
#define SRC_PARSER_H

#include <string>
#include <vector>
#include <sstream>

class Parser{
public:
    static std::vector<std::string> getAsList(std::string& str);
};

#endif //SRC_PARSER_H
