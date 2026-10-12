#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,i;
    cout << "Enter Number of rows: ";
    cin >> num;

    for(int row = 1; row<=num; row++)
    {
        i=1;
        for(int col = 1; col<=num-row; col++)
        {
           cout << " ";
        }
        for(int col = 1; col<=row; col++)
        {
           cout << col;
        }
        for(int col = row-1; col>= 1; col--)
        {
           cout << i;
           i++;
        }
        cout << endl;

    }



    return 0;
}



























