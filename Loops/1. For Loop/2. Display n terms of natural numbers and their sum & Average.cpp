#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,sum;
    double avg;
    cout << "Enter n: ";
    cin >> n;
    sum = 0;
    for(int i=1; i<=n; i++)
    {
       cout << i << " ";
       sum = sum + i;
       //cout << "Sum: " << sum <<endl;
    }

    cout << endl << "Sum of " << n << " terms of numbers: " << sum <<endl;
    cout << showpoint;
    cout << fixed;
    cout << setprecision(6);
    avg = (double)sum/n;
    cout << "Average: " << avg << endl;

    getch();
    return 0;
}

