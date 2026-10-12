#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;

int main(void)
{
    int a;

    int &b=a;

    cout << "Enter a: ";
    cin >> a;

    cout << "Set value of b: ";
    cin >> b;

    cout << "a: " << a;
    getch();
    return 0;

}





