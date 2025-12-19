// The cstring header file

/*

-> strcpy() function to copy a string t a character array.

--- strcpy(charr1, charr2)// copy charr2 to charr1

-> strcat() function to append a string to character array.

--- strcat(charr1, charr2); // append contents of charr2 to charr1

*/

// strtype3.cpp -- more string class features

#include <iostream>
#include <string>
#include <cstring> // C-style sting library

int main()
{
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";

    string str1;
    string str2 = "Panther";

    // assignment for string objects and character arrays
    str1 = str2;            // copy str2 to str1
    strcpy(charr1, charr2); // copy charr2 to charr1

    // appending for string objects and character arrays
    str1 += " paste";         // add paste to end of str1
    strcat(charr1, " juice"); // add juice to end of charr1

    // find the length of a string object and a C-style string
    int len1 = str1.size();    // obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";

    return 0;
}