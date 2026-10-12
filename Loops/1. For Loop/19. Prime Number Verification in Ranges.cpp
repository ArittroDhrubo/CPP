#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int maxr,minr,turn;
    cout << "Enter Starting point: ";
    cin >> minr;

    cout << "Enter End point: ";
    cin >> maxr;

    for(int i=minr; i<=maxr ; i++)
    {
        turn = 0;
        for(int j=2; j <= i/2; j++)
        {
       if(i%j == 0)
       {
           turn++;
           break;
       }
        }
        if(turn == 0 && i != 1)
    {
        cout << i << " is a prime number." << endl;
    }
    }

    return 0;

}


