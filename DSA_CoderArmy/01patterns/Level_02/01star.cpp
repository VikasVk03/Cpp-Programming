/*



*   *
    *  *
    *  *  *
    *  *  *  *
    *  *  *  *  *

*   *  *  *  *  *
    *  *  *  *
    *  *  *
    *  *
    *

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    char ch;
    cout << "Star Pattern \n";

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a character like * or anything: ";
    cin >> ch;

    cout << "\n Pattern 1 \n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << ch << " ";
        }
        cout << "\n";
    }

    cout << "\n Pattern 2 \n\n";

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << " " << ch << " ";
        }
        cout << "\n";
    }

    cout << "\n Pattern 2 - with different logic \n\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << " " << ch << " ";
        }

        cout << "\n";
    }

    return 0;
}