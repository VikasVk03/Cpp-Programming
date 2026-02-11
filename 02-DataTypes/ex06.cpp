/*

WAP that asks how many miles you have driven and how many gallons of gasoline you have used and then reports
the miles per gallon your car has gotten. Or, if you prefer, the program can request distance in kilometers
and petrol in liters and then report the result European style, in liters per 100 kilometers

pseudocode

 for US style:
 1. declare variables: milesDriven, gallonUsed, milesPerGallon
 2.  formula:   milesPerGallon = milesDriven / gallonUsed

 for European style:
 1. declare variables: distanceInKilometers, petrolUsedInLiters,  litersPer100Kilometer
 2. formula:  litersPer100Kilometer = (petrolUsedInLiters  /  distanceInKilometer) * 100




*/

#include <iostream>

int main()
{
    using namespace std;

    int unitChoice;

    cout << "Fuel Efficiency Calculator" << endl;
    cout << "------------------------------" << endl;
    cout << "1. US style (Miles per Gallon)" << endl;
    cout << "2. European style (liter per 100 kilometers)" << endl;
    cout << "Enter your Choice: ";
    cin >> unitChoice;

    if (unitChoice == 1)
    {
        double milesDriven;
        double gallonUsed;
        double milesPerGallon;

        cout << "\nEnter total miles driven: ";
        cin >> milesDriven;

        cout << "\nEnter gallons of gasoline used: ";
        cin >> gallonUsed;

        milesPerGallon = milesDriven / gallonUsed;

        cout << "\nFuel Efficiency: " << milesPerGallon << " miles per gallon (MPG)" << endl;
    }
    else if (unitChoice == 2)
    {
        double distanceInKilometers;
        double petrolUsedInLiters;
        double literPer100Km;

        cout << "\nEnter the distance traveled in Kilometers: ";
        cin >> distanceInKilometers;

        cout << "\nEnter petrol used in liters: ";
        cin >> petrolUsedInLiters;

        literPer100Km = (petrolUsedInLiters / distanceInKilometers) * 100;

        cout << "\nFuel Efficiency: " << literPer100Km << " liters per 100 kilometers (L/100km)" << endl;
    }
    else
    {
        cout << "Invalid choice entered." << endl;
    }

    return 0;
}
