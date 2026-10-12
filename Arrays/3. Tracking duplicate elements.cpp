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

    for(int i=0 ; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                ctr++;
            }

        }
    }

    cout << endl << "Number of Duplicate elements: " << ctr << endl;

    getch();
    return 0;
}


