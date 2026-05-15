#include<iostream>

void fizzbuzzpop(int num)
{
    for(int i{ 1 }; i <= num; i++)
    {
        bool matched{false};

        if((i % 3 == 0))
        {
            std::cout << "fizz";
            matched = true;
        }
            
        if((i % 5 == 0))
        {
            std::cout << "buzz";
            matched = true;
        }
        
        if((i % 7 == 0))
        {
            std::cout << "pop";
            matched = true;
        }
        
        if(!matched)
            std::cout << i;
        
        std::cout << "\n";
    
    }

}

int main()
{
    int num;
    
    std::cout << "Enter integer for the FizzBuzzPop game: ";
    std::cin >> num;

    fizzbuzzpop(num);

    return 0;
}
