// The if else statement

/*
-> syntax

    if (test-condition)
    {
        statements
    }
    else
    {
        statements
    }

*/

#include <iostream>

int main()
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch; // ++ch will output next character and ch + 1 will output next character code
        std::cin.get(ch);
    }

    std::cout << "\nPlease excuse the slight confusion.\n";

    return 0;
}