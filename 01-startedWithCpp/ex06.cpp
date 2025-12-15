// WAP that has main() call a user-defined function that takes a distance in light years as an argument and then returns the distance in astronomical units. The program should request the light year value as an input and display the result, as shown in following code:
// Enter the number of light years: 4.2
//  4.2 light years = 265608 astronomical units.
//  1 light year = 63240 astronomical units.

#include <iostream>

double astronomicalUnits(double);

int main()
{
    using namespace std;
    double lightYear;
    cout << "Enter the number of light years: ";
    cin >> lightYear;
    double converted = astronomicalUnits(lightYear);
    cout << lightYear << " light years = " << converted << " astronomical units";
    return 0;
}

double astronomicalUnits(double lightYear)
{
    return 63240 * lightYear;
}