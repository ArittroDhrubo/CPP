#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

float circle(int);

int main(void)
{
    float area;
    int radius = 2;

    area = circle(radius);

    cout << area << endl;

    return 0;
}

float circle(int r)
{
    float a;

    a = 3.1416 * pow(r,2);

    return a;
}

