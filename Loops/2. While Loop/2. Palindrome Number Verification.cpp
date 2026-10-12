#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,rem,term,temp;
    term = 0;
    cout << "Enter Number: ";
    cin >> num;
    temp = num;
    while(num != 0)
    {
        rem = num%10;
        term = (term*10) + rem;
        num = num/10;
    }

    if(term == temp)
    {
        cout << temp << " is a Palindrome Number." << endl;
    }
    else
    {
        cout << temp << " is not a Palindrome Number." << endl;
    }

    return 0;

}



