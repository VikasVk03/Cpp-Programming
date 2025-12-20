// Introducing structures in Cpp

// A Structure is user defined type that can hold more than one data type.

// In cpp, Array can only hold data type of only one type.. like if int array[size].. then it can only store array of int of size

/*

-> structure declaration

struct variableName
{
    statement1;
    statement2;   // structure members .. can be access in similar way as to array
};

-> for example. suppose that Blotaire,Inc. wants to create a type to describe members of its product line of designer inflatable.
In particular, the type should hold the name of the item, its volume in cubic feet and its selling price.


struct inflatable // structure declaration
{
    char name[20];
    float volume;
    double price;
};



*/

// structure.cpp --a simple declaration

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

    inflatable guest =
        {
            "Glorious Gloria",
            1.88,
            29.99}; // guest is a structure variable of type inflatable

    inflatable pal =
        {
            "Audacious Arthur",
            3.12,
            32.99}; // pal is second variable of type inflatable

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable

    cout << "You can have both for $ ";
    cout << guest.price + pal.price << "!\n";

    return 0;
}

// C++ 11 Stucture initialization

// inflatable duck {"Daphne", 0.12, 9.98} // can omit the = in C++11
