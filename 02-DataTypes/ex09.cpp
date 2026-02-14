/*
Rewrite 2.18, using c++ string class instead of char array.
 for line input in string class
 ->   getline(cin, name)
        cin takes inputs and name sets the size of input text
*/

#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string name;
    string dessert;

    cout << "Enter your name: ";
    getline(cin, name); // works similar to cin.getline(targetName, Size)

    cout << "Enter your favorite dessert: ";
    cin >> dessert;

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}