#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int minr,maxr,rem,term,temp;
    cout << "Enter Stating Number: ";
    cin >> minr;
    cout << "Enter End Number: ";
    cin >> maxr;
    cout << "Palindrome Numbers are: ";

    for(int i=minr; i<=maxr; i++)
    {
        term = 0;
        temp = i;
        while(temp!=0)
        {
            rem = temp%10;
            term = (term*10) + rem;
            temp = temp/10;
        }
        if(term == i)
    {
        cout << i << " ";
    }
    }
    cout << endl;

    getch();

    return 0;

}




