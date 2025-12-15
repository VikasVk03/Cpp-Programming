// WAP that has main() call a user-defined function that takes a celsius temperature value as an argument and then return the equivalent fahrenheit value. The program should request the celsius value as input from the user and display the result. as shown in the following code:
// Please enter a celsius value: 20
//  20 degrees celsius is 68 degrees fahrenheit.
// reference formula:  fahrenheit = 1.8 * degrees celsius + 32

#include <iostream>

double fahrenheit(double);

int main()
{
    using namespace std;
    double degreeCelsius;
    cout << "Please enter a celsius value: ";
    cin >> degreeCelsius;
    double converted = fahrenheit(degreeCelsius);
    cout << degreeCelsius << " degrees celsius is " << converted << " degrees fahrenheit.";
    return 0;
}

double fahrenheit(double degreeCelsius)
{
    return 1.8 * degreeCelsius + 32;
}