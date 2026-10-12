#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n;
    double sum;

    cout << "Enter n: ";
    cin >> n;

    sum = 0;

    for(int i=1; i<=n ; i++)
    {
        sum = sum + (1/(double)i);
        cout << "1/" << i << " + ";
    }

    cout << endl << "Sum of Harmonic series: " << sum << endl;

    return 0;
}

