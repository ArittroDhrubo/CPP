#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{

    int arr[3][3],sum=0,m,n;

    cout << "Enter Size: ";
    cin >> n;

    m=n;

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
        m=m-1;
        for(int j=0; j<n; j++)
        {
            if(j==m)
            {
                sum += arr[i][j];
            }
        }
    }


    cout << "Sum of the Diagonal: " << sum << endl;

    getch();
    return 0;
}












