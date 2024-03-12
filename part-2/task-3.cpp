#include <iomanip>
#include <iostream>
#include <cmath>
// #include <cstdlib>

int main()
{
    std :: cout << "Enter a number: ";
    double input = 0.0;
    std :: cin >> input;
    double _abs;
    double _sin = 0.0;
    double _cos = 0.0;
    double _tan = 0.0;
    double _log = 0.0;
    double _log10 = 0.0;
    double _sqrt = 0.0;
    double _exp = 0.0;
    _abs = fabs(input);
    _sin = sin(input*M_PI/180);
    _cos = cos(input*M_PI/180);
    _tan = tan(input*M_PI/180);
    _log = log(input);
    _log10 = log10(input);
    _sqrt = sqrt(input);
    _exp = exp(input);
    printf("abs: %f\n", _abs);
    printf("sin: %f\n", _sin);
    printf("cos: %f\n", _cos);
    printf("tan: %f\n", _tan);
    printf("log: %f\n", _log);
    printf("log10: %f\n", _log10);
    printf("sqrt: %f\n", _sqrt);
    printf("exp: %f\n", _exp);
    return 0;
}