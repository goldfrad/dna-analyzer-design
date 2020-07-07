#include "parser.h"

std::vector<std::string> Parser::getAsList(std::string &line) {
    std::vector<std::string> array;
    std::stringstream ss(line);
    std::string temp;
    while (ss >> temp){
        array.push_back(temp);
    }
    return array;
}


