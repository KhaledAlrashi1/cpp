
#include <iostream>
#include <vector>

#include "MaxValue.h"


int main() {

    std::vector<int> input;
    int num_integers;
    int Max = 0;


    // ask the user how many integers they wish to enter
    std::cout << "How many intergers would you like to enter?: ";
    std::cin >> num_integers;

    // ask the user to enter num_integers integers
    std::cout << "Please enter " << num_integers << " integers: " << std::endl;
    
    // store the input integers in a vector called "input"
    for (int i=0; i<num_integers; ++i) {

        int element;
        std::cin >> element;
        input.push_back(element);

    }
    // assign the first element of the vector "input" to temp variable called "Max"
    Max = input[0];

    // compare each element in the vector to determine the largest integer
    for (int i=0; i<num_integers; ++i) {
        if(Max < input[i]) {
            Max = input[i];
        }
    }

    // output the user input to the console (or terminal)
    std::cout << "\nUser Input:";
    for (int i=0; i<num_integers; i++) {
        std::cout << input[i] << " ";

    }
    // output the largest integer to the console (or terminal)
    std::cout << std::endl; std::cout << std::endl;
    std::cout << "Largest interger: " << Max << std::endl;
    std::cout << std::endl;

}