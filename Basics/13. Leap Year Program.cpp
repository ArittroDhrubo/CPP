#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(void)
{
    int year;

    cout << "Enter Year: ";
    cin >> year;

    if(year%4 == 0 && year%100 != 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else if(year%400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    getch();

    return 0;
}
