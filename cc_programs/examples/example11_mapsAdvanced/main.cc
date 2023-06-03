/*
1. Program: An advanced usage of maps
2. Original Idea (Credit): Received help from ChatGPT 4
3. Author: Khaled Alrashidi
4. Date: June 2, 2023
5. Description: The program defines a class and passes it as a value in a map. 
Recall a map has keys and (their corresponding) values. The class "InforFolder"
has data members such as "country", "hobby", "schoolMajor", "age", and "degree".
It finally outputs on the terminal the content of map. 
*/

#include <iostream>
#include <map>
#include <string>


// define a class contains a person's information and using map to achive that.
// In this case, the class is the value in the map
class InfoFolder{
    public:
    std::string country;
    std::string hobby;
    std::string schoolMajor;
    int age;
    std::string degree;
};

int main() {
    // define a map where its key is a string-type and its value is a defined-class "InfoFolder"
    std::map<std::string, InfoFolder> Humans;
    InfoFolder folder;
    std::string name;

    // The beginning of the program
    std::cout << "\nHello! This is a map-creator program. "
    << "It takes your information, stores them in a map, "
    << "and outputs them on the terminal\n" << std::endl;

    // ask the user to enter their information
    std::cout << "Please enter your first name: ";
    std::cin >> name;

    std::cout << "Please enter your country: ";
    std::cin >> folder.country;

    std::cout << "Please enter your hobby: ";
    std::cin >> folder.hobby;

    std::cout << "Please enter your school major: ";
    std::cin >> folder.schoolMajor;

    std::cout << "Please enter your age: ";
    std::cin >> folder.age;

    std::cout << "Please enter your school degree: ";
    std::cin >> folder.degree;

    Humans.insert(std::make_pair(name, folder));

    Humans["Mohammed"] = {"Kuwait", "Reading", "Law", 27, "Master's"};
    Humans["Hanan"] = {"Kuwait", "Playing music", "geology", 22, "Bachelor's"};
    Humans["Moath"] = {"Kuwait", "Running", "Physical Therapy", 26, "Bachelor's"};
    Humans["Eimon"] = {"USA", "Playing basketball", "neuroscience", 21, "Bachelor's"};

    //output the key and its corressponding values
    std::cout << std::endl << "----------------" << std::endl;
    for(auto & pair : Humans){
        std::cout << "Their name is " << pair.first << std::endl;
        std::cout << "They're from " << pair.second.country << std::endl;
        std::cout << "They're " << pair.second.age << " and like " << pair.second.hobby << std::endl;
        std::cout << "They have a " << pair.second.degree << " in " << pair.second.schoolMajor << std::endl;
        
        std::cout << std::endl << "----------------" << std::endl;
    }

    return 0;
}