#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
using namespace std;

void sin(int,double *);

int main(void)
{
    int i,n;
    double res;

    cout << "Enter i: ";
    cin >> n;

    sin(n,&res);

    cout << "sin(x): " << res << endl;

    getch();
    return 0;
}

void sin(int n,double *r)
{
    double sum,term;
    *r = 0;

    for(int k = 1; k<=2*n; k+=2)
    {
        if(k%2 == 0)
        {
            term = -pow(k,)
        }
    }

}
