#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(void)
{
    double C,F,K,CelT,FarT,KelT;

    cout << "Enter Celcious,Farenheit and kelvin Value: ";
    cin >> C >> F >> K;

    cout <<"Celcious value: " << C <<endl <<"Farenheit value: " << F <<endl <<"Kelvin value: " << K <<endl;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    FarT = (1.8 * C) + 32;
    cout <<"Farenheit Temperature: " << FarT << endl;

    CelT = (F - 32) / 1.8;
    cout <<"Celcious Temperature: " << CelT << endl;

    KelT = (273 + C);
    cout <<"Kelvin Temperature: " << KelT << endl;

    CelT = KelT -273;
    cout <<"Celcious Temperature: " << CelT << endl;

    getch();
    return 0;
}
