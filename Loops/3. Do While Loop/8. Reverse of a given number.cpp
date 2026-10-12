#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,rem;

    cout << "Enter Number: ";
    cin >> num;

    cout << "Reverse Number: ";

    do{
        rem = num%10;
        cout << rem;
        num = num/10;

    }while(num != 0);

    getch();

    return 0;
}





