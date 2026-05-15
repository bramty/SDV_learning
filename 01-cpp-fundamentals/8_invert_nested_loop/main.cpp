#include <iostream>

int main()
{
    int row{};
    
    while(row < 5)
    {
        int col{};
        int num{5};
        num-=row;

        while(col < 5)
        {   
            if(num-col > 0)
                std::cout << num - col << " "; 
            else
                std::cout << " ";
            
            ++col;
        }

        std::cout << "\n";
        ++row;
    }

    return 0;
}
