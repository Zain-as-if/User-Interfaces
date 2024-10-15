#include "array.hpp"
#include <random>
#include <iostream>

using namespace std;

int main()
{
  random_device seed;
  mt19937 generator(seed());
  uniform_real_distribution<float> randomValue(0.0f, 100.0f);

  // Create two arrays of different sizes

  Array a(5);
  Array b { 10 };  // C++11 syntax

  // Write to then read from array elements, using []

  for (int i = 0; i < a.getSize(); ++i) {
    a[i] = randomValue(generator);
  }

  for (int i = 0; i < a.getSize(); ++i) {
    cout << a[i] << "\n";
  }

  Array c(a);   // invokes copy constructor

  Array d = a;  // also invokes copy constructor

  a = b;        // invokes assignment operator

  return 0;
}
