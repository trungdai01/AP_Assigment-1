#include <iostream>
#include <iomanip>

int main()
{
    const double exchange_rate = 24642.50;
    double dollars = 0.0;
    std :: cout << "\nInput your money in dollars: ";
    std :: cin >> dollars;

    double vndAmount = dollars * exchange_rate;

    std :: cout << "\nCurrency Conversion\n";
    std :: cout << "---------------------\n";
    std :: cout << "USD amount: " << dollars << "$" <<std :: endl;
    printf("VND amount: %0.2f\n", vndAmount);

    return 0;
}