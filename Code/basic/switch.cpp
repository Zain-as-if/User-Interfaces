#include <iostream>

using namespace std;

int main() {
    int month;

    cout << "Enter the month (1-12): ";
    cin >> month;

    switch(month) {
        case 1:
            cout << "It is January";
            break;
        case 2:
            cout << "It is February";
            break;
        case 3:
            cout << "It is March";
            break;
        default:
            cout << "Please enter in only numbers (1-12)";
    }
    
}