#include <iostream>

using namespace std;

int main() {
    double temp;
    char current;
    char choice;

    cout << "What is your current temperature unit: (K, C, F): ";
    cin >> current;

    cout << "What temperature do you want to convert to (K, C, F): ";
    cin >> choice; 

    cout << "Enter temperature";
    cin >> temp;

    if (current == 'F' && choice == 'F') {
        cout << "That is the same temperature of: " << temp << endl;
    }
    else if (current == 'F' && choice == 'C') {
        cout << temp << " Fahrenheit = " << ((temp-32) * (5/(double)9)) << " Celsius" << endl;
    }
    else if (current == 'F' && choice == 'K') {
        cout << temp << " Fahrenheit = " << ((temp-32) * (5/(double)9)) + 273.15 << " Kelvin" << endl;
    }
    else if (current == 'K' && choice == 'K') {
        cout << "That is the same temperature of: " << temp << endl;
    }
    else if (current == 'K' && choice == 'F') {
        cout << temp << " Kelvin = " << ((temp - 273.15) * 9/(double)5) + 32 << " Fahrenheit" << endl;
    }
    else if (current == 'K' && choice == 'C') {
        cout << temp << " Kelvin = " << (temp - 273.15) << " Celsius" << endl;
    }
    else if (current == 'C' && choice == 'C') {
        cout << "That is the same temperature of: " << temp << endl;
    }
    else if (current == 'C' && choice == 'K') {
        cout << temp << " Celsius = " << temp + 273.15 << " Kelvin" << endl;
    } 
    else if (current == 'C' && choice == 'F') {
        cout << temp << " Celsius = " << (temp * 9/(double)5) + 32 << " Fahrenheit" << endl;
    }
    else {
        cout << "Invalid" << endl;
    }
    return 0;
}