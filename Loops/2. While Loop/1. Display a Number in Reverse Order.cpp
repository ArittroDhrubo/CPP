#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,rem;
    cout << "Enter number: ";
    cin >> num;
    cout << "Reverse Number: ";
    while(num != 0)
    {
        rem = num%10;
        cout << rem;
        num = num/10;
    }
    return 0;

}

