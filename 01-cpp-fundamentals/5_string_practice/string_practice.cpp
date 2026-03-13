#include <iostream>
#include <string>

int main() {
    std::string full_name{};
    int age{};

    std::cout << "Enter your full name:";
    std::getline(std::cin >> std::ws, full_name);

    std::cout << "Enter your full age:";
    std::cin >> age;

    int full_name_len = static_cast<int>(full_name.length());
    std::cout << "Your age + length of name is:" << age + full_name_len << "\n";
    
    return 0;
}
