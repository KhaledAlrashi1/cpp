#include "MaxValue.h"

int maxValue(std::vector<int> input) {
    if (input.empty()) {
        // vector is empty
        std::cerr << "User didn't input anything";
        return -1;
    }

    int Max = input[0];
    for (auto element : input) {
        if(Max >= element) {
            Max = Max;
        }
        else
            Max = element;
    }


}