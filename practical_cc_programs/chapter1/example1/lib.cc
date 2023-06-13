#include "lib.h"


std::vector<int> Reversed(std::vector<int> vec){

    if(vec.empty()){
        std::cout << "The vector is empty" << std::endl;
        return {};
    }

    std::vector<int> reversed;
    for(int i=((vec.size())-1); i>-1; --i){
        reversed.push_back(vec[i]);
    }

    return reversed;
}