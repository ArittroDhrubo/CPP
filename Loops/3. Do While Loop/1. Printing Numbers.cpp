#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n;

    cout << "Enter Limit: ";
    cin >> n;

    int i = 1;
    do{

        cout << i << " ";

    i++;
    }while(i <= n);

    cout << endl;

    i = n;

    do{

        cout << i << " ";

    i--;
    }while(i >= 1);


    return 0;
}
