#include <iostream>
#include <string>
int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore();
    if (age < 5)
        std::cout << "Your ticket is free";
    else if (5 <= age <= 10)
        std::cout << "Your ticket is $10";
    else if (11 <= age <= 16)
        std::cout << "Your ticket is $20";
    else if (16 < age)
        std::cout << "Your ticket is $25";
    return 0;
}