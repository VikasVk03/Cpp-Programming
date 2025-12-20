// Array of Structures

/*

-> The structure contains an array.
-> It is also possible to create arrays whose elements are structures. the technique is exactly the same as for creating arrays of the fundamental types.

-> for example, to create an array of 100 inflatable structure.

inflatable gifts[100]; // array fo 100 inflatable structures-

inflatable guests[2] = // initializing an array of structs
{
    {"Bambi", 0.5, 21.99}, // first structure in array
    {"Godzilla", 2000, 565.99} // next structure in array
}
*/

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;

    inflatable guest[2] = // initializing an array of structs
        {
            {"Bambi", 0.5, 21.99},     // first stucture in array
            {"Godzilla", 2000, 565.99} // next structure in array
        };

    cout << "The guests " << guest[0].name << " and " << guest[1].name
         << "\nhave a combine volume of "
         << guest[0].volume + guest[1].volume << " cubic feet.\n";

    return 0;
}

/*
 -> Learn about Union (no example code given in book)

 -> chatgpt link:
 https://chatgpt.com/share/69466a2b-da08-8009-8dac-e6714cbd32d5

*/

/*
-> Learn about Enumeration (no example code given in book)

-> chatgpt link:
https://chatgpt.com/share/6946739f-20cc-8009-b82e-738e53771363

*/