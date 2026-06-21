/*

* Number box


*   1  1  1  1  1
    2  2  2  2  2
    3  3  3  3  3
    4  4  4  4  4
    5  5  5  5  5

*   1  *  *  *  *
    *  2  *  *  *
    *  *  3  *  *
    *  *  *  4  *
    *  *  *  *  5


*   1  2  3  4  5
    1  2  3  4  5
    1  2  3  4  5
    1  2  3  4  5
    1  2  3  4  5

*   5  4  3  2  1
    5  4  3  2  1
    5  4  3  2  1
    5  4  3  2  1
    5  4  3  2  1

*   1  4  9  16  25
    1  4  9  16  25
    1  4  9  16  25
    1  4  9  16  25
    1  4  9  16  25

*   1  8  27  64  125
    1  8  27  64  125
    1  8  27  64  125
    1  8  27  64  125
    1  8  27  64  125


*   1       2       3       4       5
    6       7       8       9       10
    11      12      13      14      15
    16      17      18      19      20
    21      22      23      24      25
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Printing numbers in row column matrix \n";
    cout << "Enter the size or last number to print: ";
    cin >> n;
    cout << "\n Number Pattern 1 \n \n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "\t" << i;
        }
        cout << "\n";
    }

    cout << "\n Number Pattern 2 \n \n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                cout << " " << i << " ";
            else
                cout << " * ";
        }
        cout << "\n";
    }

    cout << "\n Number Pattern 3 \n \n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " " << j << " ";
        }
        cout << '\n';
    }

    cout << "\n Number pattern 4 \n \n";

    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > 0; j--)
        {
            cout << " " << j << " ";
        }

        cout << "\n";
    }

    cout << "\n Number Pattern 5 \n \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " " << j * j << " ";
        }

        cout << "\n";
    }

    cout << "\n Number Pattern 7 \n \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " " << j * j * j << " ";
        }
        cout << "\n";
    }
    cout << "\n Number Pattern 8 \n \n";

    int numb = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\t" << numb;
            numb = numb + 1;
        }
        cout << "\n";
    }

    cout << "\n Same 8th pattern without using variable \n\n";

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << "\t" << (row - 1) * 5 + col;
        }
        cout << "\n";
    }

    // 5 x 1 = 5

    // product

    /*  cout << "\n Table printing 1 to 10 \n \n";
     for (int n = 1; n <= 10; n++)
     {
         for (int i = 1; i <= 10; i++)
         {
            cout << n << " x " << i << " = " << n * i << '\n';
         }

         cout << "\n";
     } */

    return 0;
}
