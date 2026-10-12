#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;

int main(void)
{
    int m,*ptr1;
    double fx, *ptr2;
    char ch, *ptr3;
    ptr1 = NULL;
    ptr2 = NULL;
    ptr3 = NULL;

    m = 929;
    fx = 567.987;
    ch = 'B';

    ptr1 = &m;
    ptr2 = &fx;
    ptr3 = &ch;

    cout <<"m: " << m << endl;
    cout <<"fx: " << fx << endl;
    cout <<"ch: " << ch << endl;

    cout <<"Address of m: " << &m << endl;
    cout <<"Address of fx: " << &fx << endl;
    cout <<"Address of ch: " << &ch << endl;

    cout <<"Value at address of m: " << *(&m) << endl;
    cout <<"Value at address of fx: " << *(&fx) << endl;
    cout <<"Value at address of ch: " << *(&ch) << endl;

    cout <<"Address of m: " << ptr1 << endl; //Using only pointer variable
    cout <<"Address of fx: " << ptr2 << endl; //Using only pointer variable
    cout <<"Address of ch: " << ptr3 << endl; //Using only pointer variable

    cout <<"Value at address of m: " << *(ptr1) << endl; //Using only pointer operator
    cout <<"Value at address of fx: " << *(ptr2) << endl; //Using only pointer operator
    cout <<"Value at address of ch: " << *(ptr3) << endl; //Using only pointer operator


    getch();
    return 0;

}



