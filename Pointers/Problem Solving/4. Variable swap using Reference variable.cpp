#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;

void SwapRef(int &,int &);
int main(void)
{
    int a,b;


    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    SwapRef(a,b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    getch();
    return 0;

}
void SwapRef(int &ref1,int &ref2)
{
    int temp;
    temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}






