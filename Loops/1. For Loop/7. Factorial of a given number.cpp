#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,fac;

    cout << "Enter number: ";
    cin >> num;

    fac = 1;

    for(int i=num; i>=1 ; i--)
    {
        fac = i*fac;
    }

    cout << "Factorial of the number: " << fac << endl;

    getch();
    return 0;
}

