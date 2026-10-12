#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;

int main(void)
{
    int x = 5;

    //x--;

    x= -x;

    cout << x << endl;



    cout << ++x << endl;

    int y = x--;

    cout << x << endl;
    cout << y << endl;

    y = --x;
    cout << x << endl;
    cout << y << endl;

    y++;

    x=y;
    cout << x-- << endl;
    cout << y << endl;
    cout << x << endl;

    x += y;
    cout << x << endl;

    x %= 4;
    cout << x << endl;


    return 0;
}
