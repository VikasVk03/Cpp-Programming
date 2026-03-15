// arrfun1.cpp  -- function with an array argument

/*

 - When array is passed to function ... it acts as address of first element or pointer to first element of array.

 int sum_arr(int arr[], int n)  // arr = array name, n = size // arr is not really an array; it's a pointer

 - C++ interprets an array name as the address of its first element ( in below example)
   cookies == &cookies[0] // array name is address of first element.


   - the function call sum_arr(cookies, ArSize) passes the address of the first  element of the cookies
   array and the number of elements of the array to the sum_arr() function.
   The sum_arr() function initializes the cookies address to the pointer variable arr and initializes ArSize to the int variable n. this means that it doesn't really pass the array content to the function. Instead, it tells the function where the array is (address), what kind of element it has (the type), and how many elements it has (the n variable).

   ###################

   int sum_arr(int * arr, int n) // arr = array name, n = size

   -- Here, int * arr has replaced int arr[]. it turns out that both headers are correct because in C++ notation int * arr and int arr[] have the identical meaning when ( and only when) used in a function header or function prototype. Both mean that arr is pointer-to-int.

   -- you can't use the notation int tip[] to declare a pointer in the body of function
*/

#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n); // function prototype

int main()
{
    using namespace std;

    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

    int sum = sum_arr(cookies, ArSize);

    cout << "Total cookies eaten: " << sum << "\n";

    return 0;
}

// return the sum of an integer array
int sum_arr(int arr[], int n)
{

    int total = 0;
    int *pt;

    // std::cout << pt << std::endl;
    std::cout << arr << " Address of arr" << std::endl;

    for (int i = 0; i < n; i++)
    {
        total = total + arr[i];
        std::cout << &arr[i] << std::endl;
    }

    return total;
}
