#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<iomanip>
using namespace std;

void Addition(int,int); //Function Prototype Declaration
void Subtraction(int,int); //Function Prototype Declaration
void Multiplication(int,int); //Function Prototype Declaration
void Division(int,int); //Function Prototype Declaration

int main(void)
{
    cout << "Let's Start.........................." << endl;

    int a,b;

    a = 15;
    b = 30;

    Addition(10,20);
    Subtraction(a,b);
    Multiplication(12,6);
    Division(1,6);

    getch();

    return 0;
}

void Addition(int a,int b) //Function Definition
{
    int sum;
    sum = a+b;
    cout << "Sum: " << sum << endl;
}

void Subtraction(int a,int b) //Function Definition
{
    int sub;
    sub = a-b;
    cout << "Sub: " << sub << endl;
}

void Multiplication(int a,int b) //Function Definition
{
    int mul;
    mul = a*b;
    cout << "Mul: " << mul << endl;
}

void Division(int a,int b) //Function Definition
{
    double div;
    div = (double)a/b;
    cout << "Div: " << div << endl;
}


