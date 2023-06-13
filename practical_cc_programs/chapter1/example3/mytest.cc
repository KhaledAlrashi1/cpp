#include <iostream>

#include "lib.h"
#include "gtest/gtest.h"


//-----------------------------------------------------------------------------
// The function:
// Write a function that returns true if the input number was prime and false
// otherwise.

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

//-----------------------------------------------------------------------------
// Test cases:

TEST(IsPrimeTest, InvalidInput) {
  int input = 0;
  EXPECT_EQ(IsPrime(input), false);
}

TEST(IsPrimeTest, PrimeNumber) {
  int input = 11;
  EXPECT_EQ(IsPrime(input), true);
}

TEST(IsPrimeTest, divisibleNumber) {
  int input = 16;
  EXPECT_EQ(IsPrime(input), false);
}
