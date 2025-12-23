// formore.cpp -- more looping with for

// factorial of 16

#include <iostream>

const int ArSize = 16; // example of external declaration

int main()
{
    long long factorial[ArSize];

    factorial[1] = factorial[0] = 1LL;

    for (int i = 2; i < ArSize; i++)
        factorial[i] = i * factorial[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorial[i] << std::endl;

    return 0;
}
