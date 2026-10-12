#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(void)
{
    char ch;

    cout << "Enter Alphabet: ";
    cin >> ch;

    ch = toupper(ch);

    switch(ch)
    {
    case 'A' : case 'E':

        cout << "Vowel";
        break;

    case 'I' : case 'O': case 'U':

        cout << "Vowel";
        break;

    default:

        cout << "Consonant";

    }

    getch();

    return 0;
}
