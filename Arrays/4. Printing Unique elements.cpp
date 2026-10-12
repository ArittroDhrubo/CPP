#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int arr[10],ctr=0;
    int n;

    cout << "Enter n: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "Enter arr[" << i <<"]: ";
        cin >> arr[i];
    }

    cout << "Unique elements: " ;

    for(int i=0 ; i<n; i++)
    {
        ctr = 0;
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
            if(arr[i] == arr[j])
            {
                ctr++;
            }
            }
        }
        if(ctr == 0)
        {
            cout << arr [i] << " ";
        }
    }

    getch();
    return 0;
}



