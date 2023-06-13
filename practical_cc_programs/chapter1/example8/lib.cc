#include "lib.h"

bool ShiftItToTheMostLeft(const std::string &s, const std::string &target){
    std::string s_copy;
    char s_char;
    int s_size;
    s_size = s.size();
    s_copy = s;

    for(int i=0; i<s_size; ++i){
        s_char = s_copy[0];
        for(int j=1; j<s_size; ++j){
            s_copy[j-1] = s_copy[j];
        }
        s_copy[s_size-1] = s_char;
        if(s_copy == target){
            return true;
        }
    }
    return false;
}