/*
Logical Expressions

1. The Logical OR operator: ||

*/

// below program uses the || operator in an if statement to check for both uppercase and lowercase versions of a character.

// or.cpp  -- using the logical OR operator

#include <iostream>

int main()
{
    using namespace std;

    cout << "This program may reformat your hard disk\n"
            "and destroy all your data.\n"
            "Do you wish to continue? <y/n>";

    char ch;

    cin >> ch;

    if (ch == 'y' || ch == 'Y')
        cout << "YOur were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wise choice...bye\n";
    else
        cout << "That wasn't a y or n! Apparently you "
                "can't follow\ninstructions, so "
                "I'll trash your disk anyway.\a\a\a\a\n";

    return 0;
}