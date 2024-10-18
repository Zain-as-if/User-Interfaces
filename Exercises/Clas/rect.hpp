#pragma once

#include <stdexcept>

class Rectangle {
    private:
    double x, y, width, height;

    public: 
    // Constructor
    Rectangle(double x, double y, double width, double height)
        : x(x), y(y), width(width), height(height) {
            if (width <= 0.0) {
                throw invalid_argument("Width must be > than zero");
            }
            if (height <= 0.0) {
                throw invalid_argument("Width must be > than zero");
            }
        }

    // Constructor defaults x, y = 0
    Rectangle(double width, double height)
        : Rectangle(0, 0, width, height) {}

    // Getter Methods
    double get_x() const { return x; };
    double get_y() const { return y; };
    double get_width() const { return width; };
    double get_height() const { return height; };

    // Method calculates perimeter
    double perimeter() const { return 2 * (width + height) };

    // Method calculates area
    double area() const { return width * height };
};