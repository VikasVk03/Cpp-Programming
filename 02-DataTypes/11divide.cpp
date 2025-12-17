/*
the division operator (/) behavior depends on type of operands

-- if both operands are integer, cpp performs integer division means that any fractional part of the answer is discarded, making result an integer

-- if one or both operands are floating point values, the fractional part is kept making the result floating point
*/

// divide.cpp -- integer and floating point division
#include <iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield); // this makes output with preceding zeros
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "Mixed division: 1e7/9.0 = ";
    cout << 1e7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = ";
    cout << 1e7f / 9.0f << endl;

    return 0;
}
