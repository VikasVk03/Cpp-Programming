//  hexoct2.cpp -- display values in hex and octal

#include <iostream>

int main() 
{
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;                // manipulator for changing number base: from decimal to hexadecimal, from this point all value will be printed in hex until another manipulator change it.

    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;                // manipulator for changing number base to octal.
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}