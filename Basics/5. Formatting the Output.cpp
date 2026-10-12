#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(void)
{
    /*
    //int num1, num2;
    double num1, num2;
    double sum, sub, mul, div;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(1);

    sum = num1 + num2 ;
    cout <<setw(20) <<"Sum: " << sum;
    cout << endl;

    sub = num1 - num2 ;
    cout <<setw(20) <<"Sub: " << sub;
    cout << endl;

    mul = num1 * num2 ;
    cout <<setw(20) <<"Mul: " << mul;
    cout << endl;

    //div = (double)num1 / num2 ;
    div = num1 / num2 ;
    cout <<setw(20) <<"Div: " <<div ;
    cout << endl;


    getch();
    return 0; */

    //int num1, num2;
    double num1, num2;
    double sum, sub, mul, div;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << showpoint;
    //cout << fixed;
    cout << setprecision(5);

    sum = num1 + num2 ;
    cout <<"Sum: " << sum;
    cout << endl;

    cout << noshowpoint;

    sub = num1 - num2 ;
    cout <<setw(20) <<"Sub: " << sub;
    cout << endl;

    cout << showpoint;

    mul = num1 * num2 ;
    cout <<setw(20) <<"Mul: " << mul;
    cout << endl;

    //cout << noshowpoint;

    //div = (double)num1 / num2 ;
    div = num1 / num2 ;
    cout <<setw(20) <<"Div: " <<div ;
    cout << endl;


    getch();
    return 0;
}
