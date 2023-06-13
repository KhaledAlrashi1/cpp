#include <iostream>

#include "lib.h"
#include "gtest/gtest.h"


//-----------------------------------------------------------------------------
// The function:
// return the sum, difference, product, and ratio of a given two inputs a & b
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

//-----------------------------------------------------------------------------
// Test cases:
TEST(BasicCalculatorTest, SimpleCase1) {
    float a=3, b=2, sum=0, diff=0, product=0, ratio=0;
    BasicCalculator(a, b, sum, diff, product, ratio);

    EXPECT_FLOAT_EQ(sum, 5);
    EXPECT_FLOAT_EQ(diff, 1);
    EXPECT_FLOAT_EQ(product, 6);
    EXPECT_FLOAT_EQ(ratio, 1.5);
}

TEST(BasicCalculatorTest, SimpleCase2) {
    float a=21, b=3, sum=0, diff=0, product=0, ratio=0;
    BasicCalculator(a, b, sum, diff, product, ratio);

    EXPECT_FLOAT_EQ(sum, 24);
    EXPECT_FLOAT_EQ(diff, 18);
    EXPECT_FLOAT_EQ(product, 63);
    EXPECT_FLOAT_EQ(ratio, 7);
}

TEST(BasicCalculatorTest, SimpleCase3) {
    float a=-7, b=-4, sum=0, diff=0, product=0, ratio=0;
    BasicCalculator(a, b, sum, diff, product, ratio);

    EXPECT_FLOAT_EQ(sum, -11);
    EXPECT_FLOAT_EQ(diff, -3);
    EXPECT_FLOAT_EQ(product, 28);
    EXPECT_FLOAT_EQ(ratio, 1.75);
}

TEST(BasicCalculatorTest, SimpleCase4) {
    float a=-9, b=9, sum=0, diff=0, product=0, ratio=0;
    BasicCalculator(a, b, sum, diff, product, ratio);

    EXPECT_FLOAT_EQ(sum, 0);
    EXPECT_FLOAT_EQ(diff, -18);
    EXPECT_FLOAT_EQ(product, -81);
    EXPECT_FLOAT_EQ(ratio, -1);
}

TEST(BasicCalculatorTest, InvalidInput) {
    float a=5, b=0, sum=0, diff=0, product=0, ratio=0;
    BasicCalculator(a, b, sum, diff, product, ratio);

    EXPECT_FLOAT_EQ(sum, 5);
    EXPECT_FLOAT_EQ(diff, 5);
    EXPECT_FLOAT_EQ(product, 0);
    EXPECT_FLOAT_EQ(ratio, 0);
}



