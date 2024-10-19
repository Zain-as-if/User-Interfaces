#include <iostream>

int main() {
    // pseudo-random numbers

    srand(time(NULL));

    int num = (rand() % 6) + 1; // Rand no, inc. 1 - 6 

    std::cout << num << std::endl;
    return 0;
}