// Line oriented input with getline()

// The getline() function reads a whole line, using newline character (\n) transmitted by the Enter key to mark the end of input.

// function call
// -> cin.getline(targetName, limit)

// instr2.cpp --- reading more than one word with getline

#include <iostream>

int main()
{
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: ";

    // cin.getline(target, limit)
    cin.getline(name, ArSize); // reads through newline

    cout << "Enter your favorite dessert: ";
    cin.getline(dessert, ArSize);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}