/*
1. Program: basic vector operations
2. Original Idea (Credit): https://www.programiz.com/cpp-programming/vectors
3. Author: Khaled Alrashidi
4. Date: May 25, 2023
5. Description: The program declares and initilizes vectors as well as prints their contents on the terminal.
*/

#include <iostream>
#include <vector>


int main() {

  // declaring a vector
  std::vector<int> vec_int1;

  // initilizing vectors (there are two ways)
  // method one
  vec_int1 = {7,1,4,2};

  // or (we can declare and initialize a vector at the same time!)
  std::vector<int> vec_int2 {6, 9, 3, 5};

  // method two (we can declare and initilize vector as well as set its size)
  std::vector<int> vec_int3 (4, 9); // the vector is of size 4 and all its values are 9

  // output the contents of each vector on the terminal
  std::cout << "vec_int1's contents: ";
  for(int i=0; i<size(vec_int1); ++i){
    std::cout << vec_int1[i] << " ";
  } std::cout << std::endl;

  std::cout << "vec_int2's contents: ";
  for(int i=0; i<size(vec_int2); ++i){
    std::cout << vec_int2[i] << " ";
  } std::cout << std::endl;

  std::cout << "vec_int3's contents: ";
  for(int i=0; i<size(vec_int3); ++i){
    std::cout << vec_int3[i] << " ";
  } std::cout << std::endl;

  return 0;
}