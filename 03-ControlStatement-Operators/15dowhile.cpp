// The do while loop.

/*
-> syntax

    do
        body
    while(test-expression)



    do
    {
        code
    } while (condition);

*/

// if you're requesting user input, the program has to obtain the input before testing it.

// dowhile.cpp -- exit_condition loop

#include <iostream>

int main()
{
    using namespace std;

    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite numbers\n";

    do
    {
        cin >> n; // execute body
    } while (n != 7);

    cout << "Yes, 7 is my favorite.\n";

    return 0;
}

/*
The C++11 adds a new form of loop called the range-based for loop.
double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};

for (double x : prices)
{
    x = x * 0.8;
    cout << x << endl;
}

*/
