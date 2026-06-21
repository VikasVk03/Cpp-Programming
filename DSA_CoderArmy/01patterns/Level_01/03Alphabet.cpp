/*

*   Alphabet Box

*   a  a  a  a  a
    b  b  b  b  b
    c  c  c  c  c
    d  d  d  d  d
    e  e  e  e  e

*   a  b  c  d  e
    a  b  c  d  e
    a  b  c  d  e
    a  b  c  d  e
    a  b  c  d  e

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    int n;

    cout << "Printing Alphabet pattern \n";
    cout << "Enter a Alphabet character: ";
    cin >> ch;
    cout << "Enter a number: ";
    cin >> n;

    char name = ch;

    cout << "\n Alphabet Pattern 1 \n\n";
    for (int i = ch; i < ch + n; i++)
    {
        for (int j = ch; j < ch + n; j++)
        {

            cout << " " << name << " ";
        }
        name = name + 1;

        cout << "\n";
    }

    name = ch;
    cout << "\n Alphabet Pattern 2 \n\n";
    for (int i = ch; i < ch + n; i++)
    {
        for (int j = ch; j < ch + n; j++)
        {
            cout << " " << name << " ";
            name = name + 1;
        }
        name = ch;

        cout << "\n";
    }

    return 0;
}
