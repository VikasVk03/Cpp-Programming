// express.cpp -- values of expression

#include <iostream>

int main()
{

    using namespace std;

    int x;

    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;

    cout.setf(ios_base::boolalpha);
    // Normally, cout converts bool value to int before displaying them, but the
    // cout.setf(ios_base::boolalpha) function call sets a flag that instructs cout to display the words true and false instead of 1 and 0.
    cout << "The expression x < 3 has value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has value ";
    cout << (x > 3) << endl;

    return 0;
}