#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int n,maxn,minn;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter arr[" << i <<"]: ";
        cin >> arr[i];
    }

    maxn = arr[0];
    minn = arr[0];

    for(int i=1; i<n ; i++)
    {
        if(maxn < arr[i])
        {
            maxn = arr[i];
        }
        if(minn > arr[i])
        {
            minn = arr[i];
        }
    }

    cout << "Maximum Number: " << maxn << endl;
    cout << "Minimum Number: " << minn << endl;

    getch();
    return 0;
}




