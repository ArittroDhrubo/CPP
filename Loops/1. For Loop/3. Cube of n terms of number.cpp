#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;

int main(void)
{
    int n,cube;
    cout << "Enter n: ";
    cin >> n;
    cube = 1;
    for(int i=1; i<=n; i++)
    {
       cube = pow(i,3);
       cout << "Cube of " << i << " is: "<< cube << endl;
    }

    getch();
    return 0;
}
