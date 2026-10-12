#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
    double base,height,radius,areaT,areaR,areaC;

    cout << "Enter Base: ";
    cin >> base;

    cout << "Enter Height: ";
    cin >> height;

    cout << "Enter Radius: ";
    cin >> radius;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    areaT = (double)1/2.00 * base * height; //Type Casting
    areaR = base * height;
    areaC = 3.1416 * pow(radius, 2);

    cout <<setw(20) << "Area of Triangle: " <<areaT <<endl;
    cout <<setw(20) << "Area of Rectangle: " <<areaR <<endl;
    cout <<setw(20) << "Area of Circle: " <<areaC <<endl;

    getch();

    return 0;
}
