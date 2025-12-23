// num_test.cpp  -- use numeric test in for loop

// An test-expression with a value of 0 is converted to the bool value false and loop terminates

// if the test-expression evaluate to non-zero value, it is type cast to bool value true and the loop continues.

// in below example when i evaluates to 0 (type caste to bool false) it stops after decrementing

// loop performs initialization just once

// below if user input 5 for limit, it set in for loop only once and updated value is tested in expression only and it (limit) remains constant
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter the starting countdown value: ";
    int limits;
    cin >> limits;

    int i;
    for (i = limits; i; i--) // quite when i is 0
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << "\n";

    return 0;
}