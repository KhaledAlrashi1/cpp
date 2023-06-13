#include <iostream>

#include "gtest/gtest.h"
#include "lib.h"


//-----------------------------------------------------------------------------
// The function:
// Given a positive integer represented by an array of digits, add one to that
// number.
std::vector<int> AddOne(std::vector<int> vec){
    if(vec.empty()){
        std::cout << "Vector's empty" << std::endl;
        return {-1};
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

//-----------------------------------------------------------------------------
// Test cases:

TEST(AddOneTest, LessThanNine) {
  std::vector<int> inputs = {1, 2, 3, 4};
  std::vector<int> expected = {1, 2, 3, 5};

  EXPECT_EQ(AddOne(inputs), expected);
}

TEST(AddOneTest, GreaterThanNine) {
  std::vector<int> inputs = {1, 12, 4, 6};
  std::vector<int> expected = {-1};

  EXPECT_EQ(AddOne(inputs), expected);
}

TEST(AddOneTest, EqualToNine) {
  std::vector<int> inputs = {1, 8, 9};
  std::vector<int> expected = {1, 9,0};

  EXPECT_EQ(AddOne(inputs), expected);
}

TEST(AddOneTest, AllNines) {
  std::vector<int> inputs = {9, 9, 9};
  std::vector<int> expected = {1, 0, 0, 0};

  EXPECT_EQ(AddOne(inputs), expected);
}

TEST(AddOneTest, OneValueVector) {
  std::vector<int> inputs = {1};
  std::vector<int> expected = {2};

  EXPECT_EQ(AddOne(inputs), expected);
}
 
TEST(AddOneTest, EmptyVector) {
  std::vector<int> inputs = {};
  std::vector<int> expected = {-1};

  EXPECT_EQ(AddOne(inputs), expected);
}
