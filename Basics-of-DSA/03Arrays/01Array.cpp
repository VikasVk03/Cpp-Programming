// * Operations on Arrays
/*
* 1. Traversing an Array
Traversing an array means to access every element in an array exactly
once so that it can be processed.

*/

#include <iostream>

int main()
{
    int i, num[5];

    std::cout << "Enter the elements of array: \n";

    for (i = 0; i < 5; i++)
    {
        std::cin >> num[i];
    }

    std::cout << "\n The elements of array are: \n";

    for (i = 0; i < 5; i++)
    {
        std::cout << "\t" << num[i];
    }

    return 0;
}
