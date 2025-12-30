// The End-of-file condition  -- read from book and personal chatgpt

//  textin3.cpp  -- reading chars to end of file.
#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch); // attempt to read a char

    while (cin.fail() == false)
    {
        cout << ch; // echo character
        ++count;
        cin.get(ch); // attempt to read another char
    }

    cout << endl
         << count << " characters read.\n";

    return 0;
}
