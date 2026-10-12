#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,cube,sum;

    cout << "Enter Limit: ";
    cin >> n;

    sum = 0;
    int i = 1;

    while(i<=n)
    {
        if(i%2 == 0)
        {
            cube = pow(i,3);
            sum += cube;
        }
        else{
            cout << i << endl;
        }
        i++;
    }

    cout << endl << "Sum of the even Numbers: " << sum << endl;

    return 0;
}



