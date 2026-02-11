
/*
WAP that asks you to enter an automobile gasoline consumption figure in the European style (liters per 100
kilometer) and converts to the U.S style of miles per gallon. Note that in addition to using different units
of measurement, the approach (distance / fuel) is the inverse of the European approach (fuel / distance).
Note: the 100 kilometers is 62.14 miles and 1 gallon is 3.875 liters
Thus, 19 mpg is about 12.4 l/100km and 27 mpg is about 8.7 l/100km;

Pseudocode
    1. take user input: fuel in liter and distance in kilometer
    2. show efficiency in European style: (fuel / distance) * 100
    3. convert liters to gallon: 1 gallon = 3.875 liters

        - gallonPerliter = 1 / 3.875 = 0.258

        - gallon = liter * gallonPerliter

        - liter = gallon / gallonPerliter

        - gallon = liter / 3.875 or gallon = liter * 0.285

    4. convert kilometer to miles: 62.14 mile = 100 km

        - milesPerKm = 62.14 / 100 = 0.6214

        - mile = km * milesPerKm

        - km = miles /milePerKm

        - miles = km * 0.6214 or mile = (km * 62.14) / 100

    5. convert to US style: (distance / fuel) mpg
*/

#include <iostream>

using namespace std;

const double GallonPerLiter = 1.0 / 3.875;
const double MilesPerKm = 62.14 / 100;

int main()
{
    double FuelInLiter;
    double distanceInKm;
    double literPerHundredKm;

    double FuelInGallon;
    double distanceInMiles;
    double MilesPerGallon;

    cout << "Fuel Efficiency Converter " << endl;
    cout << "---------------------------" << endl;
    cout << "Enter an automobile gasoline consumption figure in European style (liter per 100 km)";

    cout << "\nEnter Fuel in liters: ";
    cin >> FuelInLiter;

    cout << "\nEnter total distance traveled in kilometer: ";
    cin >> distanceInKm;

    literPerHundredKm = (FuelInLiter / distanceInKm) * 100;

    cout << "\nFuel Efficiency in European style: " << literPerHundredKm << " liters per 100km";

    FuelInGallon = FuelInLiter * GallonPerLiter;

    distanceInMiles = distanceInKm * MilesPerKm;

    MilesPerGallon = distanceInMiles / FuelInGallon;

    cout << "\nFuel in Gallons: " << FuelInGallon << endl;
    cout << "\nDistance in Miles: " << distanceInMiles << endl;

    cout << "\nFuel Efficiency in US style: " << MilesPerGallon << " miles per gallon";

    cout << "\nEnd" << endl;

    return 0;
}