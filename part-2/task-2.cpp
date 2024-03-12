#include <iomanip>
#include <iostream>
#include <cmath>

int main()
{
    double radius = 0.0;
    double height = 0.0;
    std :: cout << "Enter radius: ";
    std :: cin >> radius;
    std :: cout << "Enter height: ";
    std :: cin >> height;
    double volume = M_PI * pow(radius, 2) * height;
    printf("Volume of the cylinder with radius %0.2f and height %0.2f is: %0.2f", radius, height, volume);
    // std :: cout << M_PI << std :: endl;
    return 0;
}