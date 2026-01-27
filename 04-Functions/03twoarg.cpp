// an example of function with two arguments. It also illustrates how changing the value of formal parameter (variable used to receive passed value)  in a function has no effect on the data in the calling program.

// twoarg.cpp  -- a function with 2 arguments

#include <iostream>

using namespace std;

void n_chars(char, int);

int main()
{
    int times;
    char ch;

    cout << "Enter an character: ";
    cin >> ch;

    while (ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times); // function with two arguments
        cout << "\nEnter another character or press the "
                " q-key to quit: ";
        cin >> ch;
    }

    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";

    return 0;
}

void n_chars(char c, int n) // displays c n times
{
    while (n-- > 0) // continues until n reaches 0;
        cout << c;
}
