// Assignment, concatenation, and Appending

// The string class operation

/*
char  charr1[20];
char charr2[20] = "jaguar"; // create an initialized array

string str1; // create an empty string object
string str2 = "Panther"; // create an initialized string

charr1 = charr2; //   INVALID, no array assignment
str1 = str2; // VALID, object assignment ok

string str3;

str3 = str1 + str2; // assign str3 the joined strings
str1 += str2; // add str2 to the end of str1
*/

// strtype2.cpp -- assignment, adding, and appending

#include <iostream>
#include <string>

int main()
{

    using namespace std;

    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to another: s2 = s1\n";

    s2 = s1;

    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You cam append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day \" yields s2 = " << s2 << endl;

    return 0;
}
