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

    cout << endl << "The square natural upto 5 terms are: ";
    for(int i=1; i<=n ; i++)
    {
        sum += pow(i,2);

        cout << pow(i,2) << " ";
    }

    cout << endl << "The Sum of Square Natural Number upto 5 terms = " << sum << endl;

    return 0;
}


