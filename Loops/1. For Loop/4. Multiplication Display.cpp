#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;

int main(void)
{
    int n,mult;
    cout << "Enter integer: ";
    cin >> n;
    for(int i=1; i<=10; i++)
    {
       mult = n*i;
       cout << n << "*" << i << " : "<< mult << endl;
    }

    getch();
    return 0;
}

