#include "lib.h"

void BasicCalculator(float a, float b, float &sum, float &diff, 
                     float &product, float &ratio){

    if(b == 0){
        ratio = 0;
        std::cout << "Error: divide by zero" << std::endl;
    }
    else{
        ratio = a / b; 
        std::cout << "No Error" << std::endl;
    }

    sum = a + b;
    diff = a - b;
    product = a * b;

}