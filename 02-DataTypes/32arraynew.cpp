// ----- Using new to Create Dynamic Arrays ---

/*

-> If you create an array by declaring it, the space is allocated when the program is compiled. Whether or not the program finally uses the array, the array is there and using up memory.

-> Allocating the array during compile time is called { static binding }, meaning that the array is built in to the program at compile time.


-> But with new, you can create an array during runtime if you need it and skip creating the array if you don't need it. or you cna select ana array size after the program is running. This si called { dynamic binding }, meaning that the array is created while the program is running. such ana array is called a dynamic array.

*/

// Creating  a Dynamic Array with new.

// The general form  for allocating and assigning memory for an array is this:

// -> type_name * pointer_name = new type_name [num_elements];

// invoking the new operator secures a block of memory large enough to hold num_elements elements of type type_name with pointer_name pointing to the first element.

// arraynew.cpp -- using the new operator for arrays

#include <iostream>

int main()
{
    using namespace std;

    double *p3 = new double[3]; // dynamic array, space for 3 doubles
    p3[0] = 0.2;                // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1; // increment the pointer, okay for pointers, wrong for array names

    cout << "Now p3[0] is " << p3[0] << " and "; // now pointer point to second element
    cout << "p3[1] is" << p3[1] << ".\n";

    p3 = p3 - 1; // pointing back to begining

    cout << "p3[0] is " << p3[0] << endl;

    delete[] p3; // free the memory

    return 0;
}
