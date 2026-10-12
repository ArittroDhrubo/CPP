#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(void)
{
    int num;

    cout << "Enter Mark: ";
    cin >> num;

    if(num >= 93)
    {
        cout << "Your Grade is A" << endl;
    }
    else if(num >= 90)
    {
        cout << "Your Grade is A-" << endl;
    }
    else if(num >= 87)
    {
        cout << "Your Grade is B+" << endl;
    }
    else if(num >= 84)
    {
        cout << "Your Grade is B" << endl;
    }
    else if(num >= 81)
    {
        cout << "Your Grade is B-" << endl;
    }
    else if(num >= 78)
    {
        cout << "Your Grade is C+" << endl;
    }
    else if(num >= 75)
    {
        cout << "Your Grade is C" << endl;
    }
    else if(num >= 72)
    {
        cout << "Your Grade is C-" << endl;
    }
    else if(num >= 69)
    {
        cout << "Your Grade is D+" << endl;
    }
    else if(num >= 66)
    {
        cout << "Your Grade is D" << endl;
    }
    else if(num >= 60)
    {
        cout << "Your Grade is D-" << endl;
    }
    else if(num < 60 && num >=0)
    {
        cout << "Your Grade is F" << endl;
    }
    else
    {
        cout << "Your Grade is I (Incomplete / Invalid)" << endl;
    }


    return 0;
}
