#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int minr,maxr,sum;

    //int ran,sum;

    //cout << "Enter Range: ";
    //cin >> ran;

    cout << "Enter Minimum Range: ";
    cin >> minr;

    cout << "Enter Minimum Range: ";
    cin >> maxr;

    cout << "Perfect Numbers: ";

    for(int i=minr; i<=maxr; i++)
    {
        sum = 0;
        for(int j=1; j<i; j++)
        {
        if(i%j == 0)
        {
            sum += j;
        }
        }
         if(sum == i){
        cout << i << " ";
    }
    }
    return 0;
}

