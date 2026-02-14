/*
String

A string is series of characters stored in consecutive bytes of memory.

-> C++ has two ways of dealing with strings


1} -> c-style - means text is stored as character of array and terminated by null character(\0) end of text

The idea of series of characters stored in consecutive bytes implies that you can store a string in an array of char, with each character kept in its own array element.

string provide convenient way to store text information, such as message to the user.

The last character of every string is the null character. this character, written \0, is the character with ASCII code 0, and it serves to mark the string's end.


char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string

char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'}; // a string
*/

/*
#include <iostream>

int main()
{
    using namespace std;

    -> c-style
    char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string

    char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'}; // a string

    -> using string constant ("text") or string literal
    -> Quoted strings always include the terminating null character (\0) implicitly
    char bird[11] = "Mr. Cheeps"; // the \0 is understood
    char fish[] = "Bubbles";      // let the compiler count

    char boss[8] = "Bozo";

    cout << "dog = " << dog << endl;
    cout << "cat = " << cat << endl;
    cout << "bird = " << bird << endl;
    cout << "fish = " << fish << endl;
    cout << "Boss = " << boss << endl;

     -> Concatenate sting literal - to combine two quoted strings into one.
     any tow string constants separated only by whitespace(spaces, tabs, and newlines) are automatically joined into one.

    cout << "I'd give my right arm to be"
    " a great violinist.\n";
    cout << "I'd give my right arm to be a great violinist.\n";
    cout << "I'd give my right ar"
    "m to be a great violinist.\n";

    return 0;
}

*/

/*
 2} The String class - Using std::string
 it handles memory management dynamically and provides a rich set of built-in functions.

 -> Key Concepts:
       - Header: To use std::string, you must include the <string> header file.
       - Namespace: It is part of the std namespace (e.g., std::string or using using namespace std;).
       - Memory Management: Unlike character arrays, std::string objects can automatically grow and shrink as needed, reducing the risk of buffer overflows.

*/

/*
#include <iostream>
#include <string>

int main() {
    -> Declaration and Initialization
    std::string str1 = "Hello";
    std::string str2("World");
    std::string str3; // Declares an empty string

    ->  Assignment
    str3 = str1; // str3 now holds "Hello"

    ->  Concatenation
    std::string full_string = str1 + " " + str2 + "!"; // full_string holds "Hello World!"
    str1.append(" there"); // str1 becomes "Hello there"

    ->  Input/Output
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, str3); // Reads a full line of text, including spaces
    std::cout << "You entered: " << str3 << std::endl;

    ->  Accessing characters
    char first_char = full_string[0]; // Accesses the character at index 0, which is 'H'
    char last_char = full_string.back(); // Accesses the last character

    -> Length
    int len = full_string.length(); // Returns the number of characters, which is 12 (including space and '!')

    return 0;
}


*/

// strings.cpp -- storing strings in an array

#include <iostream>
#include <cstring> // for the strlen() function

int main()
{
    using namespace std;

    const int Size = 10;

    char name1[Size];              // empty array
    char name2[Size] = "C++owboy"; // initialized array

    cout << "Howdy! I'm " << name2;
    cout << "! What's you name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes. \n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0'; // set to null character
    cout << "Here are ther first 3 character of my name: ";
    cout << name2 << endl;

    return 0;
}