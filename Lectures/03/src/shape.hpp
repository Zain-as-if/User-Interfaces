#pragma once

class Shape
{
  public:
    Shape(double x, double y): xorigin(x), yorigin(y) {}
    double getX() const { return xorigin; }
    double getY() const { return yorigin; }

  private:
    double xorigin;
    double yorigin;
};
