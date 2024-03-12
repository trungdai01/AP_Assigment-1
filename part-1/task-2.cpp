#include <iostream>

int main()
{
    int a = 3;
    int b = 4;
    int sum = a + b;
    int sub = a - b;
    int mod = a % b;
    int mult = a * b;
    float div = a / b;
    printf("Two numbers: %d and %d\n", a, b);
    printf("Summation: %d\nSubtraction: %d\nModulus: %d\nMultiplication: %d\nDivision: %0.2f\n ", sum, sub, mod, mult, div);
    return 0;
}