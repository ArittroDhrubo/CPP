#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int sume,sumo,lim;

    cout << "Enter Limit: ";
    cin >> lim;

    sume = 0;
    sumo = 0;

    int i = 1;

    do{
        if(i > 0 && i%2 == 0)
        {
            sume += i;
        }

        else if(i > 0 && i%2 != 0)
        {
           sumo += i;
        }
        i++;
    }while(i <= lim);

    cout << endl << "Sum of the Even Numbers: " << sume;
    cout << endl << "Sum of the Odd Numbers: " << sumo;

    return 0;
}


