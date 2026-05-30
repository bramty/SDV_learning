#include <iostream>

// write your mult function template here
template<typename T>
T mult(T v1, int v2)
{
    return v1 * static_cast<T>(v2);
}

int main()
{
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	return 0;
}
