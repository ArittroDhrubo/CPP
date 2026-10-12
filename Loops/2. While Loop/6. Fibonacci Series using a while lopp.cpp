#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int term,turn,prev,pres;

    cout << "Enter term: ";
    cin >> term;

    turn = 0;
    prev = 0;
    pres = 1;
    int i = 3;

    cout << "Fibonacci Series: " << prev << " " << pres;
    while(i <= term)
    {
        turn = prev + pres;
        prev = pres;
        pres = turn;
        cout << " " << pres;
        i++;
    }

    cout << endl;

    return 0;
}

