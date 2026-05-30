#include <cassert>

// define your factorial() function template here
template <int N>
constexpr int factorial()
{
    static_assert((N >= 0) && "N should be positive integer");
    int factorial_result{ 1 };
    
    for(int i=N; i>0; --i)
    {
        factorial_result *= i;
    }

    return factorial_result;
}


int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}
