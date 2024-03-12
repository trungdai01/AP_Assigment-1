#include <iostream>

int main()
{
    int input;
    double money, result;
    std::cout << "(1)VND to AUD\n(2)VND to USD\nEnter your option to choose: ";
    std::cin >> input;
    std::cin.ignore();

    std::cout << "Enter your money in VND: ";
    std::cin >> money;

    switch (input)
    {
    case 1:
        result = money / 16301.72;
        printf("Money conversion from VND to AUD is: %0.2f", result);
        break;
    case 2:
        result = money / 24655.50;
        printf("Money conversion from VND to USD is: %0.2f", result);
        break;
    default:
        result = 0.0;
        break;
    }
    return 0;
}