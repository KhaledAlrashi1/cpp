#include "lib.h"

int NumberOfWaysToClimbStairs(int n){
    
    std::vector<unsigned long long> ways = {};
    unsigned long long num_ways;

    ways.push_back(0);
    ways.push_back(1);
    ways.push_back(2);
    ways.push_back(4);

    if(n >= 45 || n < 0){
        //invalid input
        return -1;
    }
    else if(n == 0){
        return ways[0];
    }
    else if(n == 1){
        return ways[1];
    }
    else if(n == 2){
        return ways[2];
    }
    else if(n == 3){
        return ways[3];
    }
    else{
        for(int i=4; i<n+1; ++i){
            num_ways = ways[i-1] + ways[i-2] + ways[i-3];
            ways.push_back(num_ways);
        }
    }

    return num_ways;
}   
