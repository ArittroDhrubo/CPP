#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{

    int arr[3][3],rsum[10],csum[10];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "Enter arr[" << i <<"][" << j << "]: ";
        cin >> arr[i][j];
        }
    }

    cout << endl << "Main Matrix: " << endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<3; i++)
    {
        rsum[i] = 0;
        for(int j=0; j<3; j++)
        {
            rsum[i] = rsum[i] + arr[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        csum[i] = 0;
        for(int j=0; j<3; j++)
        {
            csum[i] = csum[i] + arr[j][i];
        }
    }

    for(int i=0; i<3; i++)
    {
         cout << "Sum of row-" << i << ": " << rsum[i] << endl;
    }

    for(int i=0; i<3; i++)
    {
        cout << "Sum of col-" << i << ": " << csum[i] << endl;
    }

    getch();
    return 0;
}












