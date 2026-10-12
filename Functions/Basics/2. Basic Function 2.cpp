#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<iomanip>
using namespace std;

void message(); //Function Prototype Declaration
void Italy(); //Function Prototype Declaration
void Spain(); //Function Prototype Declaration
void Germany(); //Function Prototype Declaration

int main(void)
{
    message();
    cout << "Focus on your life." << endl;

    getch();

    return 0;
}

void message() //Function Definition
{
    cout << "She is only my dream." << endl;
    Italy();
}

void Italy() //Function Definition
{
    cout << "Italy might be Married place." << endl;
    Germany();
}

void Germany() //Function Definition
{
    cout << "Germany might be Permanent Address." << endl;
    Spain();
}

void Spain() //Function Definition
{
    cout << "Spain might be Honeymoon Address." << endl;
    Italy();
}

