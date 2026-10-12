#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int number, product;

    cout << "Enter Number: ";
    cin >> number;

    product = 1;

    int i = 1;

    while(i<=10)
    {
        cout << number << " * " << i << " = ";
        product = number * i;
        cout << product << endl;
        i++;
    }

    return 0;
}


