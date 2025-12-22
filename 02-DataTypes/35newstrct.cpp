// Using new to Create Dynamic Structures

// The new operator is tool to create dynamic structures.

// Dynamic means the memory is allocated during runtime.

/*

when you create a dynamic structure, you can't use the dot membership operator with the structure name because the structure has no name.
All you have is its address.
C++  provides an operator: The arrow membership operator (->). does for pointer to structures what the dot operator does for structure names.

ex. if ps points to type inflatable structure, then ps->price is the price member of the pointed-to structure.




*/

// newstrct.cpp -- using new with a structure

#include <iostream>

struct inflatable // structure definition
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;

    inflatable *ps = new inflatable; // allot memory for structure

    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20); // method 1 for member access

    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume; // method 2 for member access

    cout << "Enter price: $";
    cin >> ps->price;

    cout << "Name: " << (*ps).name << endl;                    // method  2
    cout << "Volume: " << ps->volume << " cubic feet" << endl; // method 1
    cout << "price: $" << ps->price << endl;

    delete ps;

    return 0;
}
