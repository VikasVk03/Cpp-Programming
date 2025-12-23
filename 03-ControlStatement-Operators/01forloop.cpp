// forloop.cpp  -- introducing the for loop

// for loop syntax

/*
for(initialization; test-expression; update-expression)
    body
*/

// loop performs initialization just once;

// loop sets the stage for a fresh cycle of testing, executing statement and updating the value of i;

// Having more than one statement requires using compound statement or block.

#include <iostream>

int main()
{
    using namespace std;

    int i; // create a counter

    // initialize; test; update
    for (i = 0; i < 5; i++)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop.\n";

    return 0;
}
