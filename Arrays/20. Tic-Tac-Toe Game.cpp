#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int n;

    cout << "Enter Size: ";
    cin >> n;

    char arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        cout << "Enter arr[" << i <<"][" << j << "]: ";
        cin >> arr[i][j];
        }
    }

    cout << endl << "Main Matrix: " << endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    if((arr[0][0] == 'x') && (arr[0][1] == 'x') && (arr[0][2] == 'x') || (arr[1][0] == 'x') && (arr[1][1] == 'x') && (arr[1][2] == 'x')
       || (arr[2][0] == 'x') && (arr[2][1] == 'x') && (arr[2][2] == 'x') || (arr[0][0] == 'x') && (arr[1][1] == 'x') && (arr[2][2] == 'x')
       || (arr[0][0] == 'x') && (arr[1][0] == 'x') && (arr[2][0] == 'x') || (arr[0][1] == 'x') && (arr[1][1] == 'x') && (arr[2][1] == 'x')
       || (arr[0][2] == 'x') && (arr[1][2] == 'x') && (arr[2][2] == 'x') || (arr[0][2] == 'x') && (arr[1][1] == 'x') && (arr[2][0] == 'x'))
    {
        cout << "Tac(X) Wins." << endl;
    }

    else if((arr[0][0] == 'o') && (arr[0][1] == 'o') && (arr[0][2] == 'o') || (arr[1][0] == 'o') && (arr[1][1] == 'o') && (arr[1][2] == 'o')
       || (arr[2][0] == 'o') && (arr[2][1] == 'o') && (arr[2][2] == 'o') || (arr[0][0] == 'o') && (arr[1][1] == 'o') && (arr[2][2] == 'o')
       || (arr[0][0] == 'o') && (arr[1][0] == 'o') && (arr[2][0] == 'o') || (arr[0][1] == 'o') && (arr[1][1] == 'o') && (arr[2][1] == 'o')
       || (arr[0][2] == 'o') && (arr[1][2] == 'o') && (arr[2][2] == 'o') || (arr[0][2] == 'o') && (arr[1][1] == 'o') && (arr[2][0] == 'o'))
    {
        cout << "Toe(O) Wins." << endl;
    }




    getch();
    return 0;
}
















