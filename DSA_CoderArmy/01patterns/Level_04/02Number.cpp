/*

*            1
          1  2  1
       1  2  3  2  1
    1  2  3  4  3  2  1
 1  2  3  4  5  4  3  2  1


*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\n Number Pattern Advance Level \n";

    cout << "\n Enter a number: ";
    cin >> n;

    cout << "\n Pattern 1 \n";

    for (int row = 1; row <= n; row++)
    {
        // space
        for (int space = 1; space <= n - row; space++)
        {
            cout << "   ";
        }

        // 1 to row
        for (int col = 1; col <= row; col++)
        {
            cout << " " << col << " ";
        }

        // row -1 to 1
        for (int col = row - 1; col >= 1; col--)
        {
            cout << " " << col << " ";
        }

        cout << '\n';
    }

    return 0;
}