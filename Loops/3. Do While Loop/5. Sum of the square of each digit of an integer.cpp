#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,sum,sqr,rem;
    sum = 0;

    cout << "Enter Number: ";
    cin >> num;

    do{
        rem = num%10;
        sqr = pow(rem,2);
        sum += sqr;
        num = num/10;

    }while(num != 0);

    cout << "Sum of the square of each digits of the number: " << sum << endl;

    getch();

    return 0;
}




