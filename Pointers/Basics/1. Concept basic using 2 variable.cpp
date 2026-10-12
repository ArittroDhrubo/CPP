#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;

int main(void)
{
    int *numptr,number;
    numptr = NULL;
    number = 10;
    numptr = &number;

    cout <<"Value of Number: " << number << endl;
    cout <<"Address of Number: " << &number << endl;
    cout <<"Value of numptr: " << numptr << endl;
    cout <<"Address of numptr: " << &numptr << endl;
    cout <<"Accessed Value of Pointer Address: " << *numptr << endl;
    cout <<"Accessed Value of Pointer Address: " << *(&number) << endl;
    *numptr = 33;
    cout <<"Accessed Value of Pointer Address: " << *numptr << endl;
    cout <<"Value of Number: " << number << endl;

    getch();
    return 0;

}
