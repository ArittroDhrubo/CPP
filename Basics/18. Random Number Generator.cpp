#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int RandomNumber;

    for(int i = 1;i<=10;i++)
    {
    RandomNumber = rand()%6;

    cout << RandomNumber << endl;
    }

    getch();

    return 0;
}
