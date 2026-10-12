#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,sum;

    cout << "Enter n: ";
    cin >> n;

    sum = 0;
    cout << "Even number are: ";
    for(int i=1; i<=n ; i++)
    {
        cout << (2*i) << " ";
        sum = sum + (2*i);
    }

    cout << endl << "Sum of odd numbers: " << sum << endl;

    return 0;
}

