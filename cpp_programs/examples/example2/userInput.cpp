/*
Program: gets inputs from the user and outputs them on the console or terminal 
Author: Khaled Alrashidi
Data: May 19, 2023

Description: This is a simple C++ program that asks the user to input information. After that, the program outputs them 
on the console or terminal
*/

#include <iostream>
using namespace std;

int main() {
    /*
    1. string is a datatype provided by the Standard Template Library (STL) in C++. It's used to store and manipulate sequences 
    of characters, which are commonly known as strings.

    2. the line below declares two variable of type string, first_name and last_name. These variables can then be used to store and 
    manipulate strings of characters.
    */

    // Recall you can decleare the two variables this way because you're using a std namespace
    // The formal way would be: <std::string first_name, last_name;>
    string first_name, last_name, age, school, school_major;

    // This line outputs the given string
    cout<<"for the following questions, please enter one word\n";
    cout<<"Enter your first name here: ";
    // This line waits for the user to input information and stores in the given variable
    cin>>first_name;

    cout<<"Enter your last name here: ";
    cin>>last_name;

    cout<<"Enter your age here: ";
    cin>>age;

    cout<<"Enter your current school here: ";
    cin>>school;

    cout<<"Enter your school major here: ";
    cin>>school_major;

    cout<<"Thank you!";

    cout<<"\n\nSo, your name is "<<first_name<<" "<<last_name<<" and you're "<<age<<" years old. ";
    cout<<"You said you study "<<school_major<<" at "<<school;
    cout<<". You're so cool! Nice to meet you!\n"<<endl;

    return 0;
}