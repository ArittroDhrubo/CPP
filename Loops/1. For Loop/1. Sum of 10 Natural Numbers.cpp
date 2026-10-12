#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int sum;
    sum = 0;
    for(int i=1; i<=10; i++)
    {
       sum = sum + i;
       if(i==10)
       {
           break;
       }
       cout << "Sum: " << sum <<endl;
    }

    cout << "Sum of 1st 10 numbers: " << sum <<endl;

    return 0;
}
