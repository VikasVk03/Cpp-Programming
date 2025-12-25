/*
WAP that asks user height in feet and inches and weight in pounds.
To calculate BMI.

user input: height in feet and inches, weight in pounds.
conversions:
1) convert height in feet and inches to inches.
    convert inches to meter by multiplying 0.0254
2) convert weight in pounds to kilogram by dividing 2.2

formula: BMI = mass in kg/ (height * height) in meter
*/

#include <iostream>

int main()
{
    using namespace std;

    const int FEET_TO_INCH = 12;
    const double WEIGHT_LBS_TO_KG = 2.2;
    const double HEIGHT_INCH_TO_METER = 0.0254;

    int height_feet;
    int height_inches;
    int weight_lbs;

    cout << "Enter your data to calculate BMI\n";
    cout << "Enter height in feet and inches.\n";
    cout << "first, enter height in feet: ";
    cin >> height_feet;
    cout << "next, enter height in inch: ";
    cin >> height_inches;
    cout << "Now, enter weight in pounds: ";
    cin >> weight_lbs;

    double height_meter = ((height_feet * FEET_TO_INCH) + height_inches) * HEIGHT_INCH_TO_METER;

    double weight_kg = weight_lbs / WEIGHT_LBS_TO_KG;

    double BMI = weight_kg / (height_meter * height_meter);

    cout << "Your BMI: " << BMI << endl;

    return 0;
}