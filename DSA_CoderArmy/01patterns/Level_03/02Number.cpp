/*


*        1
       2 2
     3 3 3
   4 4 4 4
 5 5 5 5 5
*        1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5



*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\n Hard Level Number Pattern \n";
    cout << "\n Enter a number: ";
    cin >> n;

    cout << "\n Pattern 1 \n\n";
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col <= n - row)
                cout << "  ";
            else
                cout << " " << row;
        }
        cout << "\n";
    }

    cout << "\n Pattern 2 \n\n";
    for (int row = 1; row <= n; row++)
    {
        int count = 1;
        for (int col = 1; col <= n; col++)
        {
            if (col <= n - row)
            {
                cout << "   ";
            }
            else
            {
                cout << " " << count << " ";
                count = count + 1;
            }
        }

        cout << "\n";
    }

    cout << "\n Pattern 3 \n\n";
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col <= n - row)
                cout << "   ";
            else
                cout << " " << n - col + 1 << " ";
        }
        cout << "\n";
    }

    cout << "\n Pattern 4 \n\n";
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col <= n - row)
                cout << "   ";
            else
                cout << " " << col << " ";
        }
        cout << "\n";
    }

    return 0;
}