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

        for(int j=0; j<3; j++)
        {
            if(j>i)
            {
                arr[i][j] = 0;
            }
        }
    }

    cout << endl << "Upper Triangular Matrix: " << endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    getch();
    return 0;
}













