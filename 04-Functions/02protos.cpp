// Prototyping and calling function

// protos.cpp  -- using prototypes and function calls

/*

-> C++ does places a restriction on what types you can use for a return value. The return value cannot be an array.
    Everything else is possible -- integers, floating-point numbers, pointers and even structures and objects.

*/

#include <iostream> // #include makes labrary function prototype available in file.

void cheers(int);      // prototype: no return value
double cube(double x); // prototype: return a double

/* “In C++, the compiler only translates code. The operating system’s runtime startup code calls main(), and from main() the program flow is controlled.”

    -> In C, the startup function is often _start

    -> _start calls main()

    -> After main() returns, _exit() is called

*/

int main() // main() is called by the runtime system (via OS startup code), and main() calls the functions defined inside it.
{
    using namespace std;

    cheers(5); // function call

    cout << "Give me a number: ";
    double side;
    cin >> side;

    double volume = cube(side); // function call

    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";

    cheers(cube(2)); // prototype protection at work
    /*
    🧪 Prototype protection
    cheers(cube(2));

    -> cube(2) → returns double
    -> cheers(int) expects int
    -> Compiler converts double → int
    -> If prototype was missing → undefined behavior

    ✔ Excellent example of prototype usefulness.

    */

    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "cheers! ";
    cout << endl;
}

double cube(double x)
{
    return x * x * x; //  -> returns a double VALUE to the caller
}

// very imp reference:  https://chatgpt.com/share/696e370d-c654-8009-a5d1-bcb264291b99

/*
🔐 What is Prototype Protection?

Prototype protection means that function prototypes allow the compiler to check that a function is called with the correct number and types of arguments, and that the return value is used correctly.

In short: ➡️ Prototypes protect your program from wrong function calls.
*/