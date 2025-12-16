// C++ Escape Sequence code

/*
character name          C++ code
Newline                  \n
Horizontal tab            \t
Vertical tab              \v
Backspace                  \b
Carriage return             \r
Alert                       \a
Backlash                    \\
Question mark               \?
Single quote                 \'
Double quote                \"


learn about horizontal and vertical tab in tab.cpp
*/

#include <iostream>

int main()
{
    using namespace std;

    char alarm = '\a';

    cout << alarm << "Don't do that again!\a\n";
    cout << "Ben \"Buggsie\" Hacker\n was here!\n";

    return 0;
}