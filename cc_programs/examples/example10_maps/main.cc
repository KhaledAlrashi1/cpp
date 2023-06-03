/*
1. Program: Introduction to maps: basic map operations
2. Original Idea (Credit): Received help from ChatGPT 4
3. Author: Khaled Alrashidi
4. Date: June 2, 2023
5. Description: The program declares a map, initializes its key and its corressponding value.
It then outputs the map on the terminal.
*/

#include <iostream>
#include <map>
#include <string>

int main() {
    // basic map definition and usage
    // define 'ages' map that is a string-type key and an integer-type value
    std::map<std::string, int> ages;
    // map = ages, key = "Khaled", value = 23
    ages["Khaled"] = 23;
    ages["Moath"] = 25;
    ages["Hanan"] = 22;
    ages["Mo"] = 28;

    //output to the terminal the key and its corresponding value
    for(auto &pair:ages){
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}