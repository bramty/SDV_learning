#include "io.h"
#include <iostream>

int readNumbers(void) {
    int num{};

    std::cout << "Enter an integer : ";
    std::cin >> num;

    return num;
}

void writeAnswer(int num) {
    std::cout << "The sum of the two integers is " << num << "\n";
}
