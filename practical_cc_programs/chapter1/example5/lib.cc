#include "lib.h"

std::vector<int> Convert3DTo1DVector(
    std::vector<std::vector<std::vector<int>>> Vec){
        std::vector<int> D1Vector = {};
        for(auto e1 : Vec){
            for(auto e2 : e1){
                for(auto e3: e2){
                    D1Vector.push_back(e3);
                }
            }
        }
        if(D1Vector.empty()){
            return {};
        }
        return D1Vector; 
    }