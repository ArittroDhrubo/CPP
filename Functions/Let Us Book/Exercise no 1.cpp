#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int check(int);

int main(void)
{
    int i = 4, c;
    c = check(i);

    cout << c << endl;

    return 0;
}

int check(int a)
{
    if(a>=45)
    {
        return (100);
    }
    else
    {
        return(10*10);
    }
}
