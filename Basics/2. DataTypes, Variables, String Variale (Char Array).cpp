#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{
    double num1 = 10.001;
    int num2 = 10;

    cout << "Number 1: " << num1 << endl <<"Number 2: " <<num2 <<endl;

    char ch1;
    ch1 = 'A';
    char name[20] = "Arittro Dhrubo";

    cout << "Character 1: " << ch1 << endl <<"Character 2: " <<name <<endl;

    double res;

    res = num1 + num2;

    cout << "Result: " << res << endl;

    getch();
    return 0;
}
