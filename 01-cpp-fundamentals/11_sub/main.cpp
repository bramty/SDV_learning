#include <iostream>

// write your sub function template here
template<typename T1, typename T2>
auto sub(T1 v1, T2 v2)\
{
    return v1 - v2;
}

int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}
