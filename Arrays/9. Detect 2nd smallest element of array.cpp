#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int n,i,j,small,small2nd;

    cout << "Enter n: ";
    cin >> n;

    int arr[10];

    for(int i=0; i<n; i++)
    {
        cout << "Enter arr[" << i <<"]: ";
        cin >> arr[i];
    }

    small = arr[0];

    for(i = 0; i<n; i++)
    {
        if(small > arr[i])
        {
            small = arr[i];
            j = i;
        }
    }

    small2nd = arr[0];

    for(int i=0; i<n; i++)
    {
        if(i==j)
        {
            continue;
        }
        else{
            if(small2nd > arr[i])
            {
                small2nd = arr[i];
            }
        }
    }

    cout << "Smallest Number: " << small << endl;

    cout << "2nd Smallest Number: " << small2nd << endl;

    getch();
    return 0;
}








