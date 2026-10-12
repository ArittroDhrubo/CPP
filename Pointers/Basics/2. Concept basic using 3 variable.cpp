#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;

int main(void)
{
    int i,*j,**k;
    j = NULL;
    k = NULL;
    i = 156;
    j = &i;
    k = &j;

    cout <<"Value of i: " << i << endl;
    cout <<"Address of i: " << &i << endl;
    cout <<"Value of j: " << j << endl;
    cout <<"Address of j: " << &j << endl;
    cout <<"Value of k: " << k << endl;
    cout <<"Address of k: " << &k << endl;
    cout <<"Accessed Value of Pointer Address in j: " << *j << endl;
    cout <<"Accessed Value of Pointer Address in j: " << *(&i) << endl;
    cout <<"Accessed Value of Pointer Address in k: " << *k << endl;
    cout <<"Accessed Value of Pointer Address in j: " << *(&j) << endl;
    cout <<"Accessed Value of Pointer Address in k defines value of i: " << **k << endl;
    **k = 73;
    cout <<"Value of i: " << i << endl;

    getch();
    return 0;

}

