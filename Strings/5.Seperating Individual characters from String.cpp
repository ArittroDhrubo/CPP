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
    char name[8];

    cout << "Enter Name: ";
    cin >> name;

    cout << "Name: " << name << endl;

    for(int i=0;i<8;i++)
    {
        cout << name[i] << " ";
    }

    cout  << endl;

    for(int i=7;i>=0;i--)
    {
        cout << name[i] << " ";
    }

    getch();

    return 0;
}


