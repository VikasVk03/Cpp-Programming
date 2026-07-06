/*

*            *
          *  *  *
       *  *  *  *  *
    *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *

*  *  *  *  *  *  *  *  *  *
      *  *  *  *  *  *  *
         *  *  *  *  *
            *  *  *
               *




*              *  *  *  *  *  *  *  *
               *  *  *        *  *  *
               *  *              *  *
               *                    *
               *                    *
               *  *              *  *
               *  *  *        *  *  *
               *  *  *  *  *  *  *  *


*              *                          *
               *  *                    *  *
               *  *  *              *  *  *
               *  *  *  *        *  *  *  *
               *  *  *  *  *  *  *  *  *  *
               *  *  *  *        *  *  *  *
               *  *  *              *  *  *
               *  *                    *  *
               *                          *


*                      *
                     *   *
                   *   *   *
                 *   *   *   *
               *   *   *   *   *
               *   *   *   *   *
                 *   *   *   *
                   *   *   *
                     *   *
                       *


*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\n Star Pattern Advance Level \n";
    cout << "\n Enter a number: ";
    cin >> n;

    cout << "\n Pattern 1 \n\n";

    int row, col;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (col <= n - row)
            {
                cout << "   ";
            }
            else
                cout << " * ";
        }

        for (col = 1; col < row; col++)
        {
            cout << " * ";
        }

        cout << "\n";
    }

    row = col = 0;

    cout << "\n Pattern 2 \n";

    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << "   ";
        }

        for (int star = 1; star <= 2 * row - 1; star++)
        {
            cout << " * ";
        }

        cout << "\n";
    }

    cout << "\n Pattern 3 \n";
    for (int row = 1; row <= n; row++)
    {
        // space
        for (int space = 1; space <= row - 1; space++)
        {
            cout << "   ";
        }

        // star
        int totalStar = 2 * (n - row) + 1;
        for (int star = 1; star <= totalStar; star++)
        {
            cout << " * ";
        }

        cout << "\n";
    }

    cout << "\n Pattern 3 - Different Approach \n";
    for (int row = n; row >= 1; row--)
    {
        // space
        for (int col = 1; col <= n - row; col++)
        {
            cout << "   ";
        }

        // star
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << " * ";
        }

        cout << "\n";
    }

    cout << "\n Pattern 4 \n\n";

    for (int row = n; row >= 1; row--)
    {
        for (int star = 1; star <= row; star++)
        {
            cout << " * ";
        }

        for (int space = 1; space <= 2 * n - 2 * row; space++)
        {
            cout << "   ";
        }

        for (int star = 1; star <= row; star++)
        {
            cout << " * ";
        }

        cout << "\n";
    }

    for (int row = 1; row <= n; row++)
    {
        for (int star = 1; star <= row; star++)
        {
            cout << " * ";
        }

        for (int space = 1; space <= 2 * n - 2 * row; space++)
        {
            cout << "   ";
        }

        for (int star = 1; star <= row; star++)
        {
            cout << " * ";
        }

        cout << '\n';
    }

    cout << "\n Pattern 5 \n\n";

    for (int row = 1; row <= n; row++)
    {
        for (int star = 1; star <= row; star++)
        {
            cout << " * ";
        }

        for (int space = 1; space <= 2 * n - 2 * row; space++)
        {
            cout << "   ";
        }

        for (int star = 1; star <= row; star++)
        {
            cout << " * ";
        }
        cout << "\n";
    }

    for (int row = n - 1; row >= 1; row--)
    {
        for (int star = 1; star <= row; star++)
        {
            cout << " * ";
        }

        for (int space = 1; space <= 2 * n - 2 * row; space++)
        {
            cout << "   ";
        }

        for (int star = 1; star <= row; star++)
        {
            cout << " * ";
        }

        cout << "\n";
    }

    cout << "\n Pattern 6 \n";

    // for printing diamond .. reduce one space in space and increase one space after in star so that there will be * printing leaving one block
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  "; // one less space
        }

        for (int star = 1; star <= row; star++)
        {
            cout << " *  "; // one extra space
        }
        cout << "\n";
    }

    for (int row = n; row >= 1; row--)
    {
        for (int space = n - row; space >= 1; space--)
        {
            cout << "  "; // one less space
        }

        for (int star = row; star >= 1; star--)
        {
            cout << " *  "; // one extra space
        }
        cout << "\n";
    }

    return 0;
}