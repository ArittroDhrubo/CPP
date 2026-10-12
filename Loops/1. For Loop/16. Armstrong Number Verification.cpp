#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,sum,rem,temp,term;
    cout << "Enter number: ";
    cin >> num;
    sum=0;
    temp=0;
    temp = num;
    for(int i = num; num != 0 ; num=num/10)
    {
        rem = num%10;
        term = pow(rem, 3);
        sum += term;
    }
    if(sum == temp)
    {
        cout << temp << " is an Armstrong Number." << endl;
    }
    else{
        cout << temp << " is not an Armstrong Number." << endl;
    }
    return 0;

}
