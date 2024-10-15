#include <iostream>
#include <string>                                       // <1>

int main()
{
  std::string name;                                     // <2>

  std::cout << "Enter your name: ";                     // <3>
  std::cin >> name;                                     // <4>

  std::cout << "\nHello " << name << "!\n";             // <5>

  std::cout << "Your name contains " << name.length()   // <6>
            << " characters" << std::endl;

  return 0;
}
