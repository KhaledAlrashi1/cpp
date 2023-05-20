/*
Program: a basic C++ program that uses bazel
Author: Khaled Alrashidi
Date: May 20, 2023
Description: this is a basic C++ program that outputs strings to 
             the console. What makes it interesting is that it uses bazel to 
             build and run the program (check out its BUILD file)
*/

#include <iostream>

int main() {

    std::cout<<"\nHello World! This is Khaled's learning about C++"<<std::endl;
    std::cout<<"This is the first usage of bazel to run a C++ program!\n"<<std::endl;

    return 0;
    
}