#include <iostream>

double square(double length) {
    return length*length;
}

double cube(double length); // Use if function declared after main()

int main(){
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double cube(double length) {
    return length*length*length;
}