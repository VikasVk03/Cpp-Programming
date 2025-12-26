// while loop

/*
-> syntax

while(test-expr)
    body


executes body till test-expr have non-zero value or test-expr evaluates to false
*/

/*

-> In C++ the for and while loops are essentially equivalent.

--> for loop:

for (init-expression; test-expression; update-expression)
{
    statements
}

--> while loop:

    init-expression;
    while(test-expression)
    {
        statements
        update-expression;
    }

*/

// while.cpp -- introducing the while loop

#include <iostream>

const int ArSize = 20;

int main()
{
    using namespace std;

    char name[ArSize];
    cout << "Your first name, Please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized: \n";

    int i = 0; // start at the begining of string
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }

    return 0;
}
