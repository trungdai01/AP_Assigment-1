#include <iostream>

using namespace std;

float sumTripple(float var, float var2, float var3)
{
    float sum = var + var2 + var3;
    return sum;
}

float mulTripple(float var, float var2, float var3)
{
    float mul = var * var2 * var3;
    return mul;
}

float aveTriple(float var, float var2, float var3)
{
    float ave = (var + var2 + var3) / 3;
    return ave;
}

void tripple_run()
{
    float a, b, c;

    while (true)
    {
        cout << "Input three numbers:\n";
        cin >> a;
        if (a == -1)
            return;
        cin >> b;
        if (b == -1)
            return;
        cin >> c;
        if (c == -1)
            return;

        cout << "The sum of three numbers: " << sumTripple(a, b, c) << endl;
        cout << "The multiple of three numbers: " << mulTripple(a, b, c) << endl;
        cout << "The average of three numbers: " << aveTriple(a, b, c) << endl;
    }
}

int main()
{
    tripple_run();
    return 0;
}