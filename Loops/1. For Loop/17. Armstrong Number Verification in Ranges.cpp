#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int minr,maxr,rem,sum,temp,term;

    cout << "Enter Starting Number: ";
    cin >> minr;

    cout << "Enter Last Number: ";
    cin >> maxr;

    for(int i=minr; i<=maxr ; i++)
    {
        temp = i;
        sum = 0;
        for(int j=temp; temp!=0; temp=temp/10)
        {
            rem = temp%10;
            term = pow(rem, 3);
            sum += term;
        }

        if(sum == i)
        {
            cout << i << " is an Armstrong Number." << endl;
        }
    }
    return 0;

}

