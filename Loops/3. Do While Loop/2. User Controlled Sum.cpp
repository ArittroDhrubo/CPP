#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void)
{
    int num,sum;

    sum = 0;

    do{
        cout << "Enter number: ";
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
           cout << "Negative Number. Not Count" << endl;
           continue;
        }
    }while(1);

    cout << "Sum: " << sum;

    return 0;
}

