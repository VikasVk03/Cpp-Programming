// Array is data form that can hold several values, all of same type.

/*
An array declaration should indicate three things.

-> the type fo value to be stored in each element
-> the name of the array
-> the number of elements in the array

the general form to declare array:

typeName arrayName[arraySize];


-> below creates and initializes with values

typeName arrayName[arraySize] = {value1, value2, ... valueN}


-> arraySize, which is no. of elements, must be integer constant. it cannot be a variable whose value is set while the program is running. However, later we will learn to use new operator to overcome this.

-> array starts with zero indexing till n-1 (last element is one less than arraySize)

length of array:

sizeof(arrayName)/sizeof(arrayName[anyOneIndexValue]) -> gives length of array that is total elements in array

-> cpp saves array in total byte not number of element

*/

// arrayone.cpp -- small arrays of integers

#include <iostream>

int main()
{
    using namespace std;

    // typeName arrayName[arraySize]
    int yams[3]; // creates array with three elements
    yams[0] = 7; // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // creates, initialize array

    cout << "Total Yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam. \n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes. \n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes. \n";

    return 0;
}
