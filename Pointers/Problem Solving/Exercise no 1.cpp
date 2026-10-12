#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
using namespace std;
#define PI 3.1416

int main(void)
{
    float a;
    float *b,*c;
     a = 13.67;
     b = &a;
     c = b;

    cout << &a << " " << b << " " << c << endl;
    cout << *&a << " " << *(&a) << " " << *b << " " << *c << endl;

    getch();
    return 0;
}

