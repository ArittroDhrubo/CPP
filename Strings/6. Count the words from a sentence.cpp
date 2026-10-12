#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include<string>
using namespace std;

int main(void)
{
    char Line[15];
    int counter=0;

    cout << "Enter Sentence: ";
    gets(Line);

    cout << "Name: " << Line << endl;

    for(int i=0;Line[i]!=NULL;i++)
    {
        if(Line[i]==' ')
        {
            counter++;
        }
    }

    cout << "Number of Words: " << counter << endl;

    getch();

    return 0;
}



