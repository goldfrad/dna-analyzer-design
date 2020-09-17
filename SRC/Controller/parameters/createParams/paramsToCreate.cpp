#include "paramsToCreate.h"

bool ParamsToCreate::chekParams(std::vector<std::string>& vecParams) {
    switch (vecParams.size()){
        case 2:
            return true;

        case 3:
            if (vecParams[2].length() > 1 && vecParams[2][0] == '@'){
                vecParams[2].erase(0, 1);
                return true;
            }

            return false;

        default:
            return false;
    }
}