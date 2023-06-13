#include <iostream>
#include <string>

#include "lib.h"
#include "gtest/gtest.h"


//-----------------------------------------------------------------------------
// The function:
// Return number of spaces for a given string
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

//-----------------------------------------------------------------------------
// Test cases:
TEST(ReturnNumberOfSpacesTest, SimpleCase) {
  std::string inputs = "Hello! This is Khaled";
  EXPECT_EQ(ReturnNumberOfSpaces(inputs), 3);
}

TEST(ReturnNumberOfSpacesTest, NoSpace) {
  std::string inputs = "ILearnAboutCPP";
  EXPECT_EQ(ReturnNumberOfSpaces(inputs), 0);
}

TEST(ReturnNumberOfSpacesTest, AllSpaces) {
  std::string inputs = "     ";
  EXPECT_EQ(ReturnNumberOfSpaces(inputs), 5);
}


