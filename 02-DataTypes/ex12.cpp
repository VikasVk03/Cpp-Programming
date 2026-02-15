/*
The CandyBar structure contains three members. The first member holds the brand name of the candy bar. The second
member holds the weight (which may have a fractional part) of the candy bar, and the third member holds the
number of calories ( an integer value) in the candy bar.

WAP that declares such a structure and creates a CandyBar variable called snack, initializing its members to
"Mocha Munch", 2.3 and 350, respectively. The initialization should be part of the declaration for snack.

Finally, the program should displays the contents of snack variable.

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

    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350};

    cout << "Here we have a Candy bar called " << snack.name << "\nWeight: " << snack.weight
         << "\nCalories: " << snack.calories << endl;

    return 0;
}