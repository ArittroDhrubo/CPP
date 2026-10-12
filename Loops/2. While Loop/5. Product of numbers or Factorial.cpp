#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int i,product;

    product = 1;
    i = 1;

    while(i<=5)
    {
        cout << "Current Number: " << i << endl;
        product = product *i;
        cout << "Current product: " << product << endl;
        i++;
    }

    return 0;
}

