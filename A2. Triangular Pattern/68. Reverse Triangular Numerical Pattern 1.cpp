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

    for(int row = num; row>=1; row--)
    {
        for(int col = 1; col<=num-row; col++)
        {
            cout << " ";
        }
        for(int col = 1; col<=2*row-1; col++)
        {
            cout << col;
        }
        cout << endl ;
    }



    return 0;
}





















