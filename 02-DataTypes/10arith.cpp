/*
C++ uses operators to do arithmetic. it provides operators for five basic calculation: addition, subtraction, multiplication, division and taking modulus.

value are known as operands on which operation is going to be perform and
symbol +,-,*,/ and % are operator

the modulus (%) operator produces the remainder after dividing the first by second.
Both operands must be integer type; using % with floating point value causes compile-time error.
*/

// arith.cpp -- some C++ arithmetic

#include <iostream>

int main()
{
    using namespace std;

    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point

    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;

    return 0;
}