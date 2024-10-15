// Compare this with example.cpp

#include <iostream>
#include <string>

using namespace std;   // allows us to omit std:: prefix

int main()
{
  string name;

  cout << "Enter your name: ";
  cin >> name;

  cout << "\nHello " << name << "!\n";

  cout << "Your name contains " << name.length()
       << " characters" << endl;

  return 0;
}
