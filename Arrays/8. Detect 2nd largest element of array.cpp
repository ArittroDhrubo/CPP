#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int n,i,j,large,large2nd;

    cout << "Enter n: ";
    cin >> n;

    int arr[10];

    for(int i=0; i<n; i++)
    {
        cout << "Enter arr[" << i <<"]: ";
        cin >> arr[i];
    }

    large = 0;

    for(i = 0; i<n; i++)
    {
        if(large < arr[i])
        {
            large = arr[i];
            j = i;
        }
    }

    large2nd = 0;

    for(int i=0; i<n; i++)
    {
        if(i==j)
        {
            continue;
        }
        else{
            if(large2nd < arr[i])
            {
                large2nd = arr[i];
            }
        }
    }

    cout << "Largest Number: " << large << endl;

    cout << "2nd Largest Number: " << large2nd << endl;
    getch();
    return 0;
}







