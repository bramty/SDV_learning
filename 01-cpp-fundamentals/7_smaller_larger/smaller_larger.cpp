#include <iostream>
#include <string_view>

int getUserInteger(std::string_view prompt)
{
    int input{};
    std::cout << prompt;
    std::cin >> input;
    return input;
}

int main()
{
    int smaller{getUserInteger("Enter an integer: ")};
    int larger{getUserInteger("Enter a larger integer: ")};

    if(larger < smaller) {
        std::cout << "Swapping the values\n";

        int temp{smaller};
        smaller = larger;
        larger = temp;

    }

    std::cout << "The smaller value is " << smaller << "\n";
    std::cout << "The larger value is " << larger << "\n";

    return 0;
}
