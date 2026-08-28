/*
*2. Inserting an Element in an Array
    Inserting an element in an array refers to the operation of adding an element to the array.

    Insertion in arrays can be done in three ways :
    a.Insertion at the beginning
    b.Insertion at a specified position
    c.Insertion at the end

*/

// * a.Insertion at the beginning
/*
#include <iostream>

int main()
{

    int arr[15], n;

    int size = sizeof(arr) / sizeof(arr[1]);

    std::cout << "Enter the elements in array: \n";

    for (int i = 0; i < 10; i++)
        std::cin >> arr[i];

    std::cout << "insert new array elements in array: \n";

    std::cout << "Enter new element value: ";
    std::cin >> n;

    // start shifting elements from 2nd last element in array.. till i >= 0;
    for (int i = 14; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = n;

    for (int i = 0; i < 15; i++)
    {
        std::cout << arr[i] << "\t";
    }

    return 0;
} */

// *  b.Insertion at a specified position

/* #include <iostream>

int main()
{

    int arr[10];

    std::cout << "Insert new element in array at specific position\n";

    std::cout << "Enter elements in array: ";
    for (int i = 0; i <= 8; i++)
    {
        std::cin >> arr[i];
    }

    int position, newElement;
    std::cout << "Enter position to insert new element: ";
    std::cin >> position;

    std::cout << "Enter the value of new Element: ";
    std::cin >> newElement;

    for (int i = 8; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position - 1] = newElement;

    for (int i = 0; i <= 9; i++)
    {
        std::cout << arr[i] << "\t";
    }

    std::cout << std::endl;

    return 0;
} */

// * c. Insertion at the end

/* #include <iostream>

int main()
{

    std::cout << "Insert new Element at the of array \n";

    int Size, numberOfElements;
    std::cout << "Enter the size of array: ";
    std::cin >> Size;
    std::cout << "Enter the Number of elements you want to insert: ";
    std::cin >> numberOfElements;

    if (numberOfElements < Size)
    {

        int arr[Size];

        int n, i = 0;

        // taking user input for array elements
        while (i < numberOfElements)
        {
            std::cout << "Enter the " << i + 1 << " Element: ";
            std::cin >> n;
            arr[i] = n;

            i++;
        }

        std::cout << "Now enter element to insert at last position of array";
        std::cout << "Enter the new array element value: ";
        std::cin >> n;

        arr[numberOfElements] = n;

        // Printing elements of array
        for (int i = 0; i < Size; i++)
        {
            std::cout << arr[i] << "\t";
        }
    }
    else
    {
        std::cout << "Overflow of array size \n";
    }

    return 0;
} */

// * Write a menu-driven program to implement insertion in a 1-D array in all three cases: begining, specific position, end.

#include <iostream>

int main()
{

    return 0;
}
