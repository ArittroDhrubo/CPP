#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

double square(int);

int main(void)
{
    int a;

    double sqr;

    cout << "Enter a: ";
    cin  >> a;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    sqr = square(a);

    cout << "The square of " << a << " is: " << sqr << endl;

    return 0;
}

double square(int s)
{
   double sqr;

   sqr = pow(s,2);

    return sqr;
}



