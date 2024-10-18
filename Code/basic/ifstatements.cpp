#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter Age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Welcome" << endl;
    }
    else if (age < 0) {
        cout << "You haven't been born yet!" << endl;
    }
    else {
        cout << "You are not old enough to enter" << endl;
    }
}