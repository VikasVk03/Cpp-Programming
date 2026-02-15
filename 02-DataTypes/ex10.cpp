/*

WAP that asks the user to enter his or her first name and then last name, and that then constructs, stores and
displays a third string, consisting of the user's last name followed by a comma, a space and first name.
Use char arrays and functions from the cstring header file. A sample run could look like this:

    Output:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here's the information in a single string: Fleming, Flip

*/

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char firstName[20];
    char lastName[20];
    char fullName[50];

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    /* "lastName, firstName" */

    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);

    cout << "Here's the information in a single string: " << fullName << endl;

    return 0;
}
