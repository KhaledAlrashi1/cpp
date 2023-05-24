/*
1. Program: Print out on the console the size of different data-type variables
2. Original Idea (Credit): https://www.programiz.com/cpp-programming/examples/sizeof-operator
3. Author: Khaled Alrashidi
4. Date: May 24, 2023
5. Description: The program uses the function sizeof() to determine the size of four 
different data-types and outputs their sizes on the console. It also asks the user to
input a value for each type. We do this to make a distinguish between the size of the
data-type variable and the value it stores.
*/

#include <iostream>
#include <cctype>


int main() {
    int Integer_var;
    char Character_var;
    double Double_var;
    float Float_var;
    
    // ask the user to enter a value for each data-type variable
    std::cout << "Please, enter an interger: ";
    std::cin  >> Integer_var;
    if(isalpha(Integer_var)) {
        std::cerr << "Invalid input. Only enter numbers" << std::endl;
        return -1;
    }

    std::cout << "Please, enter a character: ";
    std::cin  >> Character_var;
    if(isdigit(Character_var)) {
        std::cerr << "Invalid input. Only enter characters" << std::endl;
        return -1;
    }

    std::cout << "Please, enter a double-type number: ";
    std::cin  >> Double_var;
    if(isdigit(Double_var)) {
        std::cerr << "Invalid input. Only enter numbers" << std::endl;
        return -1;
    }

    std::cout << "Please, enter a float-type number: ";
    std::cin  >> Float_var;
    if(isdigit(Float_var)) {
        std::cerr << "Invalid input. Only enter numbers" << std::endl;
        return -1;
    }

    // print out each variable's size and the value it stores
    std::cout << "\nInteger_var has a value of: " << Integer_var << std::endl;
    std::cout << "Size of Integer_var: " << sizeof(Integer_var) << std::endl << std::endl;
    
    std::cout << "Character_var has a value of: " << Character_var << std::endl;
    std::cout << "Size of Character_var: " << sizeof(Character_var) << std::endl << std::endl;
    
    std::cout << "Double_var has a value of: " << Double_var << std::endl;
    std::cout << "Size of Double_var: " << sizeof(Double_var) << std::endl << std::endl;
    
    std::cout << "Float_var has a value of: " << Float_var << std::endl;
    std::cout << "Size of Float_var: " << sizeof(Float_var) << std::endl << std::endl;

    return 0;
}