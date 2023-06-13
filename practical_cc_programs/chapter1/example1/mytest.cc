#include <iostream>

#include "gtest/gtest.h"
#include "lib.h"

// The function:
// Given a vector, return its reversed version.
std::vector<int> Reversed(std::vector<int> vec){
    if(vec.empty()){
        std::cout << "Vector's empty" << std::endl;
        return {-1};
    }
    std::vector<int> reversed;
    for(int i=((vec.size()-1)); i>-1; --i){
        reversed.push_back(vec[i]);
    }
    return reversed;
}

//-----------------------------------------------------------------------------
// Test cases:

TEST(ReversedTest, SimpleCase) {
  std::vector<int> input = {1, 2, 3, 4};
  std::vector<int> expected = {4, 3, 2, 1};

  EXPECT_EQ(Reversed(input), expected);
}

TEST(ReversedTest, EmptyVector) {
  std::vector<int> input = {};
  std::vector<int> expected = {-1};
  EXPECT_EQ(Reversed(input), expected);
}

TEST(ReversedTest, OneValueVector) {
  std::vector<int> input = {4};
  std::vector<int> expected = {4};
  EXPECT_EQ(Reversed(input), expected);
}