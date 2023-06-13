#include <iostream>
#include <string>

#include "lib.h"
#include "gtest/gtest.h"


//-----------------------------------------------------------------------------
// The function:
// shifts the first chartacter in a given string to the most left. If the given 
// string matches with the target string, return true. otherwise return false
bool ShiftItToTheMostLeft(const std::string &s, const std::string &target){
    std::string s_copy;
    char s_char;
    int s_size;
    s_size = s.size();
    s_copy = s;

    for(int i=0; i<s_size; ++i){
        s_char = s_copy[0];
        for(int j=1; j<s_size; ++j){
            s_copy[j-1] = s_copy[j];
        }
        s_copy[s_size-1] = s_char;
        if(s_copy == target){
            return true;
        }
    }
    return false;
}

//-----------------------------------------------------------------------------
// Test cases: 
TEST(ShiftItToTheMostLeftTest, SimpleCase1) {
    std::string input = "abcde";   
    std::string goal = "bcdea";
    std::string goal1 = "cdeab";  
    std::string goal2 = "deabc";    
    std::string goal3 = "eabcd";   

    bool expect = true;

    EXPECT_EQ(ShiftItToTheMostLeft(input, goal), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal1), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal2), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal3), expect);
}

TEST(ShiftItToTheMostLeftTest, SimpleCase2) {
    std::string input = "abcde";   
    std::string goal = "bdcea";
    std::string goal1 = "ecdab";  
    std::string goal2 = "aaaaa";    
    std::string goal3 = "amdle";   

    bool expect = false;

    EXPECT_EQ(ShiftItToTheMostLeft(input, goal), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal1), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal2), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal3), expect);
}

TEST(ShiftItToTheMostLeftTest, SimpleCase3) {
    std::string input = "abcde";   
    std::string goal = " ";
    std::string goal1 = "124";  
    std::string goal2 = "////";    
    std::string goal3 = "][per]";   

    bool expect = false;

    EXPECT_EQ(ShiftItToTheMostLeft(input, goal), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal1), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal2), expect);
    EXPECT_EQ(ShiftItToTheMostLeft(input, goal3), expect);
}