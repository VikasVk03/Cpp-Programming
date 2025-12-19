// The call cin.get() (with no arguments) reads the single next character, even if it is newline, so you can use it to dispose of the newline character and prepare for the next line of input.

// cin.get(name, ArSize); // reads first line
// cin.get(); // reads newline
// cin.get(name, ArSize); // reads second line

// -> better syntax

// cin.get(name, ArSize).get(); // concatenate member function

// instr3.cpp -- reads more than one word with get() & get()

#include <iostream>

int main()
{
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.get(name, ArSize).get(); // read string, newline

    cin.clear();
    cout << "Enter your Favorite dessert: \n";
    cin.get(dessert, ArSize).get();

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}