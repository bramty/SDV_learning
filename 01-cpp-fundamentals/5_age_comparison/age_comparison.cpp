#include <iostream>
#include <string>
#include <string_view>

std::string getName(const int num);
int getAge(std::string_view name);
void printOlderPerson(std::string_view name1, std::string_view name2, const int age1, const int age2);

int main() {
    const std::string name1{getName(1)};
    const int age1{getAge(name1)};
    
    const std::string name2{getName(2)};
    const int age2{getAge(name2)};
    
    printOlderPerson(name1, name2, age1, age2);

    return 0;
}

std::string getName(const int num) {
    std:: string name{};

    std::cout << "Enter the name of person #" << num << ": ";
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view name) {
    int age{};

    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;

    return age;
}

void printOlderPerson(std::string_view name1, std::string_view name2, const int age1, const int age2) 
{
    if(age1 >= age2) {
        std::cout << name1 << " (" << age1 <<")" << " is older than "
                << name2 << " (" << age2 <<")\n";
    } else {
        std::cout << name2 << " (" << age2 <<")" << " is older than "
                << name1 << " (" << age1 <<")\n";
    }

}
