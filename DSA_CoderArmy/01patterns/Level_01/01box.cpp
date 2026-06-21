/*
* Box pattern

*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string m;

    cout << "======  Box pattern printing  ====== \n";
    cout << "Enter a number for Square size of box: ";
    cin >> n;
    cout << "Enter a character like * or anything to print: ";
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " " << m << " ";
        }
        cout << "\n";
        for (int k = 0; k < i + 1; k++)
        {
            cout << " ";
        }
    }

    return 0;
}