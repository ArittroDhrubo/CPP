#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{

    int arr[2][3];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "Enter arr[" << i <<"][" << j << "]: ";
        cin >> arr[i][j];
        }
    }

    cout << "Printing the Matrix: " << endl << endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "Enter arr[" << i <<"][" << j << "]: ";
        cout << arr[i][j] << endl;
        }
    }


    getch();
    return 0;
}








