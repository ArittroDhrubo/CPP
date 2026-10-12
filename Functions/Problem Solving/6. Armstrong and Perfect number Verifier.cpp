#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int ArmStrongVerifier(int);
int PerfectVerifier(int);

int main(void)
{
    int num,AN,PN;

    cout << "Enter number: ";
    cin >> num;

    AN = ArmStrongVerifier(num);

    if(AN == num)
    {
        cout << num << " is an Armstrong number." << endl;
    }
    else{
        cout << num << " is not an Armstrong number." << endl;
    }

    PN = PerfectVerifier(num);

    if(PN == num)
    {
        cout << num << " is a Perfect number." << endl;
    }
    else{
        cout << num << " is not a Perfect number." << endl;
    }
    return 0;
}

int ArmStrongVerifier(int a)
{
    int sum = 0,rem;

    for(int i = 1; a!=0 ; a=a/10)
    {
        rem = a%10;
        sum += pow(rem,3);
    }

    return sum;
}

int PerfectVerifier(int a)
{
    int sum = 0;

    for(int i = 1; i<=a/2 ; i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }

    return sum;
}







