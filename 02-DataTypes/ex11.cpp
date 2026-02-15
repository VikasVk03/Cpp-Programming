/*
WAP that asks the user to enter his or her first name and then last name, and that then constructs, stores and
displays a third string, consisting of the user's last name followed by a comma, a space and first name.
Use String objects and methods form the string header file. A sample run could look like this:

    Output:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here's the information in a single string: Fleming, Flip

*/

#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string firstName;
    string lastName;
    string fullName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    fullName = lastName + ", " + firstName;

    cout << "Here's the information in a single string: " << fullName << endl;

    return 0;
}
