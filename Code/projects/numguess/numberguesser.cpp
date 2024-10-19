#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int num = (rand() % 100) + 1;
    int guess = -1;
    int tries = 0;
    while (guess != num) {
        std::cout << "Guess the number (1-100): ";
        std::cin >> guess;
        tries++;
        if (guess > num) {
            std::cout << "Lower" << std::endl;
        }
        else if (guess < num) {
            std::cout << "Higher" << std::endl;
        }
        else {
            std::cout << "You guessed correctly, the number was: " << num << ", it took " << tries << " tries." << std::endl;
            break;
        }
    } 
    return 0;
}