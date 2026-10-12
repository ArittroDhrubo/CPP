#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(void)
{
    int a;
    float b;
    double c;
    char cg;

    int d = sizeof(a);
    int e = sizeof(b);
    int f = sizeof(c);
    int g = sizeof(cg);

    double sum;

    sum = (c=20.5,a=10,sum=c+a);

    cout << d << endl << e << endl<< f << endl << g << endl;

    cout <<"Sum: " << sum;
    return 0;
}
