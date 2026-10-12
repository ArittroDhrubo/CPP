#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(void)
{
    char ch;

    cout << "Enter Alphabet: ";
    cin >> ch;

    ch = tolower(ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "vowel";
    }
    else
    {
        cout << "Consonant";
    }

    getch();

    return 0;
}
