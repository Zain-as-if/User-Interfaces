#include <iostream>
#include "circle.hpp"

using namespace std;

int main()
{
  Circle c(-1.6, 7.2, 3.5);

  cout << "Origin    = (" << c.getX() << ", " << c.getY() << ')'
       << "\nRadius    = " << c.getRadius()
       << "\nArea      = " << c.area()
       << "\nPerimeter = " << c.perimeter() << endl;

  return 0;
}
