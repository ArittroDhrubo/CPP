#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{

    int arr[3][3],rsum[10],csum[10],counter=0;

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
            if((i==j && arr[i][j]!=1) || (i!=j && arr[i][j]!=0))
            {
                counter++;
            }
        }
    }

    if(counter == 0)
    {
        cout << "This is an Identity Matrix." << endl;
    }
    else
    {
        cout << "This is not an Identity Matrix." << endl;
    }


    getch();
    return 0;
}














