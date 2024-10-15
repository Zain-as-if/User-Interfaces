#include "rect.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

// Constructor
Rectangle::Rectangle(double x, double y, double width, double height)
    : x(x), y(y), width(width), height(height) {}

// Constructor defaults x, y = 0
Rectangle::Rectangle(double width, double height)
    : Rectangle(0, 0, width, height) {}

// Getters
double Rectangle::get_x() const {
    return x;
}

double Rectangle::get_y() const {
    return y;
}

double Rectangle::get_width() const {
    return width;
}

double Rectangle::get_height() const {
    return height;
}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}

double Rectangle::area() const {
    return width * height;
}