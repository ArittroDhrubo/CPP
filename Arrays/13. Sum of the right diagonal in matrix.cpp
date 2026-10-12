#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{

    int arr[3][3],sum=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout << "Enter arr[" << i <<"][" << j << "]: ";
        cin >> arr[i][j];

        if(i==j)
        {
            sum = sum + arr[i][j];
        }
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

    cout << "Sum of the Diagonal: " << sum << endl;

    getch();
    return 0;
}











