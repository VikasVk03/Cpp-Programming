// The if statement

// The if comes in two forms: if and if else.

/*

-> syntax

    if(test-expr){  // executes only if evaluates to true , otherwise skips
        statement(s)
    }

*/

// if.cpp -- using the if statement

// ues cin.get(char) in a while loop to read the character and then use an if statement to identify and count space characters.

// using the period (.) to recognize the end of the statement

#include <iostream>

int main()
{
    using std::cin;
    using std::cout;

    char ch;
    int space = 0;
    int total = 0;

    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
            ++space;
        ++total;
        cin.get(ch);
    }

    cout << space << " spaces, " << total;
    cout << " characters total in sentence\n";

    return 0;
}
