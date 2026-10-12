#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int n,pos,i;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter arr[" << i <<"]: ";
        cin >> arr[i];
    }

    cout << "Enter the index you want to delete: ";
    cin >> pos;

    for(i = 0; i!=pos-1; i++)
    {
        i++;
    }

    while(i<n)
    {
        arr[i] = arr[i+1];
        i++;
    }
    n--;

    for(int i=0; i<n; i++)
    {
        cout << "arr[" << i <<"]: " << arr[i] << endl;
    }
    getch();
    return 0;
}






