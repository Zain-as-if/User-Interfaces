#include <iostream>
#include <cmath>

// Find hypotenuse of right angled triangle
using namespace std;

int main() {
    double side1; 
    double side2;
    double hypotenuse;

    cout << "Enter Side 1: ";
    cin >> side1;
    cout << "\nEnter Side 2: ";
    cin >> side2;

    hypotenuse = sqrt(pow(side1,2) +  pow(side2,2));
    cout << "Hypotenuse = " << hypotenuse << endl;
    return 0;
}