#include "lib.h"


// Given a positive integer represented by an array of digits, add one to that
// number.
std::vector<int> AddOne(std::vector<int> vec){
    if(vec.empty()){
        std::cout << "Vector's empty" << std::endl;
        return {};
    }
    int v_size = vec.size();
    int counter = 0;
    for(int i=0; i<v_size; ++i){
        if(vec[i] > 9){
            return {-1};
        }
    }

    for(int i=(v_size-1); i>-1; --i){
        if(vec[i] < 9){
            vec[i] +=1;
            break;
        }
        else{
            counter+=1;
            if(counter==v_size){
                for(int i=0; i<v_size; ++i){
                    vec.pop_back();
                }
                vec.push_back(1);
                for(int i=0; i<v_size; ++i){
                    vec.push_back(0);
                }
                v_size+=1;
                break;
            }
            vec[i] = 0;
        }
    }
    return vec;
}

