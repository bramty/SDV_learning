#include<iostream>

void fizzbuzz(int num)
{
    for(int i{ 1 }; i <= num; i++)
    {
        if((i % 3 == 0) && (i % 5 == 0))
            std::cout << "fizzbuzz\n";
        else if((i % 3 == 0))
            std::cout << "fizz\n";
        else if((i % 5 == 0))
            std::cout << "buzz\n";
        else
            std::cout << i << "\n";
    }

}

int main()
{
    int num;
    
    std::cout << "Enter integer for the FizzBuzz game: ";
    std::cin >> num;

    fizzbuzz(num);

    return 0;
}
