#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,sum;
    sum = 0;
    while(1)
    {
        cout << "Enter Number: ";
        cin >> num;

        if(num == 0)
        {
            break;
        }
        else if(num > 0)
        {
            sum += num;
        }
        else
        {
            cout << "Negative number. Can't Count." << endl;
            continue;
        }
    }

    cout << endl << "Sum: " << sum;

    return 0;
}
