#include <iostream>

int main (void) {
    int num1{};
    int num2{};

    /* Print the request to enter first integer */
    std::cout << "Enter an integer: ";
    std::cin >> num1;

    /* Print the request to enter second integer */
    std::cout << "Enter another integer: ";
    std::cin >> num2;

    /* Print the addition of those two integers */
    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << "\n";

    /* Print the substraction of those two integers */
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << "\n";

    return 0;
}
