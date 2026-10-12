#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{

    int arr[2][3],brr[2][3],add[2][3],sub[2][3],mul[2][3];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "Enter arr[" << i <<"][" << j << "]: ";
        cin >> arr[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "Enter brr[" << i <<"][" << j << "]: ";
        cin >> brr[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            add[i][j] = arr[i][j] + brr[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            sub[i][j] = arr[i][j] - brr[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            mul[i][j] = arr[i][j] * brr[i][j];
        }
    }

    cout << "Printing the Matrix: " << endl << endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "add[" << i <<"][" << j << "]: ";
        cout << add[i][j] << endl;
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "sub[" << i <<"][" << j << "]: ";
        cout << sub[i][j] << endl;
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "mul[" << i <<"][" << j << "]: ";
        cout << mul[i][j] << endl;
        }
    }


    getch();
    return 0;
}









