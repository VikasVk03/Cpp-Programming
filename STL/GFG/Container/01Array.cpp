// * https://www.geeksforgeeks.org/cpp/the-c-standard-template-library-stl/

/*
Containers are class templates in the Standard Template Library (STL) that store and manage collections of elements efficiently.

Provide ready-to-use implementations of common data structures.
Support efficient storage, retrieval, insertion, and deletion of elements.
Work with different data types through templates

*/

#include <array>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    array<int, 10> arr = {5, 4, 3, 2, 1};

    /*  for (auto x : arr)
         cout << x << " "; */

    /* cout << arr.at(2) << endl;
    cout << get<3>(arr) << endl;
    cout << arr[4] << endl; */

    /* cout << arr.front() << endl;
    cout << arr.back() << endl; */

    /*  cout << arr.size() << endl;
     cout << arr.max_size() << endl; */

    array<int, 3> a = {1, 2, 3};
    array<int, 3> b = {6, 5, 4};

    /*  a.swap(b);

     for (auto x : b)
         cout << x << " "; */

    array<int, 5> c;
    c.fill(12);

    /*  cout << boolalpha << c.empty() << endl;

     for (auto x : c)
         cout << x << " "; */

    int *ptr = arr.data();

    cout << *ptr << endl;

    return 0;
}
