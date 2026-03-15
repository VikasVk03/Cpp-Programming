// Function using Array Ranges

/*

    - The traditional C/C++ approach to function that process array is to pass a pointer to the start of the array as one argument and to pass size of the array as second argument. (The pointer tells the function both where to find the array and the kind of data in it.)

    - Another approach to giving a function the information it needs: ** specify a Range ** of elements.
    this can be done by passing two pointer -- one identifying the start of the array and one identifying the end of the array.

    -- Passing a range to a function tells which elements to process.

*/

// arrfun4.cpp  -- function with an array range

#include <iostream>

const int ArSize = 8;

int sum_arr(const int *begin, const int *end);

int main()
{
    using namespace std;

    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

    int sum = sum_arr(cookies, cookies + ArSize);

    cout << "Total cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, cookies + 3);

    cout << "First three eaters ate: " << sum << " cookies.\n";

    sum = sum_arr(cookies + 4, cookies + 8); // last 4 elements

    cout << "Last four eaters ate: " << sum << " cookies. \n";

    return 0;
}

// return the sum of an integer array

int sum_arr(const int *begin, const int *end)
{
    const int *pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
        total += *pt;

    return total;
}

/*

    for (pt = begin; pt != end; pt++)
        total += *pt;

its sets pt to point to the first element to be processed (the one pointed to begin) and adds *pt ( the value of the element) to total. Then the loop updates pt by incrementing it, causing it to point to the next element.


*/