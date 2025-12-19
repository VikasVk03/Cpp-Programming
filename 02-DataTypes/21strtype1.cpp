// Introducing the String class

/*
To use the string class, a program has to include the string header file.
The string class is part of the std namespace, so you have to provide a using directive or declaration or else refer to the class as std::string.
*/

// strtype1.cpp -- using the C++ string class

#include <iostream>
#include <string> // making string class availabe

int main()
{
    using namespace std;

    char charr1[20];            // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array

    string str1;             // create an empty string object
    string str2 = "panther"; // create and initialized string

    cout << "Enter a kind of feline: ";
    cin >> charr1;

    cout << "Enter another kind of felines: ";
    cin >> str1; // str1 resized to fit input size
    cout << "Here are some feline: \n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // use cout for output
         << endl;

    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;

    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl; // use array notation to access

    return 0;
}

// C++11 String initialization enables list-initialization for C-style string and string class

/*
char first_date[] = {"Le Chapon Dodu"};
char second_date[] {"The Elegant Plate"};

string third_date = {"The bread Bowl"};
string fourth_date {"Hanks's Fine Eats"};
*/