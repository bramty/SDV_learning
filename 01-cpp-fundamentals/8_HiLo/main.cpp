#include <iostream>
#include "Random.h"


bool receiveGuessAndPrintResult(int count, int num)
{
    bool result{false};
    int input{};

    std::cout << "Guess #" << count << ": ";
    std::cin >> input;

    if(input < num)
        std::cout << "Your guess is too low.\n";
    else if(input > num)
        std::cout << "Your guess is too high.\n";
    else
    {
        std::cout << "Correct! You win!\n";
        result = true;
    }
        
    return result; 
}


int main()
{
    bool game_state{true};

    while(game_state)
    {
        int random_int = Random::get(1, 100);
        bool guessed{false};

        std::cout << "Let's play a game." 
              << "I'm thinking of a number between 1 and 100."
              << "You have 7 tries to guess what it is.\n"; 

        for(int count{1}; count <= 7; count++)
        {
            guessed = receiveGuessAndPrintResult(count, random_int);

            if(guessed)
                break;
        }

        if(!guessed)
            std::cout << "Sorry, you lose. The correct number was " << random_int <<".\n";

        char ch_input{};
        bool request_confirmed{false};
        
        do
        {
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> ch_input;

            switch(ch_input)
            {
                case 'y':
                    request_confirmed = true;
                    break;
                case 'n':
                    request_confirmed = true;
                    game_state = false;
                    break;   
                default:
                    break; 
            }

        } while(!request_confirmed);
    
    }

    std::cout << "Thank you for playing.\n";

    return 0;
}
