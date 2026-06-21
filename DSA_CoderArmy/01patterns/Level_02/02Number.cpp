/*

*   1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*   1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

*   1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1

*   1  2  3  4  5
    1  2  3  4
    1  2  3
    1  2
    1

*   5       4       3       2       1
    6       5       4       3       2
    7       6       5       4       3
    8       7       6       5       4
    9       8       7       6       5
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Number Pattern \n";

    cout << "Enter a number: ";
    cin >> n;

    cout << "\n Pattern 1 \n\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }

        cout << "\n";
    }

    cout << "\n Pattern 2 \n\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << i;
        }

        cout << "\n";
    }

    cout << "\n Pattern 3 \n\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << " " << j;
        }

        cout << "\n";
    }

    cout << "\n Patter 4 \n\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " " << j << " ";
        }

        cout << "\n";
    }

    cout << "\n Pattern 5  \n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j <= n; j++)
        {
            cout << " " << j << " ";
        }
        cout << "\n";
    }

    cout << "\n Pattern 6  \n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << " " << j << " ";
        }

        cout << "\n";
    }

    cout << "\n Pattern 7  \n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << " " << j << " ";
        }
        cout << "\n";
    }

    cout << "\n Pattern 8  \n\n";
    for (int row = 1; row <= n; row++)
    {
        for (int col = n; col >= 1; col--)
        {
            cout << "\t" << col + row - 1;
        }

        cout << "\n";
    }

    return 0;
}