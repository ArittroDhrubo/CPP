#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
using namespace std;
#define PI 3.1416

void AVPER(double,double,double,double *,double *);

int main(void)
{
    double MAT,EEE,CSE,avg,per;

    cout << "Enter MAT: ";
    cin >> MAT;

    cout << "Enter EEE: ";
    cin >> EEE;

    cout << "Enter CSE: ";
    cin >> CSE;

    AVPER(MAT,EEE,CSE,&avg,&per);

    cout << "Average: " << avg << endl;
    cout << "Percentage: " << per << "%" << endl;

    getch();
    return 0;
}

void AVPER(double M,double E,double C, double *a, double *p)
{
    *a = (M+E+C)/ 3;
    *p = ((M+E+C)/300.00) * 100.00;
}



