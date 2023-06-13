#include <iostream>
#include <vector>

#include "lib.h"
#include "gtest/gtest.h"

//-----------------------------------------------------------------------------
// The function:
// Convert a 3D vector to a 1D vector
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

//-----------------------------------------------------------------------------
// Test cases:
TEST(Convert3DTo1DVectorTest, SimpleCase) {
    std::vector<std::vector<std::vector<int>>> inputs;
    std::vector<int> expected;
    inputs.push_back({{1, 1}, {2, 2}});
    inputs.push_back({{3, 3}, {4, 4}});
    inputs.push_back({{5, 5}, {6, 6}});
    expected = {1,1,2,2,3,3,4,4,5,5,6,6};

    EXPECT_EQ(Convert3DTo1DVector(inputs), expected);
}

TEST(Convert3DTo1DVectorTest, Empty3DVector) {
    std::vector<std::vector<std::vector<int>>> inputs = {{{}}};
    std::vector<int> expected = {};

    EXPECT_EQ(Convert3DTo1DVector(inputs), expected);
} 