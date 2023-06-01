/*
1. Program: Introduction to sets: basic set operations
2. Original Idea (Credit): https://www.geeksforgeeks.org/set-in-cpp-stl/
3. Author: Khaled Alrashidi
4. Date: May 31, 2023
5. Description: The program asks the user to input integers where the get stored inside a set.
It asks them to check if an integer exists in the set or not. It also asks to erase an integer (if exists)
*/

#include <iostream>
#include <set>

int main() {
    std::set<int> int_set;
    int num_int, temp;

    // the begining of the program
    std::cout << "\nHello! This program that does basic set operations ";
    std::cout << "Please note that a set stores only unqiue values\n" << std::endl;

    // ask the user to input the number of intgers they wish to have in the set
    std::cout << "Please enter the number of integers you wish to store in the set: ";
    std::cin >> num_int;

    // ask the user to in 'num_int' integers
    std::cout << "Please enter " << num_int << " integers: ";
    for(int i=0; i<num_int; ++i){
        std::cin >> temp;
        int_set.insert(temp);
    }

    // output the elements stored in the set
    std::cout << "\nPerfect! The elements in the set: ";
    for(auto &e : int_set){
        std::cout << e << " ";
    } std::cout << std::endl;
    

    // ask the user to check if an integer exists in the set
    std::cout << "\nCheck if an integer is in the set" << std::endl;
    std::cout << "Please enter the integer you wish to check: ";
    std::cin >> temp;
    // output to the terminal if the integer exists or not.
    if(int_set.count(temp)) std::cout << "The integer exists" << std::endl << std::endl;
    else std::cout << "The integer doesn't exist" << std::endl << std::endl;


    // ask the user to remove an integer from the set (if exist)
    std::cout << "Remove an integer fron the set (if exist)" << std::endl;
    std::cout << "Please enter the integer you wish to remove: ";
    std::cin >> temp;
    std::cout << std::endl;

    // remove the integer (if exist)
    if(int_set.count(temp)){
        int_set.erase(temp);
        std::cout << "Integer was removed" << std::endl;
        // output the elements stored in the set (after removing an elements)
        std::cout << "\nNow, the elements in the set: ";
        for(auto &e : int_set){
          std::cout << e << " ";
        } std::cout << std::endl << std::endl;
    }
    else std::cout << "Integer doesn't exist" << std::endl << std::endl;


    return 0;
}