// Demonstration of string manipulation in C++

#include <string>
#include <iostream>

using namespace std;

int main()
{
  string target = "World";
  string message = "Hello " + target + "!";

  // Display string and its length

  cout << message << endl;
  cout << message.length() << endl;

  // Access a character by position (zero-based)

  cout << message[6] << endl;

  // Search for a substring and display its position

  cout << message.find("World") << endl;

  // Replace chars from index 0 up to but not including 5

  message.replace(0, 5, "Goodbye");
  cout << message << endl;

  return 0;
}
