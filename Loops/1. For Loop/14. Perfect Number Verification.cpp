#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,sum;
    sum = 0;
    cout << "Enter Number: ";
    cin >> num;

    for(int i=1; i<num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    cout << "Sum: " << sum << endl;

    if(sum == num)
    {
        cout << num << " is a perfect number";
    }
    else
    {
        cout << num << " is not a perfect number";
    }

    return 0;
}
