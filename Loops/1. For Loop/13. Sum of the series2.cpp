#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,term,sum;

    cout << "Enter n: ";
    cin >> n;

    sum = 0;
    term = 1;

    for(int i=1; i<=n ; i++)
    {
        sum += term;
       cout << term << " + ";
       term = term *10 +1;
    }

    cout << endl << "Sum of the series: " << sum << endl;

    return 0;
}


