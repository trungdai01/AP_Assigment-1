#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <limits>



int main()
{
    srand(time(NULL));
    int randNum = rand() % 21;
    int input;
    for (;;)
    {
        std::cout << "Enter a number to try: ";
        if (!(std::cin >> input))
        {
            std::cout << "Invalid input. Please enter a number. \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        // std::cin >> input;
        if (input < randNum)
            std::cout << "Your guess is smaller.\n";
        else if (input > randNum)
            std::cout << "Your guess is greater.\n";
        else
        {
            std::cout << "You got it";
            break;
        }
    }
    return 0;
}