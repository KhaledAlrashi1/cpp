#include "lib.h"

bool IsPrime(int number){

    if((number==2)|| (number==3)|| (number==5)|| (number==7)){
        //std::cout << "number: " << number << " is prime" << std::endl;
        return true;
    }
    else if(number <= 1){
        // Invild input
        //std::cout << "number: " << number << " is invalid input" <<std::endl;
        return false;
    }
    else if(!(number % 2)){
        //std::cout << "number: " << number << " is divisible" << std::endl;
        return false;
    }
    else if(!(number % 3)){
        //std::cout << "number: " << number << " is divisible" << std::endl;
        return false;
    }
    else if(!(number % 5)){
        //std::cout << "number: " << number << " is divisible" << std::endl;
        return false;
    }
    else if(!(number % 7)){
        //std::cout << "number: " << number << " is divisible" << std::endl;
        return false;
    }
    else{
        //std::cout << "number: " << number << " is prime" << std::endl;
        return true;

    }
}

