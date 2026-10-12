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
        for(int col = 1; col<=num; col++)
        {
            if(row == num || col == 1 || row == col)
            cout << "*";
            else
            cout << " ";
        }
        cout << endl ;
    }



    return 0;
}

























