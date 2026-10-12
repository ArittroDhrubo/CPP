#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
#include<stdio.h>
using namespace std;

int main(void)
{
    char Password[15];

    char Object[15] = "NSU-ACM-SC";

    cout << "Enter password: ";
    cin >> Password;

    //cout << "Password: " << Password << endl;

    int value = strcmp(Password,Object);

    if(value == 0)
    {
        cout << "Password is correct." << endl;
    }
    else if(value == 1)
    {
        cout << "Password is not correct. Try again........" << endl;
    }

    getch();

    return 0;
}

