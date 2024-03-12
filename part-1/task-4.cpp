#include <iostream>
using namespace std;
int main()
{
    int x = 25;
    int y = 50;
    float percentage = (float)x * y / 100;
    printf("%d%% of %d is %0.2f", x, y, percentage);
    // int a, b, c;
    // cin >> a >> b >> c;
    // cout << a << b << c;
    return 0;
}