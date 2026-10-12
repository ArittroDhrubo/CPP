#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

/*int main(void)
{
    int num1, num2;

    cout << "Enter 1st Number: ";
    cin >> num1;

    cout << "Enter 2nd Number: ";
    cin >> num2;

    int minm = (num1 < num2) ? num1 : num2;

    cout << minm << " is the small number.";

    getch();

    return 0;
}*/

int main(void)
{
    int num1, num2;

    cout << "Enter 1st Number: ";
    cin >> num1;

    cout << "Enter 2nd Number: ";
    cin >> num2;

    (num1%2 == 0) ? cout << num1 << " is an even number" << endl : cout << num1 << " is an odd number" << endl;

    (num2%4 == 0) ? cout << num2 << " is divisible by 4" << endl : cout << num2 << " is not divisible by 4" << endl;

    getch();

    return 0;
}
