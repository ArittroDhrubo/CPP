#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

double factorial(int);

int main(void)
{
    double sum = 0;
    int n;

    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        sum += factorial(i)/i;
    }

    cout << "Sum: " << sum << endl;
    return 0;
}

double factorial(int a)
{
    double fact=1;

    for(int i=a; i>=1; i--)
    {
        fact = fact*i;
    }

    return fact;
}





