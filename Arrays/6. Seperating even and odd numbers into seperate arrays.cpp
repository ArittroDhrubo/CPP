#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int n,ctr1=0,ctr2=0;

    cout << "Enter n: ";
    cin >> n;

    int arr[n],even[10],odd[10];

    for(int i=0; i<n; i++)
    {
        cout << "Enter arr[" << i <<"]: ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even[ctr1] = arr[i];
            ctr1++;
        }
        else
        {
            odd[ctr2] = arr[i];
            ctr2++;
        }

    }

    for(int i = 0; i<ctr1; i++)
    {
        cout << "even[" << i <<"]: " << even[i] << endl;
    }

    for(int i = 0; i<ctr2; i++)
    {
        cout << "odd[" << i <<"]: " << odd[i] << endl;
    }

    getch();
    return 0;
}





