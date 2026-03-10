#include "ball_dynamics.h"
#include <iostream>

int main() {
    std::cout << "Enter the height of the tower in meters: ";
    double h{ };
    std::cin >> h;

    printBallHeight(h, 0);
    printBallHeight(h, 1);
    printBallHeight(h, 2);
    printBallHeight(h, 3);
    printBallHeight(h, 4);
    printBallHeight(h, 5);

    return 0;
}
