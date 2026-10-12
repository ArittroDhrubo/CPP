#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
using namespace std;
#define PI 3.1416

void SAM(int,int,int,int,int, int *, double *, double *);

int main(void)
{
    int a,b,c,d,e,sum;
    double avg,mul;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    cout << "Enter d: ";
    cin >> d;

    cout << "Enter e: ";
    cin >> e;

    SAM(a,b,c,d,e,&sum,&avg,&mul);

    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Multiplication: " << mul << endl;

    getch();
    return 0;
}

void SAM(int a,int b,int c,int d,int e, int *S, double *A, double *M)
{
    *S = a+b+c+d+e;
    *A = (a+b+c+d+e)/5;
    *M = a*b*c*d*e;
}


