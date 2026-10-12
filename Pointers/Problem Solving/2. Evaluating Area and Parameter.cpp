#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
using namespace std;
#define PI 3.1416

void AreaPer(int, double *, double *);

int main(void)
{
    int rad;
    double Area,Perimeter;

    cout << "Enter radius: ";
    cin >> rad;

    AreaPer(rad,&Area,&Perimeter);

    cout << "Area of a Circle: " << Area << endl;
    cout << "Perimeter of a Circle: " << Perimeter << endl;

    getch();
    return 0;
}

void AreaPer(int r, double *A, double *P)
{
    *A = PI * pow(r, 2);
    *P = 2 * PI * r;
}

