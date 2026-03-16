#include <iostream>

int getNum();
constexpr bool isEven(int num);

int main()
{
    int num{getNum()};

    if(isEven(num))
        std::cout << num << " is even\n";
    else
        std::cout << num << " is odd\n";

    return 0;
}

int getNum()
{
    int num{};

    std::cout << "Enter an integer: ";
    std::cin >> num;

    return num;
}

constexpr bool isEven(int num) 
{
    return !(num % 2);
}
