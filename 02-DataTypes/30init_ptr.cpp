// init_ptr.cpp  -- initialize a pointer

#include <iostream>

int main()
{
    using namespace std;

    int higgens = 5;
    int *pt = &higgens; // *pt give in direct access to value of higgens... *pt store address of higgens using address operator (&higgens)

    // &pt will give address of pt

    int *c = pt;
    int *d;

    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;

    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;

    cout << "Value of &pt (address of *pt pointer where &higgens is stored) = " << &pt
         << "; value of &*pt = " << &*pt << endl;

    return 0;
}