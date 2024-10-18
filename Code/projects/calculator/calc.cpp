#include <iostream>

using std::cout;
using std::cin;

int main() {
    char op;
    double num1, num2, result;
    cout << "******CALCULATOR******" << std::endl;
    cout << "Enter Operation: + - * / : ";
    cin >> op;

    cout << "Enter No.1: ";
    cin >> num1;
    cout << "Enter No.2: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            cout << "Result: " << num1 / num2 << std::endl;
        default:
            cout << "Please enter valid operation (+ - * /)";
            break;
    }
    cout << "**********************" << std::endl;

    return 0;
}