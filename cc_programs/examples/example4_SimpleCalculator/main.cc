/* 
Program: basic calculator
Author: Khaled Alrashidi 
Data: May 24, 2023
Description: the program can take two operands and perfrom operations, such as 
addition, subtraction, division, and mulitplication. it asks the user to input the type
of operation and the two operands. 
*/

#include <iostream>

/* 
- In this program, we used a user-define data type (class) that could contain data members
(variables) and member functions (methods). 

- Classes are the main feature of C++ that leads to Object-Oriented Programming (OOP).

- This specific class has four member functions and inside it is the function declaration
*/
class basicCalculator {
public:
    double addition(double operand1, double operand2);
    double subtraction(double operand1, double operand2);
    double multiplication(double operand1, double operand2);
    double division(double operand1, double operand2);
};

int main() {
    // an instance of the class "basicCalculator"
    basicCalculator cal;

    double operand1, operand2;
    int operation;
    // User menu (have the user choose the operation type)
    std::cout << "\nEnter 1 for addition\n";
    std::cout << "Enter 2 for subtraction\n";
    std::cout << "Enter 3 for multiplication\n";
    std::cout << "Enter 4 for division\n";
    std::cout << "Please enter the type of operation: ";
    std::cin >> operation;

    // checking if the user inputs an invalid operation arugment
    if ((operation != 1) && (operation != 2) && (operation != 3) && (operation != 4)) {
        std::cerr << "\nInvalid input: ";
        std::cout << "please refer to the user menu provided\n";
        return -1;
    }

    // have the user enter the two operands
    std::cout << "\nPlease enter operand 1: ";
    std::cin >> operand1;
    std::cout << "Please enter operand 2: ";
    std::cin >> operand2;
    
    // checking if the user inputs an invalid input (division by zero)
    if (operation == 4 && operand2 == 0) {
        std::cerr << "\nInvalid input: ";
        std::cout << "division by zero is undefined\n";
        return -1;
    }

    double result;
    switch(operation) {
        case 1:
            result = cal.addition(operand1, operand2);
            break;
        case 2:
            result = cal.subtraction(operand1, operand2);
            break;
        case 3:
            result = cal.multiplication(operand1, operand2);
            break;
        case 4:
            result = cal.division(operand1, operand2);
            break;
        default:
            std::cerr << "Invalid input.\n";
            return -1;
        }
    
    std::cout << "Result: " << result << std::endl;
    return 0;
}


// Here, we implement the four functions 
double basicCalculator::addition(double operand1, double operand2) {
    return operand1 + operand2;
    }
double basicCalculator::subtraction(double operand1, double operand2) {
    return operand1 - operand2;
    }
double basicCalculator::multiplication(double operand1, double operand2) {
    return operand1 * operand2;
    }
double basicCalculator::division(double operand1, double operand2) {

    return (operand1) / operand2;
    }