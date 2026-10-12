#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num;
    cout << "Enter Number of rows: ";
    cin >> num;

    for(int row = 1; row<=num; row++)
    {
        for(int col = 1; col<=num-row; col++)
        {
            cout << " ";
        }
        for(int col = 1; col<=2*row-1; col++)
        {
            cout << row%2;
        }
        cout << endl ;
    }

    for(int row = num-1; row>=1; row--)
    {
        for(int col = 1; col<=num-row; col++)
        {
            cout << " ";
        }
        for(int col = 1; col<=2*row-1; col++)
        {
            cout << row%2;
        }
        cout << endl ;
    }



    return 0;
}























