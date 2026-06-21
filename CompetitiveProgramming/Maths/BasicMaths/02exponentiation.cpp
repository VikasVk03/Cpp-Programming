// * How to take exponents in cpp

// * 1️⃣ Using pow() (most common)

/* #include <iostream>
#include <cmath>

int main()
{
    int a = 2, b = 3;

    std::cout << pow(a, b) << std::endl; // 2^3 = 8, pow(base, exponent)

    // integer result using typecasting

    int result = (int)pow(5, 2.5);
    std::cout << result << std::endl;
    std::cout << pow(5, 2.5) << std::endl;
    return 0;
} */

// * 2️⃣ Using loop (best for integers & competitive programming)

/* #include <iostream>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{

    std::cout << power(5, 6) << std::endl;

    return 0;
} */

/*
    *3️⃣ Fast Exponentiation (VERY important for HFT / CP / Core CS)
    Used when exponent is large
    Time Complexity → O(log n)
*/
/*
#include <iostream>
#include <climits>

long long fastPower(long long base, long long exp)
{
    int result = 1;

    while (exp > 0)
    {
        if (exp % 2 == 1)
            result *= base;

        base *= base;

        exp /= 2;
    }

    return result;
}

// it perfectly works till exp 30 and breaks at 31 due to very hight intermediate value
int main()
{
    std::cout << LONG_LONG_MAX << std::endl;
    std::cout << fastPower(2, 31) << std::endl;

    return 0;
}
 */

/*

* 4️⃣ Modulo Exponentiation (must know)

Used in DSA / CP / Cryptography

*/

#include <iostream>

long long modPower(long long base, long long exp, long long mod)
{
    long long result = 1;

    base %= mod;

    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % mod;

        base = (base * base) % mod;

        exp >>= 1;
    }

    return result;
}
