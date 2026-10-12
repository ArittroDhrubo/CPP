#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,t,sum;

    cout << "Enter n: ";
    cin >> n;

    sum = 0;

    for(int i=1; i<=n ; i++)
    {
        t = pow(10, i)-1;
        sum = sum + t;
    }

    cout << endl << "Sum of the series: " << sum << endl;

    return 0;
}

