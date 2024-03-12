#include <iostream>

int main()
{
    double num1, num2;
    std::cout << "Enter number 1: ";
    std::cin >> num1;
    std::cout << "Enter number 2: ";
    std::cin >> num2;
    int input;
    std::cout << "1. +\n2. -\n3. *\n4. /\nEnter your choice: ";
    std::cin >> input;
    std::cin.ignore();

    switch (input)
    {
    case 1:
        printf("%0.2f + %0.2f = %0.2f", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%0.2f - %0.2f = %0.2f", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%0.2f * %0.2f = %0.2f", num1, num2, num1 * num2);
        break;
    case 4:
        printf("%0.2f / %0.2f = %0.2f", num1, num2, num1 / num2);
        break;
    default:
        break;
    }

    return 0;
}