/*


*   a
    b  b
    c  c  c
    d  d  d  d
    e  e  e  e  e


*   a
    a  b
    a  b  c
    a  b  c  d
    a  b  c  d  e



*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    char ch;

    cout << "Alphabet Pattern \n";
    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter a Character like a or b or anything: ";
    cin >> ch;

    cout << "\n Pattern 1 \n\n";

    for (int i = 1; i <= n; i++)
    {
        char chPrint = ch + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << " " << chPrint << " ";
        }

        cout << "\n";
    }

    cout << "\n Pattern 1 \n\n";

    for (int i = 1; i <= n; i++)
    {
        char charPrint = ch;

        for (int j = 1; j <= i; j++)
        {
            cout << " " << charPrint << " ";
            charPrint = charPrint + 1;
        }
        cout << "\n";
    }

    return 0;
}