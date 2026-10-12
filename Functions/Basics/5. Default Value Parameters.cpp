#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<iomanip>
using namespace std;

void display(int a, int b=100)
{
    cout << a << endl;
    cout << b << endl;
}

int main(void)
{
    display(1);
    display(30);
    display(5,10);

    getch();

    return 0;
}

