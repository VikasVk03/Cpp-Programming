// Reference Variable

// A reference is a name that acts as an alias or alternative name, for a previously defined variable.

// firstref.cpp  -- defining and using reference

#include <iostream>

int main()
{
    using namespace std;

    int rats = 101;

    int &rodents = rats; // rodents is a reference

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "Incrementing rodents implies same to rats \n";
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    return 0;
}
