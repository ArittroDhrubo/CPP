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

    char surname[10] = " saha";

    cout << "Enter Name: ";
    cin >> name;

    //cout << "Enter SurName: ";
    //cin >> surname;

    int len = strlen(name);

    cout << "Length of name: " << len << endl;

    strcat(name,surname);

    cout << "Full Name: " << name << endl;

    strcpy(surname, name);

    cout << "Full Name: " << surname << endl;

    strupr(surname);

    cout << "Full Name: " << surname << endl;

    strlwr(surname);

    cout << "Full Name: " << surname << endl;

    getch();

    return 0;
}
