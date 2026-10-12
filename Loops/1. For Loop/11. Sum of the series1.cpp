#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int x,n;
    double term,sum;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    term = 0;
    sum = 0;

    for(int i=1; i<=n ; i++)
    {
        if(i == 1)
        {
           term += x;
           sum += term;
        }

        else if(i%2 == 0)
        {
            term = -pow(x, (2*i-1));
            sum += term;
        }
        else if(i%2 != 0)
        {
            term = pow(x, (2*i-1));
            sum += term;
        }

        cout << term << endl;
    }

    cout << endl << "Sum of the Series: " << sum << endl;

    return 0;
}

