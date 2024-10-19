#include <iostream>

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday To " << name << "\n";
    std::cout << "Happy Birthday To " << name << "\n";
    std::cout << "Happy Birthday To " << name << "\n";
    std::cout << "Happy Birthday To " << name << "\n";
    std::cout << "You are " << age << " years old! \n";
}

int main() {
    std::string name = "Zain";
    int age = 19;
    happyBirthday(name, age);
    return 0;
}