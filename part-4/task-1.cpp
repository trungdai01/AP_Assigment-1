#include <iostream>

int main()
{
    float sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        int input;
        std::cout << "Enter score of student " << i + 1 << ": ";
        std::cin >> input;
        std::cin.ignore();
        sum += input;
    }
    float average = 0.0;
    average = sum / 10;
    printf("Average scores: %0.2f", average);
    return 0;
}