// Hard Level patterns

/*

*             *
           *  *
        *  *  *
     *  *  *  *
  *  *  *  *  *




*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    char ch;

    cout << "\n Hard Level star pattern \n";
    cout << "\n Enter a number: ";
    cin >> n;

    cout << "\n Enter a character like * or anything: ";
    cin >> ch;

    cout << "\n Pattern 1 \n\n";
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col <= n - row)
                cout << "   ";
            else
                cout << " * ";
        }
        cout << "\n";
    }

    cout << "\n Pattern 2 \n\n";
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col <= n - row)
                cout << "  ";
            else
                cout << " *";
        }
        cout << "\n";
    }

    return 0;
}
