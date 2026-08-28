
// 1) convert 'a' to 'A'

#include <iostream>

using namespace std;

char UpperCase(char &name);

int main()
{

    cout << "Convert Lower case to upper case \n";
    char name;
    cout << "Enter a character: ";
    cin >> name;

    char result = UpperCase(name);

    cout << result << endl;

    return 0;
}

char UpperCase(char &name)
{
    return name - 'a' + 'A';
}
