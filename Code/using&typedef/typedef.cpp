#include <iostream>
#include <vector>

// Like 'using' keyword but worse

//typedef std::string text_t;
//typedef int number_t; 

using text_t = std::string;
using number_t = int;

int main() {

    //std::string firstName = "Zain";
    text_t firstName = "Zain";
    number_t age = 21;

    std::cout << firstName << std::endl;
    std::cout << age << std::endl;

    return 0;
}