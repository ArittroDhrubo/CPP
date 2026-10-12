#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,mult;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=8; j++)
        {
           mult = j*i;
           cout << j << "*" << i << " = " << mult << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}

