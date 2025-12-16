// chartype.cpp -- the char type 

#include <iostream>

int main()
{
    using namespace std;
    
    char ch;          // declare a char variable, it reads just one character remaining stays in buffer until explicitly reads

    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;

    return 0;
}