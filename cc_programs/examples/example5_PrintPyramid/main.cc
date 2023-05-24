/*
1. Program: Print out half pyramids on the console
2. Original Idea (Credit): https://www.programiz.com/cpp-programming/examples/pyramid-pattern
3. Author: Khaled Alrashidi
4. Date: May 24, 2023
5. Description: The program asks the user to input the number of rows they wish and 
(based on that) prints out to the console a half pyramid and an its inverse version 
respectively.
*/

#include <iostream>


// declare a class (user-define data type) and define the two functions
class Pyramid{
public:
    void printRightHalf(int rows);
    void printInvertedHalf(int rows);

};


int main() {
    int rows;
    Pyramid Pyr1;

    // ask the user to input the number for rows
    std::cout << "Please, enter the number of rows: ";
    std::cin >> rows;

    // call both functions
    Pyr1.printRightHalf(rows);
    std::cout << "\n";
    Pyr1.printInvertedHalf(rows);
    std::cout << "\n";



    return 0;
}


// implementation of both functions

void Pyramid::printRightHalf(int rows) {
    for(int i=1; i<=rows; ++i) {
        for(int j=1; j<=i; ++j) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}

void Pyramid::printInvertedHalf(int rows) {
    for(int i=rows; i>=1; --i) {
        for(int j=1; j<=i; ++j) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}