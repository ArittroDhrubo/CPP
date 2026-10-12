#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,sum,avg,cou;
    sum = 0;
    cou = 0;

    do{
        cout << "Enter Number: ";
        cin >> num;
        if(num < 0)
        {
            break;
        }
        sum += num;
        cou++;

    }while(1);

    avg = sum/cou;

    cout << "Average of the numbers: " << avg << endl;

    getch();

    return 0;
}





