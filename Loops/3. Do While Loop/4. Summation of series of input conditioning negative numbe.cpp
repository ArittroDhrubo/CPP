#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,sum;
    sum = 0;

    do{
         cout << "Enter Number: ";
         cin >> num;


        if(num >= 0)
        {
            sum += num;
        }

        else if(num < 0)
        {
           break;
        }

    }while(1);

    cout << endl << "Sum of the Numbers: " << sum;

    return 0;
}



