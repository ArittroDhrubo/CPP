#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int n;

    cout << "Enter Size: ";
    cin >> n;

    int arr[n][n],brr[n][n],counter=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        cout << "Enter arr[" << i <<"][" << j << "]: ";
        cin >> arr[i][j];
        }
    }

    cout << endl << "Main Matrix: " << endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        cout << "Enter brr[" << i <<"][" << j << "]: ";
        cin >> brr[i][j];
        }
    }

    cout << endl << "Main Matrix: " << endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<3; i++)
    {

        for(int j=0; j<3; j++)
        {
            if(arr[i][j] != brr[i][j])
            {
                counter++;
            }
        }
    }

    if(counter == 0)
    {
        cout << "Matrixs are equal." << endl;
    }
    else
    {
        cout << "Matrixs aren't equal." << endl;
    }


    getch();
    return 0;
}















