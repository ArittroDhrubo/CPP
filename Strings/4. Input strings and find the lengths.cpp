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

    int len = strlen(name);

    cout << "Length of name: " << len << endl;

    getch();

    return 0;
}

