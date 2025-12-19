/*
String

A string is series of characters stored in consecutive bytes of memory.

-> C++ has two ways of dealing with strings


1} -> c-style
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

    // c-style
    char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string

    char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'}; // a string

    // using string constant ("text") or string literal
    // Quoted strings always include the terminating null character (\0) implicitly
    char bird[11] = "Mr. Cheeps"; // the \0 is understood
    char fish[] = "Bubbles";      // let the compiler count

    char boss[8] = "Bozo";

    cout << "dog = " << dog << endl;
    cout << "cat = " << cat << endl;
    cout << "bird = " << bird << endl;
    cout << "fish = " << fish << endl;
    cout << "Boss = " << boss << endl;

    // -> Concatenate sting literal - to combine two quoted strings into one.
    // any tow string constants separated only by whitespace(spaces, tabs, and newlines) are automatically joined into one.

    cout << "I'd give my right arm to be"
    " a great violinist.\n";
    cout << "I'd give my right arm to be a great violinist.\n";
    cout << "I'd give my right ar"
    "m to be a great violinist.\n";

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