/*

Do Programming Exercise 14 but use new to allocate a structure instead of declaring a structure variable.
Also have the program request diameter before it requests the pizza company name.

*/

#include <iostream>
#include <string>

struct PizzaAnalysis
{
    std::string companyName;
    std::string pizzaName;
    double diameter;
    double weight;
};

int main()
{
    using namespace std;

    PizzaAnalysis *pizzaData = new PizzaAnalysis;

    cout << "*** Welcome to Pizza Analysis Service ***" << endl;

    cout << "---------------------------------------------" << endl;

    cout << "Enter the details of your Pizza: \n";

    cout << "\nEnter the Diameter of your pizza: ";
    cin >> pizzaData->diameter;

    cin.get();

    cout << "\nEnter the Name of your Company: ";
    getline(cin, pizzaData->companyName);

    cout << "\nEnter the Name of your Pizza: ";
    getline(cin, pizzaData->pizzaName);

    cout << "\nEnter the Weight of your pizza: ";
    cin >> pizzaData->weight;

    cout << "\nHere, is Data of your pizza: " << endl;

    cout << "\nName of your Pizza company: " << pizzaData->companyName << endl;
    cout << "Name of your Pizza: " << pizzaData->pizzaName << endl;
    cout << "The diameter of " << pizzaData->pizzaName << " is " << pizzaData->diameter << endl;
    cout << "The weight of " << pizzaData->pizzaName << " is " << pizzaData->weight << endl;

    cout << "Thank you" << endl;

    delete pizzaData;

    return 0;
}
