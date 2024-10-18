#include <iostream>

int main()
{
    std::string name;
    int age;

    //std::cout << "What's Your Name?: ";
    //std::cin >> name;

    std::cout << "What's Your Age?: ";
    std::cin >> age;

    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name); // USE GETLINE FOR STRINGS WITH WHITESPACE std::ws eliminates any \n or whitespace from previous input
    
    std::cout << "Hello " << name << std::endl; 
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}