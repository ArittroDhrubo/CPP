#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,turn;
    turn = 0;
    cout << "Enter number: ";
    cin >> num;

    for(int i=2; i<=num/2 ; i++)
    {
       if(num%i == 0)
       {
           turn++;
           break;
       }
    }

    if(turn == 0 && num != 1)
    {
        cout << num << " is a prime number." << endl;
    }
    else{
        cout << num << " is not a prime number." << endl;
    }

    return 0;

}

