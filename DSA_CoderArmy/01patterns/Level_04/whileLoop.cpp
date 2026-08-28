// while loop

#include <iostream>

int main()
{
    using namespace std;

    int n = 10003;

    while (n > 6)
    {
        int sum = 0;
        while (n > 0)
        {
            int lastDigit = n % 10;
            sum += lastDigit * lastDigit;
            n = n / 10;
        }
        n = sum;
    }

    if (n == 1)
        cout << true << "\n";
    else
        cout << false << "\n";

    return 0;
}