// Each operators comes in two varieties

// The prefix version comes before the operand as in ++x.

// The postfix version comes after the operand as in x++.

// plus_one.cpp  -- the increment operator

#include <iostream>

int main()
{
    using std::cout;

    int a = 20;
    int b = 20;

    cout << "a = " << a << ": b = " << b << "\n";
    cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
    cout << "a = " << a << ": b = " << b << "\n";

    return 0;
}

// a++ means "use the current value of a in evaluating an expression, and the increment the value of a"

// ++b means "first increment the value of b and then use the new value in evaluating the expression."

// a-- means "use the current value of a in evaluating an expression and then decrement the value of a"

// --b means "first decrement the value of b and then ue the new value in evaluating the expression"
