#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(void)
{
    char name, Title, Spouse;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Title: ";
    cin >> Title;
    cout << "Enter Spouse Name: ";
    cin >> Spouse;

    if(name == 'G')
    {
        if(Title == 'S' && Spouse == 'T')
        {
            cout << "Pure Madarchod";
        }

        else if(Title == 'S' || Spouse == 'T')
        {
            cout << "Main Suspect";
        }
        else
        {
            cout << "Probably Good. Not Sure";
        }
    }
    else if(name == 'T')
    {
        if(Title == 'S' && Spouse == 'S')
        {
            cout << "Once Rejected";
        }

        else if(Title == 'S' || Spouse == 'S')
        {
            cout << "Playboy of AIUB";
        }
        else
        {
            cout << "Probably Good. Not Sure";
        }
    }
    else{
        cout << "Duniyar sob manusher khobor ki ami jani naki!!";
    }

    return 0;

}


