#pragma once  // <1>

#include <cmath>

class Circle
{
  public:  // <2>
    Circle(double r): Circle(0, 0, r) {}  // <5>
    Circle(double, double, double);
    double getX() const { return xorigin; }  // <6>
    double getY() const { return yorigin; }
    double getRadius() const { return radius; }  // <7>
    bool containsPoint(double, double) const;    // <8>
    double area() const { return 3.141 * radius * radius; }
    double perimeter() const { return 2.0 * 3.141 * radius; }

  private:  // <3>
    double xorigin, yorigin;
    double radius;
};  // <4>
