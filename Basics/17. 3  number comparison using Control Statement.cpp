#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(void)
{
    int num1,num2,num3,temp;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << "Enter 3rd number: ";
    cin >> num3;

    cout << "Enter temp: ";
    cin >> temp;

    if(temp == 1)
    {

    if(num1 > num2 && num1 > num3)
    {
        cout << num1 << " is the largest number.";
    }
    else if(num2 > num1 && num2 > num3)
    {
        cout << num2 << " is the largest number.";
    }
    else if(num3 > num1 && num3 > num2)
    {
        cout << num3 << " is the largest number.";
    }

    }

    if(temp == 2)
    {

    if(num1 < num2 && num1 < num3)
    {
        cout << num1 << " is the smallest number.";
    }
    else if(num2 < num1 && num2 < num3)
    {
        cout << num2 << " is the smallest number.";
    }
    else if(num3 < num1 && num3 < num2)
    {
        cout << num3 << " is the smallest number.";
    }

    }

    getch();

    return 0;
}
