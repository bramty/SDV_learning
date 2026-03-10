double calculateInput( double x1, double x2, char op) {
    double result{};

    if( op == '+') {
        result = x1 + x2;
    } else if (op == '-') {
        result = x1 - x2;
    } else if (op == '*') {
        result = x1 * x2;
    } else if (op == '/') {
        if(x2 != 0) {
            result = x1 / x2;
        } else {
            result = 0;
        }
    } else {
        result = 0.0;
    }

    return result;
}

bool isOperationValid(char op) {
    if( (op == '+') || (op == '-') || (op == '*') || (op == '/')) {
        return true;
    }

    return false;
}
