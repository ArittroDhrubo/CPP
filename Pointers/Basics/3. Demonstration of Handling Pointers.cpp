#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;

int main(void)
{
    int m,*ab;
    ab = NULL;

    m = 29;

    cout <<"Value of m: " << m << endl;
    cout <<"Address of m: " << &m << endl;

    ab = &m;
    cout <<"Content of pointer ab: " << *ab << endl;
    cout <<"Address of pointer ab: " << ab << endl;

    m =34;
    cout <<"Address of pointer ab: " << ab << endl;
    cout <<"Content of pointer ab: " << *ab << endl;

    *ab = 7;
    cout <<"Address of pointer ab: " << &m << endl;
    cout <<"Value of m: " << m << endl;

    getch();
    return 0;

}


