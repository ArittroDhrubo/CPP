#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n1,n2,temp,fac,sum;


    cout << "Enter starting number: ";
    cin >> n1;

    cout << "Enter ending number: ";
    cin >> n2;

    cout << "The Strong numbers are: ";

    for(int i = n1;i<=n2; i++)
    {
       temp= i;
       sum = 0;
        for(int j = i; j>0; j=j/10)
         {
             fac = 1;
             for(int k = 1; k <= j%10; k++)
             {
                 fac = fac*k;
             }
             sum += fac;
         }
    if(sum == temp)
    {
        cout << temp << " ";
    }
    }

    cout << endl;

    getch();

    return 0;

}

