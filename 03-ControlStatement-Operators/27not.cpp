/*
3. The logical NOT Operator: !

the ! operator negates or reverses the truth value of the expression that follows it.
if expression is true teh !expression is false -- and vice versa.
*/

// not.cpp  -- using the not operator

#include <iostream>
#include <climits>

bool is_int(double); // function prototype

int main()
{
    using namespace std;

    double num;

    cout << "Yo, dude, Enter an integer value: ";
    cin >> num;

    while (!is_int(num)) // continue while num is not int-able
    {
        cout << "Range of int from " << INT_MIN << " to " << INT_MAX << endl;
        cout << "Out of range -- please try again: ";
        cin >> num;
    }

    int val = int(num); // type cast
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}
