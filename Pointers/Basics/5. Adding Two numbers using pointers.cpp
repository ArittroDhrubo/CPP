#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;

int main(void)
{
    int a,b,*ptr1,*ptr2,sum;
    ptr1 = NULL;
    ptr2 = NULL;

    ptr1 = &a;
    ptr2 = &b;


    cout <<"Enter a: ";
    cin >> a;

    cout <<"Enter b: ";
    cin >> b;

    sum = *ptr1 + *ptr2 ;

    cout <<"Sum: " << sum << endl;

    getch();
    return 0;

}




