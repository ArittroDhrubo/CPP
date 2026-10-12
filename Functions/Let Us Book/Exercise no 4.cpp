#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int addmult(int,int);

int main(void)
{
    int i=3,j=4,k,l;

    k = addmult(i,j);
    l = addmult(i,j);

    cout << k << endl;
    cout << l << endl;

    return 0;
}

int addmult(int ii,int jj)
{
    int kk, ll;

    kk = ii + jj;
    ll = ii * jj;

    return (kk,ll);

}



