#include <iostream>

double getDoubleInput() {
    double input;
    std::cout << "Enter a double value:";
    std::cin >> input;

    return input;
}

char getCharInput() {
    char input;
    std::cout << "Enter +, -, *, or /:";
    std::cin >> input;

    return input;
}
