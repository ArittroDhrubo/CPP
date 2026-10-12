#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int PrimeVerifier(int);

int main(void)
{
    int num,countt;

    cout << "Enter number: ";
    cin >> num;

    countt = PrimeVerifier(num);

    if(countt == 1)
    {
        cout << num << " is a prime number." << endl;
    }
    else{
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}

int PrimeVerifier(int a)
{
    int turn = 1;

    for(int i = 2; i <= a/2 ; i++)
    {
        if(a%i == 0)
        {
            turn++;
        }
    }

    return turn;
}






