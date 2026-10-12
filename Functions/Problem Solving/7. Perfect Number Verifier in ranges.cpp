#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

void PerfectVerifier(int,int);

int main(void)
{
    int Snum,Enum,PN;

    cout << "Enter Starting number: ";
    cin >> Snum;

    cout << "Enter Ending number: ";
    cin >> Enum;

    cout << "Perfect Numbers are: ";

    PerfectVerifier(Snum,Enum);

    getch();

    return 0;
}

void PerfectVerifier(int a,int b)
{
    int sum,temp;

    for(int i = a; i<=b ; i++)
    {
        temp = i;
        sum = 0;
        for(int j = 1; j <= i/2; j++)
        {
        if(i%j==0)
        {
            sum+=j;
        }
        }

        if(sum==temp)
        {
            cout << temp << " ";
        }
    }
}








