#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

void Verifier(int);

int main(void)
{
    int a;

    cout << "Enter a: ";
    cin  >> a;

    Verifier(a);

    return 0;
}

void Verifier(int a)
{
    if(a%2 != 0)
    {
        cout << "The number is Odd." << endl;
    }
    else
    {
        cout << "The number is even." << endl;
    }
}




