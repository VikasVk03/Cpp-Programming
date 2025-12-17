// The modulus operator (%) returns the remainder of an integer division.

// modulus.cpp -- use % operator to convert weight in lbs (pound) to stone
// 1 stone = 14 pounds

#include <iostream>

int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;

    int lbs;

    cout << "Enter you weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;  // whole stone
    int pounds = lbs % Lbs_per_stn; // remainder in pounds
    cout << lbs << " pounds are " << stone
         << " stone, " << pounds << " pound (s) \n";

    return 0;
}