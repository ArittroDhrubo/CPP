#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{
    int num1, num2;

    double num3;

    char ch1;

    char name[20];

    cout <<"Enter 1st integer number: ";
    cin >> num1;

    cout <<"Enter 2nd interger number: ";
    cin >> num2;

    cout <<"Enter 1st double number: ";
    cin >> num3;

    cout << "1st integer number: " <<num1 <<endl << "2nd integer number: " <<num2 <<endl <<"1st double number: " <<num3 <<endl;

    double res;

    res = num1 + (int)num3;

    cout <<"Result: " <<res <<endl;

    cout <<"Enter 1st character: ";
    cin >> ch1;

    cout <<"Enter Your Name: ";
    cin >> name;

    cout <<"Character 1: " <<ch1 <<endl <<"Your Name: " <<name <<endl;



    getch();
    return 0;
}
