#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,cou;

    cout << "Enter Number: ";
    cin >> num;

    do{

        num /= 10;
        cou++;

    }while(num != 0);

    cout << "Total Digits: " << cou << endl;

    getch();

    return 0;
}




