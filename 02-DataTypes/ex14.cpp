/*

William Wingate runs a pizza-analysis service. For each pizza, he needs ro record the following information.
    - The name of the pizza company, which can consist of more than one word
    - The diameter of the pizza
    - The weight of the pizza
Devise a structure that can hold this information and WAP that uses a structure variable of that type. the
program should ask the user to enter each of the preceding items of information, and then the program should
display that information Use cin (or its methods) and cout.


*/

#include <iostream>
#include <string>

int main()
{
    using namespace std;

    struct PizzaAnalysis
    {
        string companyName;
        string pizzaName;
        double diameter;
        double weight;
    };

    PizzaAnalysis pizzaData;

    cout << "*** Welcome to Pizza Analysis Service ***" << endl;

    cout << "---------------------------------------------" << endl;

    cout << "Enter the details of your Pizza: \n";

    cout << "\nEnter the Name of your Pizza company: ";
    getline(cin, pizzaData.companyName);

    cout << "\nEnter the Name of your Pizza: ";
    getline(cin, pizzaData.pizzaName);

    cout << "\nEnter the Diameter of your pizza: ";
    cin >> pizzaData.diameter;

    cout << "\nEnter the Weight of your pizza: ";
    cin >> pizzaData.weight;

    cout << "\nHere, is Data of your pizza: " << endl;

    cout << "\nName of your Pizza company: " << pizzaData.companyName << endl;
    cout << "Name of your Pizza: " << pizzaData.pizzaName << endl;
    cout << "The diameter of " << pizzaData.pizzaName << " is " << pizzaData.diameter << endl;
    cout << "The weight of " << pizzaData.pizzaName << " is " << pizzaData.weight << endl;

    cout << "Thank you" << endl;
    return 0;
}
