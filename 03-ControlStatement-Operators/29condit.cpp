/*
The Conditional Operator: ?:

-> the general form

    expr1 ? expr2 : expr3

    if expr1 is true, then the value of whole conditional expression is the value of expr2. Otherwise, the value of whole expression is expr3
*/

// condit.cpp  -- using the conditional operator

#include <iostream>

int main()
{
    using namespace std;

    int a, b;
    cout << "Enter two integer: ";
    cin >> a >> b;

    cout << "The Larger of " << a << " and " << b;

    int c = a > b ? a : b; // c = a if a>b, else c = b

    cout << " is " << c << endl;

    return 0;
}