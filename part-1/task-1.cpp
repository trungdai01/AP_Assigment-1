#include <iostream>

int main()
{
    int a = 15;
    int b = 25;
    int c = 37;
    float average = float(a + b + c) / 3;
    // std::cout << "Average of " << a << "," << b << "," << c << ": " << average ;
    printf("Average of %d, %d, %d is %0.2f", a, b, c, average);
    return 0;
}