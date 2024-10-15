// Demonstration of basic console I/O in C++,
// also showing how we can test for successful input

#include <iostream>

using namespace std;

int main()
{
  double x, y;

  cout << "Enter x & y coordinates: ";

  cin >> x >> y;

  int status = cin.fail();

  cout << "\nCoordinates are ("
       << x << ", " << y << ")" << endl;

  cout << "cin.fail() returned a value of " << status << endl;

  return 0;
}
