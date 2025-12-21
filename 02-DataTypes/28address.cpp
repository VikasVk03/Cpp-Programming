// Introduction to Pointers (memory address)

/*

-> A Pointer is variable that stores addresses of values rather than value themselves.

-> Normal variable --> stores value
-> Pointer variable --> stores address
{
    int x = 10;
    int* p = &x;
    x → value 10

    &x → address of x

    p → stores address of x

    *p → value at that address (10)

}

-> how to explicitly find addresses for ordinary variable.
-> apply the address operator represented by &, to a variable to get its location.
for example if home is variable, &home is its address.

*/

// address.cpp -- using the & operator to find addresses

#include <iostream>

int main()
{
    using namespace std;

    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;

    return 0;
}

/*

-> chatgpt
https://chatgpt.com/share/69467acb-9388-8009-a641-c66d1485bfc1

*/