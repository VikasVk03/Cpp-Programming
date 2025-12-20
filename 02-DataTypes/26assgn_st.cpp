/*
--> C++ makes user-defined type as similar as possible to built-in types.

-> can pass stucture as arguments to a function, and can have a function use a structure as return value.

-> Also use the assignment (=) to assign one structure to another of same type.
Doing so causes each member in the one structure to be set to the value of the corresponding member in the other structure, even if the member is an array. this kind of assignment is called memberwise assignment.
*/

// assgn_st.cpp -- assigning structures

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable bouquet = {
        "sunflower",
        0.20,
        12.49};

    inflatable choice;

    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet; // assign one structure to another

    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    return 0;
}

// cout << "bouquet: " << bouquet << endl;
// cout << "choice: " << choice << endl; this error because C++ does NOT know how to print a struct directly using <<.
