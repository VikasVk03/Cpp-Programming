/*
The CandyBar structure contains three members, as describe in Programming exercise 12.

WAP that creates an array of three CandyBar structure, initializes them to value of your choices and then
display the contents of each structure.

*/

#include <iostream>

struct CandyBar
{
    char name[20];
    double weight;
    int calories;
};

int main()
{
    using namespace std;

    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 350},
        {"5star", 5, 300},
        {"Snekar", 10, 500}};

    cout << "Here we have a Candy bar called " << snack[0].name << "\nWeight: " << snack[0].weight
         << "\nCalories: " << snack[0].calories << endl;
    cout << "Here we have a Candy bar called " << snack[1].name << "\nWeight: " << snack[1].weight
         << "\nCalories: " << snack[1].calories << endl;
    cout << "Here we have a Candy bar called " << snack[2].name << "\nWeight: " << snack[2].weight
         << "\nCalories: " << snack[2].calories << endl;

    return 0;
}
