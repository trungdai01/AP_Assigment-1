#include <iostream>

#define PI 3.14
enum
{
    SQUARE = 1,
    RECTANGLE,
    CIRCLE,
    TRIANGLE
};

using namespace std;

float areaSquare(float a)
{
    return a * a;
}

float areaTriangle(float ch, float cc)
{
    return (ch * cc) / 2;
}

float areaCircle(float bk)
{
    return bk * bk * PI;
}

float areaRectangle(float a, float b)
{
    return a * b;
}

void area_Run()
{
    float a, b;
    int mode;

    while (true)
    {
        cout << "Choose shape you want to calculate the area: \n";
        cout << "1: for Square \n2: for Rectangle \n3: for Circle \n4: for Triangle \nLet make your choose\n";
        cin >> mode;

        switch (mode)
        {
        case SQUARE:
            cout << "Input the side of the square: " << endl;
            cin >> a;
            if (a == -1)
                return;

            cout << "The area of the square: " << areaSquare(a) << endl;
            break;

        case RECTANGLE:
            cout << "Input the length of the rectangle: " << endl;
            cin >> a;
            if (a == -1)
                return;

            cout << "Input the width of the rectangle: " << endl;
            cin >> b;
            if (b == -1)
                return;

            cout << "The area of the rectangle: " << areaRectangle(a, b) << endl;
            break;

        case CIRCLE:
            cout << "Input the radius of the circle: " << endl;
            cin >> a;
            if (a == -1)
                return;

            cout << "The area of the circle: " << areaCircle(a) << endl;
            break;

        case TRIANGLE:
            cout << "Input the base of the triangle: " << endl;
            cin >> a;
            if (a == -1)
                return;

            cout << "Input the height of the triangle: " << endl;
            cin >> b;
            if (b == -1)
                return;

            cout << "The area of the triangle: " << areaTriangle(a, b) << endl;

        case -1:
            return;
        default:
            cout << "Invalid input:" << endl;
            break;
        }
    }
}

int main()
{
    area_Run();
    return 0;
}