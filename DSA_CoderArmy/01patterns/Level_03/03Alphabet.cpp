/*


*            A
          A  B
       A  B  C
    A  B  C  D
 A  B  C  D  E



*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    char ch;

    cout << "\n Hard Level Alphabet pattern \n";
    cout << "\n Enter a number: ";
    cin >> n;

    cout << "\n Enter an Alphabet character: ";
    cin >> ch;

    cout << "\n Pattern 1 \n\n";
    for (int row = 1; row <= n; row++)
    {
        char chPrint = ch;
        for (int col = 1; col <= n; col++)
        {
            if (col <= n - row)
            {
                cout << "   ";
            }
            else
            {
                cout << " " << chPrint << " ";
                chPrint = chPrint + 1;
            }
        }

        cout << "\n";
    }

    return 0;
}