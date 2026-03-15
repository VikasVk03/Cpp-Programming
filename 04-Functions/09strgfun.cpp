// Function and C-style string

/*

    - Passing a string to function as argument means passing an address. and you can use const to protect a string argument from being altered.

    - Informally, you can say that you're passing a string as an argument, but you're really passin the address of the first character in the string.
    this implies that a string function prototype should use type char * as the type for the formal parameter representing as string.

    - you don't have to pass the size of the string as argument

*/

// below program illustrates that approach with a function that counts the number of times a given character appears in a string.

// strgfun.cpp   -- function with a string argument

#include <iostream>

unsigned int c_in_str(const char *str, char ch);

int main()
{
    using namespace std;

    char mmm[15] = "minimum"; // string in an array

    char *wail = "ululate"; // wail points to string

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;

    return 0;
}

// this function counts the number of ch characters in the string str

unsigned int c_in_str(const char *str, char ch)
{
    unsigned int count = 0;

    while (*str) // quit when *str is '\0'
    {
        if (*str == ch)
            count++;
        str++; // move pointer to next char
    }
    return count;
}
