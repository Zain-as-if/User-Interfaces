#include <iostream>
#include "rect.hpp"

using namespace std;

int main() {
    try {
        Rectangle rect1(4.0, 5.0, -4.0, 5.0);
    } catch (const invalid_argument& e) {
        cout << "Error creating rect1: " << e.what() << endl;
    }

    try {
        Rectangle rect2(6.0, 7.0);
        cout << "Rectangle 2 (Position: " << rect2.get_x() << ", " << rect2.get_y() << ")" << endl;
        cout << "Width: " << rect2.get_width() << ", Height: " << rect2.get_height() << endl;
        cout << "Area: " << rect2.area() << endl;
        cout << "Perimeter: " << rect2.perimeter() << endl;
    } catch (const invalid_argument& e) {
        coout << "Error creating rect2: " << e.what() << endl;
    }
    
    return 0;
}