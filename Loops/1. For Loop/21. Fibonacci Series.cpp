#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,term,prev,pres;
    cout << "Enter term: ";
    cin >> n;

    prev = 0;
    pres = 1;

    cout << "Fibonacci Series: " << prev << " "<< pres;

    for(int i = 3; i<=n; i++)
    {
         term = prev + pres;
         cout << " " << term;
         prev = pres;
         pres = term;
    }

    cout << endl;

    getch();

    return 0;

}




