#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,temp,fac,sum;

    sum = 0;

    cout << "Enter Number: ";
    cin >> n;

    temp= n;
    for(int i = n;n>0; n=n/10)
    {
        fac = 1;
        for(int j = 1; j <= n%10; j++)
         {
             fac = fac * j;
         }
         sum += fac;

    }

    cout << endl << "Sum: " << sum;

    if(sum == temp)
    {
        cout << endl << temp << " is a strong number.";
    }
    else
    {
        cout << endl << temp << " is not a strong number.";
    }

    getch();

    return 0;

}

