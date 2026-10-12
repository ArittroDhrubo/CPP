#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int Addition(int,int);

int main(void)
{
    int sum,a,b;

    cout << "Enter a: ";
    cin  >> a;

    cout << "Enter b: ";
    cin  >> b;

    sum = Addition(a,b);

    cout << "The total is: " << sum << endl;

    return 0;
}

int Addition(int s,int u)
{
    int sum;

    sum = s+u;

    return sum;
}


