/*
Program: output strings to the console or terminal
Author: Khaled Alrashidi
Date: May 19, 2023
Description: This is a simple C++ program that output a string to the console or terminal. While the program is simple, I'll explain
every thing we see for the first time.
*/

// The line below is a preprossesor command that tells the preprocessor to include a header file called "iostream"
#include <iostream>

/* 
Very Important:

Namespaces are a way in C++ to group identifiers (like classes, objects, variables, functions, etc.) under a name. 
This is essentially a way to avoid name conflicts, because the same identifier can be used in different namespaces without 
creating a conflict.

If you don't use the "using namespace std"; directive, then when you want to refer to something from the std namespace 
(like cout or cin), you would have to prepend std:: to it. For example, you'd have to write std::cout and std::cin.

For small programs and learning purposes, using "using namespace std"; is fine. However, in large codebases and in real projects, 
it is generally a good idea to avoid this declaration and to instead explicitly use the std:: prefix when you need to use something 
from the C++ Standard Library. This practice is encouraged because it makes clear where different identifiers are coming from, 
which can help prevent name clashes and make the code easier to understand and debug.
*/

// The line below tells the compiler to use the std (standard) namespace. 
using namespace std;

/* 
The int main() {} is the main function in a C++ program. It is the entry point of any C++ program. When you run your C++ code,
execution begins at the main function.
*/
int main() {

/* 
1. "cout" is an object of the ostream class in the standard library, and it represents the standard output stream 
(usually the terminal  or console screen).

2. "<<"" is the insertion operator, and in this context, it's used to insert the given string into the standard output stream.

3. "Congratulations! You wrote your first program\n" is the string that's being inserted into the output stream. 

4. int: This is the return type of the function. For main, it's typically int, which stands for integer. This means that the function 
will return an integer value when it finishes executing. By convention, a return value of 0 indicates that the program has run 
successfully.

5. The \n at the end of the string is an escape sequence that represents a newline character, which will cause the cursor 
to move to  the next line after the string is printed.
*/

    cout<<"Congratulations! You wrote your first program\n";

    return 0;
}