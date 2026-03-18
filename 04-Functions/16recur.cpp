// ** Recursion - Function calling itself.

// Recursion with a Single Recursive call
/*

    - if a recursive function calls itself, then the newly called function calls itself and so on, ad infinitum unless the code includes something to terminate the chain of calls.


    void recurs(argumentList)
    {
        statement1
        if (test )
            recurs(arguments)
        statement2
    }

*/

// recur.cpp  -- using recursion

#include <iostream>

void countdown(int n);

int main()
{
    countdown(4); // call the recursive function
    return 0;
}

void countdown(int n)
{
    using namespace std;

    cout << "Counting down..." << n << endl;

    if (n > 0)
        countdown(n - 1); // function calls itself
    cout << n << ": Kaboom!\n";
}
