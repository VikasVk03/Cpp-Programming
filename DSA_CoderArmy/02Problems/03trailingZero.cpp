// trailing Zeros in factorial

#include <iostream>

using namespace std;

int main()
{
    cout << "Trailing Zeros in factorial \n";

    int n = 45;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    int trailingZero = 0;
    while (fact)
    {
        int lastDigit = fact % 10;
        if (lastDigit != 0)
            break;
        trailingZero++;
        fact /= 10;
    }

    cout << trailingZero << endl;

    return 0;
}
