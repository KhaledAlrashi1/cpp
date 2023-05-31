/*
1. Program:
2. Original Idea (Credit): https://www.programiz.com/cpp-programming/vectors
3. Author: Khaled Alrashidi
4. Date: May 25, 2023
5. Description: The program
*/

#include <iostream>
#include <vector>


int main() {
 
    std::vector<int> v_input;
    int num_int, temp;
    int swap_count=0;

    std::cout << "Please enter the number integers: ";
    std::cin >> num_int;

    std::cout << "Please enter " << num_int << " integers: ";
    for(int i=0; i<num_int; ++i) {
        std::cin >> temp;
        v_input.push_back(temp);
    }

    std::cout << "The original input vector: ";
    for(int i=0; i<num_int; ++i){
        std::cout << v_input[i] << " ";
    } std::cout << std::endl;


    for(int i=0; i<num_int; ++i){
        for(int j=i+1; j<num_int; ++j){
            if(v_input[i] > v_input[j]){
                temp = v_input[j];
                v_input[j] = v_input[i];
                v_input[i] = temp;
                swap_count+=1;
            }
        }
    }

    std::cout << "The input vector after sorting (ascending): ";
    for(int i=0; i<num_int; ++i){
        std::cout << v_input[i] << " ";
    } std::cout << std::endl;

    std::cout << "Number of swaps: " << swap_count << std::endl << std::endl;

    return 0;
}