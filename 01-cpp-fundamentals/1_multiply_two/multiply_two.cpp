#include <iostream>

int main(void) {
    int inputValue {0};

    /* Console request message */
    std::cout << "Enter an integer: ";

    /* User Input */
    std::cin >> inputValue;

    /* Print the double of user input */
    std::cout << "Double " << inputValue << " is:" << 2 * inputValue << "\n";

    /* Print the triple of user input */
    std::cout << "Triple " << inputValue << " is:" << 3 * inputValue << "\n";

    return 0;
}
