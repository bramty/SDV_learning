#include "ball_dynamics.h"
#include <iostream>

double calculateBallHeight(double h0, int deltaT) {
    return h0 - (GRAVITY_CONST * static_cast<double>(deltaT * deltaT) / 2.0);
}

void printBallHeight(double h0, int deltaT) {
    double h{calculateBallHeight(h0, deltaT)};

    if(h > 0) {
        std::cout << "At " << deltaT << " seconds, the ball is at height: "
            << h << " meters\n";
    } else {
        std::cout << "At " << deltaT << "  seconds, the ball is on the ground.\n";
    }
}
