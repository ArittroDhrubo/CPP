#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int num1, num2;

    double sum, sub, mul, div, rem;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (double)num1 / num2;
    rem = num1 % num2;


    cout << "Sum: " << sum << endl << "Subtraction: " << sub << endl << "Multiplication: " << mul << endl << "Division: " << div << endl << "Remainder: " << rem << endl;

    getch();
    return 0;
}
