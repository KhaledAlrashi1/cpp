/*
1. Program: Bubble sort a vector of inegers given by the user ascendingly (or descendingly)
2. Original Idea (Credit): https://www.softwaretestinghelp.com/sorting-techniques-in-cpp/
3. Author: Khaled Alrashidi
4. Date: May 31, 2023
5. Description: The program asks the user to input a vector of integers outputs the sorted vector on the terminal. The program sorts 
the integer vector ascendingly (or descenedingly) using bubble sort algorithm.
*/


#include <iostream>
#include <vector>


int main() {
 
    // declare an integer-type vector and other necessary variables
    std::vector<int> v_input;
    int num_int, temp;
    int ascend_enable = 0;
    int swap_count=0;

    // ask the user to enter the number of integers
    std::cout << "Please enter the number integers: ";
    std::cin >> num_int;

    // ask the user to enter 'n' integers
    std::cout << "Please enter " << num_int << " integers: ";
    for(int i=0; i<num_int; ++i) {
        std::cin >> temp;
        v_input.push_back(temp);
    }

    // ask the user if they want the integers to be sorted ascendingly or descendingly
    std::cout << "Please enter 1 for ascending sort or enter 0 for decending sort: ";
    std::cin  >> ascend_enable;
    std::cout << std::endl;

    // output to the terminal the original vector (before sorting)
    std::cout << "The original input vector: ";
    for(int i=0; i<num_int; ++i){
        std::cout << v_input[i] << " ";
    } std::cout << std::endl << std::endl;

    // the bubble sort algorithm (ascend)
    if (ascend_enable == 1) {
        std::cout << "Ascending sort:" << std::endl;
        for(int i=0; i<num_int; ++i){
            for(int j=i+1; j<num_int; ++j){
                if(v_input[i] >= v_input[j]){
                    temp = v_input[j];
                    v_input[j] = v_input[i];
                    v_input[i] = temp;
                    swap_count+=1;
                }
            }
        }
    }
    // the bubble sort algorithm (descend)
    else if (ascend_enable == 0) {
        std::cout << "decending sort\n" << std::endl;
        for(int i=0; i<num_int; ++i){
            for(int j=i+1; j<num_int; ++j){
                if(v_input[i] <= v_input[j]){
                    temp = v_input[j];
                    v_input[j] = v_input[i];
                    v_input[i] = temp;
                    swap_count+=1;
                }
            }
        }
    }
    else {
        std::cout << "Error: Invalid Input" << std::endl;
        return -1; 
    }
    
    // output the vector (after sorting)
    std::cout << "The input vector after sorting: ";
    for(int i=0; i<num_int; ++i){
        std::cout << v_input[i] << " ";
    } std::cout << std::endl;

    // output the number of swaps
    std::cout << "Number of swaps: " << swap_count << std::endl << std::endl;

    return 0;
}