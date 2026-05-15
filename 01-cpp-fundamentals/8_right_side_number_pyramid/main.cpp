#include <iostream>

int main()
{
    int row{1};
    
    while(row <= 5)
    {
        int col{5};

        while(col >= 1)
        {   
            if(col <= row)
                std::cout << col << " "; 
            else
                std::cout << "  ";
            
            --col;
        }

        std::cout << "\n";
        ++row;
    }

    return 0;
}
