#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,temp,sum;

    sum = 0;

    cout << "Enter total term: ";
    cin >> n;

    temp= n;
    for(int i = 1;i<= 4*n; i=i+4)
    {
        if(i != 37)
        {
        cout << i << " + ";
        }

        else
        {
            cout << i << " ";
        }
         sum += i;
    }

    cout << endl << "Sum: " << sum;

    getch();

    return 0;

}


