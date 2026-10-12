#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<iomanip>
using namespace std;

int Addition(int,int); //Function Prototype Declaration
int Subtraction(int,int); //Function Prototype Declaration
int Multiplication(int,int); //Function Prototype Declaration
double Division(int,int); //Function Prototype Declaration

int main(void)
{
    cout << "Let's Start.........................." << endl;

    int a,b,sub,mul;

    a = 15;
    b = 30;

    cout << Addition(10,20) << endl;
    sub = Subtraction(a,b);
    cout << sub << endl;
    mul = Multiplication(a,6);
    cout << mul << endl;
    cout << Division(b,6) << endl;

    getch();

    return 0;
}

int Addition(int a,int b) //Function Definition
{
    int sum;
    sum = a+b;
    return sum;
}

int Subtraction(int a,int b) //Function Definition
{
    int sub;
    sub = a-b;
    return sub;
}

int Multiplication(int a,int b) //Function Definition
{
    int mul;
    mul = a*b;
    return mul;
}

double Division(int a,int b) //Function Definition
{
    double div;
    div = (double)a/b;
    return div;
}



