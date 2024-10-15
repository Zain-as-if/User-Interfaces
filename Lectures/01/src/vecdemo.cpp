// Demonstration of using a C++ vector

#include <vector>
#include <string>
#include <iostream>
#include "utils.hpp"

using namespace std;

int main()
{
  vector<string> words;

  // Display vector contents by invoking an overloaded stream
  // insertion operator (see utils.cpp for implementation)

  cout << "words = " << words << endl;

  // Populate vector with 3 strings

  words.push_back("Apple");
  words.push_back("Banana");
  words.push_back("Kiwi");

  // Display new size & contents of vector

  cout << "\n" << words.size() << " elements added\n";
  cout << "words = " << words << endl;

  // Two different approaches to accessing a single element

  cout << "\nwords[1] = " << words[1] << endl;
  cout << "words.at(1) = " << words.at(1) << endl;

  // Remove item and display new vector contents

  cout << "\nRemoving item at end...\n";
  words.pop_back();
  cout << "words = " << words << endl;

  // Empty the vector and display new contents

  cout << "\nClearing vector...\n";
  words.clear();
  cout << "words = " << words << endl;

  return 0;
}
