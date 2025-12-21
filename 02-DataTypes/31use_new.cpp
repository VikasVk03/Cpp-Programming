/*
-> The true worth of pointer comes into play when you allocate unnamed memory during runtime to hold values. In this case, pointer become the only access to that memory.

-> In C, you can allocate memory with the library function malloc(). You can do so in C++, but C++ also has better way: The new operator

-> let try this new technique by creating unnamed runtime storage for a type int value and accessing the value with a pointer.

-> The key is the C++ new operator. You tell new for what data type you want memory: new finds block of the correct size and returns the address of the block.

-> Ex
int * pn = new int;

The new int part tell the program you want some new storage suitable for holding an int. The new operator uses the type to figure out how many bytes are needed. Then it finds the memory and returns the address.

Next, you assign the address to pn, which is declared to be of type pointer-to-int.

- Now, pn is the address and *pn is the value stored there.

--- general form
typeName * pinter_name = new typeName;


*/

// use_new.cpp -- using the new operator

#include <iostream>

int main()
{
    using namespace std;

    int nights = 1001;

    int *pt = new int; // allocate space for an int
    *pt = 1001;        // store a value there

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;

    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double *pd = new double; // allocate space for a double
    *pd = 10000001.0;        // store a double there

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "Size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pt = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    return 0;
}

/*
-> Freeing Memory with delete

-> The delete operator, which enables to return memory to the memory pool when you are finished with it.

-> You use delete by following it with a pointer to block of memory originally allocated with new:

int * ps = new int; // allocate memory with new
...                 // use the memory
delete ps;         // free memory with delete when done


---- > memory leak - memory that has been allocated but can no longer be used. if a memory leak grows too large, it can bring a program seeking more memory to a halt.


-> You should not attempt to free a block of memory that you have previously freed. the C++ standard say the result of such an attempt is undefined, meaning that the consequences could be anything.


-> Example use of delete operator

int * ps = new int;   // ok
delete ps;            // ok
delete ps;            // not ok now

int jugs = 5;      // ok
int * pi = &jugs;  // ok
delete pi;         // not allowed, memory not allocated by new


-> Note: You should use delete only to free memory allocated with new. however, it is safe to apply delete to a null pointer


In C++, a pointer with the value 0 is called the null pointer. C++ guarantees that the null pointer never points t valid data.


*/