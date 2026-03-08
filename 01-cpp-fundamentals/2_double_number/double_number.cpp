#include <iostream>

int doubleNumber(int x) {
    return 2 * x;
}


int main(void) {

    int num{};

    /* Receive input from user */
    std::cout << "Enter a number to input : ";
    std::cin >> num;

    /* Print the double of the input number */
    std::cout << "The double of " << num << " is " << doubleNumber(num) << "\n";

    return 0;
}
