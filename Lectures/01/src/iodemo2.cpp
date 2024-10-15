// Example combining stream extraction with the test for its success

#include <iostream>

using namespace std;

int main()
{
  double x, y;

  cout << "Enter x & y coordinates: ";

  if (cin >> x >> y) {
    cout << "\nCoordinates are (" << x << ", " << y << ")" << endl;
  }
  else {
    cout << "\nError: invalid input!" << endl;
  }

  return 0;
}
