#include "lib.h"

int ReturnNumberOfSpaces(std::string s){
    int string_length = s.length();
    int num_spaces = 0;
    for(int i=0; i<string_length; ++i){
        if(s[i] == ' '){
            num_spaces+=1;
        }
    }
    return num_spaces;
}