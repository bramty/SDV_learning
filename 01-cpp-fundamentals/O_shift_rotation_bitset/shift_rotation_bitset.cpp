#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    // keep track of whether the leftmost bit was a 1
	const bool leftbit{ bits.test(3) };

	bits <<= 1; // do left shift (which shifts the leftmost bit off the end)

	// if the left bit was a 1
	if (leftbit)
		bits.set(0); // set the rightmost bit to a 1

	return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}
