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

    for(int row = 0; row<num; row++)
    {
        i=1;
        for(int col = 0; col<=num-(row+1); col++)
        {
           cout << " ";
        }

        for(int col = 0; col<row+1; col++)
        {
           cout << i << " ";
           i = i*(row-col)/(col+1);
        }

        cout << endl;

    }



    return 0;
}


























