// Array alternative

// The vector Template class - it is dynamic array, you can set the size of a vector object during runtime and you can append new data to the end or insert new data in middle.

// vector objects resize automatically when you insert or add values to them.

// In general, The following declaration creates a vector object vt that can hold n_elem elements of type typename:

// ->   vector<typeName> vt (n_elem)

// n_elem can be integer constant or integer variable

// The array Template Classs (C++11)

// an array object has a fixed size and uses the stack(or else static memory allocation) instead of the free store, so it shares the efficiency of built-in arrays.

// To create array object, include array header file.

// To creates an array object arr with n_elem element of typeName

// --> array<typeName, n_elem> arr;

// n_elem can not be variable

// choices.cpp  -- array variations

#include <iostream>
#include <vector> // STL C++ 98, include vector object
#include <array>  // C++ 11, include array object

int main()
{
    using namespace std;

    // C, original C++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};

    // C++ 98 STL
    vector<double> a2(4); // create vector with 4 elements

    // no simple way to initialize in c98
    a2[0] = 1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;

    // C++ 11 -- create and initialize array object
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3; // valid for array objects of same size

    // use array notation
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    // misdeed
    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    return 0;
}
