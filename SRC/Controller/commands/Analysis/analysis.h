#ifndef SRC_ANALYSIS_H
#define SRC_ANALYSIS_H

#include "../command.h"

class Analysis:  public ICommand{
virtual int run(std::vector<std::string>&) = 0;
};


#endif //SRC_ANALYSIS_H
