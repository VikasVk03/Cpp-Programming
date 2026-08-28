/* #include <iostream>
#include <cmath>

using namespace std;

int countDigit(int num);
bool Armstrong(int num, int digits);

int main()
{

    cout << "Check Armstrong Number \n";

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int digits = countDigit(number);

    bool result = Armstrong(number, digits);

    cout << result << endl;

    return 0;
}

int countDigit(int num)
{
    int count = 0;

    while (num)
    {
        count++;
        num /= 10;
    }

    return count;
}

bool Armstrong(int num, int digits)
{

    int n = num, ans = 0, rem;

    while (n)
    {
        rem = n % 10;
        ans = ans + pow(rem, digits);
        n /= 10;
    }

    if (ans == num)
    {
        return 1;
    }
    else
        return 0;
} */

// * Armstrong from 1 to 1000, 1 to 10^9

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout << "Armstrong Number from 1 to 1000" << endl;

    for (int i = 0; i <= 1000; i++)
    {
        int num = i;
        int countDigit = 0;

        while (num)
        {
            countDigit++;
            num /= 10;
        }

        num = i;
        int sum = 0;

        while (num)
        {
            int lastDigit = num % 10;
            sum += pow(lastDigit, countDigit);
            num /= 10;
        }
        num = i;

        if (num == sum)
        {
            cout << num << " ";
        }
    }

    return 0;
}
