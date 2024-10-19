#include <iostream>
#include <iomanip>

void showBalance(double balance) {
    std::cout << "Your balance is: £" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit() {
    double amount = 0;
    std::cout << "Enter deposit: ";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    }
    else {
        std::cout << "Invalid Amount\n";
        return 0;
    }
}

double withdraw(double balance) {
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0) {
        std::cout << "Invalid amount\n";
        return 0;
    }
    else {
        return amount;
    }
}

int main() {
    double balance = 123.92; 
    int choice = 0;

    do {
        std::cout << "Choose: \n1.Show Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        std::cin >> choice;
        
        switch(choice) {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting" << std::endl;
            break;
        default:
            std::cout << "Invalid Option\n";
    }
    } while(choice != 4);

    return 0;
}