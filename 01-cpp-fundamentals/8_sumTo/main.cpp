#include<iostream>

int sumTo(int num)
{
    int total{};

    for(int i{ }; i <= num; i++)
        total+=i;
    
    return total;
}

int main()
{
    int num;
    
    std::cout << "Enter integer: ";
    std::cin >> num;

    std::cout << "The sum of all integers between 1 and " << num << " is " << sumTo(num) << std::endl;

    return 0;
}
