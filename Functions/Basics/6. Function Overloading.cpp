#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<iomanip>
using namespace std;

void Addition(int,int); //Function Prototype Declaration
void Addition(int,int,int); //Function Prototype Declaration
int Addition(int,int,int,int); //Function Prototype Declaration

int main(void)
{
    int a,b,c;

    a = 15;
    b = 30;
    c = 45;

    Addition(a,b);
    Addition(a,b,c);
    cout << Addition(a,b,c,10) << endl;

    getch();

    return 0;
}

void Addition(int a,int b) //Function Definition
{
    int sum;
    sum = a+b;
    cout << "Sum: " << sum << endl;
}

void Addition(int a,int b,int c) //Function Definition
{
    int sum;
    sum = a+b+c;
    cout << "Sum: " << sum << endl;
}

int Addition(int a,int b,int c,int d) //Function Definition
{
    int sum;
    sum = a+b+c+d;
    return sum;
}


