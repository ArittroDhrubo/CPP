#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(void)
{
    int a,b,c;

    //a=32, b=64;


    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    c = a & b;

    cout << "c: " << c << endl;

    c = a | b;

    cout << "c: " << c << endl;

    c = a ^ b;

    cout << "c: " << c << endl;

    c = a >> 2;

    cout << "c: " << c << endl;

    c = b << 3;

    cout << "c: " << c << endl;

    getch();

    return 0;
}
