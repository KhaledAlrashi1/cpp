/*
1. Program: a baisc introduction to pointers
2. Original Idea (Credit): Recieved some help from ChatGPT 4
3. Author: Khaled Alrashidi
4. Date: June 11, 2023
5. Description: The program declares, initiliazes, manipulates pointers. It also uses pre-define methods
that are useful. 
*/

int main(){

    // There are two ways to get/declare a pointer

    // 1) by assigning to it the address of an already define variable
    int i=0;
    int* pointer1 = &i; // pointer1 is pointing to a valid memory location
    (*pointer1)++; // valid operation

    // b. pointer1++ // invalid operation as makes the pointer to point to the next memory location
    // doing this and deferencing the stored value will cause an undefined behavior. 

    // 2) by using the "new" operator
    int* pointer2 = new int; // valid memory location
    *pointer2 = 1; // valid operation
    (*pointer2)++; // valid operation

    // invalid case
    // int* pointer3 = nullptr; // invalid memory location 
    // and doing this "(*pointer3)++;" would causes a crash!

    // Pointers: new and delete
    // a. Pointers can use dynamic memory (heap)
    // b. If you use the new operator, you must use the delete operator.
    // Otherwise, you'd have something called "memory leak"

    // Be Careful with Pointers! Undefined Behavior!!
    // 1. When should we use them?
    //     - Try to avoid them if you can (If you can, use STL containers instead).
    //     - Use them when you need dynamic memory allocation.
    //     - For pass-by-reference, you should prefer C++ references.

    // 2. In what ways a pointer can be misused?
    // Creating undefined behavior when dereferencing a pointer pointing to an invalid 
    // location in the memory:
    //      - An uninitialized pointer
    //      - A null pointer
    //      - A pointer pointing to a location in the memory that doesn’t exist.
    //      - A pointer that is already deleted (don’t delete a pointer twice!)
    // 3. Memory leak:
    //      - Happens when you forget to delete a pointer.


    return 0;
}