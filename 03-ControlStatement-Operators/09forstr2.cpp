// The comma operator

// the comma operator does the same for expressions enabling to sneak two expression into a place where c++ syntax allows only one expression.

// forstr2.cpp -- reversing an array

#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter a word: ";
    string word;
    cin >> word;

    // physically modify string object
    char temp;
    int i, j;

    // swapping
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    cout << word << "\nDone\n";

    return 0;
}
