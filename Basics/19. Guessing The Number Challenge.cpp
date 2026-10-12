#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int RandomNumber, GuessNumber;

    while(1)
    {
        cout << "Guess any Number: ";
        cin >> GuessNumber;

        RandomNumber = rand();

        if(RandomNumber == GuessNumber)
        {
            cout << "Congratulations. Your Guess is wright." << endl;
            break;
        }
        else{
            cout << "You are Wrong." << endl;
            cout << "Random Number is: " << RandomNumber << endl;
            cout << "Try Again." << endl << endl;
        }
    }

    getch();

    return 0;
}

