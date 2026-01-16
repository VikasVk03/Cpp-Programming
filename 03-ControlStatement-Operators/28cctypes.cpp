/*
The cctype Library of Character Functions

-> The cctype header file, that simplify such tasks as determining
whether a character is an uppercase letter or a digit or punctuation.

for example, the isalpha(ch) function returns a nonzero value if ch is letter an da non-zero value otherwise.
the ispunct(ch) function returns a true value only if ch is punctuation.
*/

// cctype.cpp  -- using the cctype library

#include <iostream>
#include <cctype> // prototype for character functions

int main()
{
    using namespace std;

    cout << "Enter text for analysis, and type @"
            " to terminate input.\n";

    char ch;

    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch); // get first character

    while (ch != '@')
    {
        if (isalpha(ch)) // is it an alphabetic characters?
            chars++;
        else if (isspace(ch)) // is it whitespace character?
            whitespace++;
        else if (isdigit(ch)) // is it digit character?
            digits++;
        else if (ispunct(ch)) // is it punctuation?
            punct++;
        else
            others++;

        cin.get(ch); // get the next character
    }

    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others. \n";

    return 0;
}
