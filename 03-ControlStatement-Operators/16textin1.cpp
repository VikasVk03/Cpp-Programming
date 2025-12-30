/*
let's look at one of the most common and important tasks assigned to loops:
reading text character-by-character from a file or from the keyboard. for example you might want to write a program that counts the number of characters, lines, and words in the input.


if a program is going to use a loop to read text input from the keyboard, it has to have some way of knowing when to stop. special character, sometimes called sentinel character, to act as stop sign.

*/

// listing 3.16 stops reading input when the program encounters a # character.

// textin1.cpp  -- reading chars with a loop

#include <iostream>

int main()
{
    using namespace std;

    char ch;
    int count = 0; // use basic input

    cout << "Enter character; enter # to quit: \n";
    cin >> ch; // get a character

    while (ch != '#') // test the character
    {
        cout << ch; // echo the character
        ++count;    // cout the character
        cin >> ch;  // get the next character
    }

    cout << endl
         << count << " characters read\n";

    return 0;
}
