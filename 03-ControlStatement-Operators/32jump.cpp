// The break and continue Statements

/*
The break and continue statements enable a program to skip over parts of the code.
it causes program execution to pass to the next statement following the switch or loop

the continue statement is used in loops and causes program to skip the rest of the body of the loop and then start new loop cycle.
*/

// jump.cpp -- using continue and break

#include <iostream>

const int ArSize = 80;

int main()
{
    using namespace std;

    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text: \n";
    cin.get(line, ArSize);

    cout << "Complete line: \n"
         << line << endl;
    cout << "Line through first period:\n";

    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i]; // display character

        if (line[i] == '.') // quite if it's a period
            break;
        if (line[i] != ' ') // skip rest of loop
            continue;
        spaces++;
    }

    cout << "\n"
         << spaces << " spaces\n";
    cout << "Done.\n";

    return 0;
}
