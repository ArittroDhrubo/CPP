#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include<string>
using namespace std;

int main(void)
{
    string name,surname,fullname,uniname,id;

    cout << "Enter Name: ";
    getline(cin,name);

    cout << "Enter Surname: ";
    getline(cin,surname);

    cout << "Enter University Name: ";
    getline(cin,uniname);

    cout << "Enter ID: ";
    getline(cin,id);

    cout << "Name: " << name << endl;

    fullname = name + surname;

    cout << "Full Name: " << fullname << endl;

    cout << "University Name: " << uniname << endl;

    cout << "ID: " << id << endl;

    int len = fullname.size();

    cout << "Length: " << len << endl;

    name = fullname;

    cout << "Name: " << name << endl;

    getch();

    return 0;
}

