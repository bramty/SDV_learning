#include <cstdlib>
#include <iostream>
#include <limits>
#include "Random.h" // https://www.learncpp.com/cpp-tutorial/global-random-numbers-random-h/

void ignoreline()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction()
{
    //Check for the failed extraction
    if(!std::cin)
    {
        if(std::cin.eof())  // If the stream was closed
        {
            std::exit(0);   // Shut down the program
        }

        // Handle the failure
        std::cin.clear(); // Put into the normal operation mode
        ignoreline();

        return true;
    }

    return false;
}

// Returns true if the user won, false if they lost
// We don't use the return value in this program, but it doesn't add complexity to have it, and may be useful in a future update
// (e.g. if we wanted to move the won/lost messages out of the function, or conditionalize other behavior based on won/lost)
bool playHiLo(int guesses, int min, int max)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";
	const int number { Random::get(min, max) }; // this is the number the user needs to guess

	// Loop through all of the guesses
	for (int count{ 1 }; count <= guesses; ++count)
	{
		std::cout << "Guess #" << count << ": ";

		int guess{};
        std::cin >> guess;

        if(clearFailedExtraction() || (guess < min) || (guess > max))
        {
            std::cout << "Input is invalid. Please try again.\n";
            --count;
            continue;
        }
        ignoreline();

		if (guess > number)
			std::cout << "Your guess is too high.\n";
		else if (guess < number)
			std::cout << "Your guess is too low.\n";
		else // guess == number, so the user won
		{
			std::cout << "Correct! You win!\n";
			return true;
		}
	}

	// The user lost
	std::cout << "Sorry, you lose. The correct number was " << number << '\n';
	return false;
}

bool playAgain()
{
	// Keep asking the user if they want to play again until they pick y or n.
	while (true)
	{
		char ch{};
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;

        ignoreline();

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
		}
	}
}

int main()
{
	constexpr int guesses { 7 }; // the user has this many guesses
	constexpr int min     { 1 };
	constexpr int max     { 100 };

	do
	{
		playHiLo(guesses, min, max);
	} while (playAgain());

	std::cout << "Thank you for playing.\n";

	return 0;
}
