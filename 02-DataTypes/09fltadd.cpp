// By default, Floating-point constants such as 8.24 and 2.4E8 are type double
// If you want a constant to be type float, use as f or F suffix.
// For type long double, use as l or L suffix

/*
examples

1.234f       // a float constant
2.45E20F     // a float constant
2.34534E28    // a double constant
2.2L         // a long double constant
*/

// fltadd.cpp -- precision problems with floats
#include <iostream>

int main()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b-a = " << b - a << endl;
    return 0;
}

/*
The program takes number, adds 1 and then substract the original number, that should result in value of 1.

output :
a = 2.34e+22
b-a = 0

the problem is that 2.34E+22 represents a number in with 23 digits to the left of the decimal. by adding 1, you are attempting to add 1 to 23rd digit in that number. But type float can represent only the first 6 or 7 digits in a number, so trying to change the 23rd digit hs no effect on the value.
*/
