#include <iostream>

int calculate(int x1, int x2, char);
inline int addition(int x1, int x2);
inline int substraction(int x1, int x2);
inline int multiplication(int x1, int x2);
inline int division(int x1, int x2);
inline int modulo(int x1, int x2);

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char op{};
    std::cin >> op;

    // We'll call calculate first so an invalid operator prints an error message on its own line
    int result{ calculate(x, y, op) };
    std::cout << x << ' ' << op << ' ' << y << " is " << result << '\n';

    return 0;
}

int calculate(int x1, int x2, char op)
{
    switch(op)
    {
    case '+':
        return addition(x1, x2);
    case '-':
        return substraction(x1, x2);
    case '*':
        return multiplication(x1, x2);
    case '/':
        return division(x1, x2);
    case '%':
        return modulo(x1, x2);
    default:
        return 0;
    }
}

inline int addition(int x1, int x2)
{
    return x1 + x2;
}

inline int substraction(int x1, int x2)
{
    return x1 - x2;
}

inline int multiplication(int x1, int x2)
{
    return x1 * x2;
}

inline int division(int x1, int x2)
{
    if(x2==0)
        return 0;
    else    
        return x1 / x2;
}

inline int modulo(int x1, int x2)
{
    return x1 % x2;
}
