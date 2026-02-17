/*
Do programming Exercise 12 but instead of declaring an array of three CandyBar stucture, use new to allocate
the array dynamically.


*/

#include <iostream>
#include <cstring>

struct CandyBar
{
    char name[20];
    double weight;
    int calories;
};

int main()
{
    using namespace std;

    CandyBar *snack = new CandyBar;

    /* In C++, arrays are not assignable objects. They decay to pointers and their memory location is fixed,
    so you must copy data/text into them instead of assigning. */

    strcpy(snack->name, "Munch");
    snack->calories = 300;
    snack->weight = 15;

    cout << "Here we have a Candy bar called " << snack->name << "\nWeight: " << snack->weight
         << "\nCalories: " << snack->calories << endl;

    delete snack;

    return 0;
}
