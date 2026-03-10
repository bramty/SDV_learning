#include "user_input.h"
#include "calculate_input.h"
#include <iostream>

int main() {
    double x1 {getDoubleInput()};
    double x2 {getDoubleInput()};
    char op {getCharInput()};

    if(isOperationValid(op)) {
        std::cout << x1 << " " << op << " " << x2 << " is " << calculateInput(x1, x2, op) << "\n";
    }
    
    return 0;
}
