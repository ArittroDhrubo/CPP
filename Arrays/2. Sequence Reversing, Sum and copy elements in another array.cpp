#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int arr[5],sec[5],sum=0;

    for(int i=0; i<5; i++)
    {
        cout << "Enter arr[" << i <<"]: ";
        cin >> arr[i];
        sec[i] = arr[i];
        sum = sum + arr[i];
    }

    for(int i=0; i<5; i++)
    {
         cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Reversing Order........................." << endl;

    for(int i=4; i>=0; i--)
    {
         cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Sum: " << sum << endl;

    for(int i=0; i<5; i++)
    {
        cout << "Enter sec[" << i <<"]: " << sec[i] << endl;
    }

    getch();
    return 0;
}

