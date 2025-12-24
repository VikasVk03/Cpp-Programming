// WAP that user height in inches and convert height in feet and inches. Have the program use the underscore underscore character to dictate where to type the response. Also use const symbolic constant to represent conversion factor

// 1 feet = 12 inch

// inch_per_feet = 12 (divide units and put number, inch/feet = 12/1, gives inch_per_feet = 12)

#include <iostream>

int main()
{
    using namespace std;

    const int inch_per_feet = 12;

    int inch;

    cout << "Enter you height in inches: ";
    cin >> inch;

    int feet = inch / inch_per_feet; // whole feet
    int remaining_inches = inch % inch_per_feet;

    cout << "Your height in feet and inches: " << feet << " feet " << remaining_inches << " inches\n";

    return 0;
}