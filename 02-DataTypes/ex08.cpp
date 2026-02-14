/*
WAP that requests and display information as shown in the following example of output:

    What is your first name? Betty Sue
    What is you last name? Yewe
    What letter grade do you deserve? B
    What is your age? 22
    Name: Yewe, Betty Sue
    Grade: C
    Age: 22

    Note:
        -The program should be able to accept first name that comprise more than one word.
        -The program adjust the grade downward-that is up one letter.

    -> for line oriented input
        cin.get(targetName, Size)

*/

#include <iostream>

int main()
{
    using namespace std;

    const int ArSize = 20;

    char FirstName[ArSize];
    char LastName[ArSize];
    char grade;

    int age;

    cout << "What is your first name? ";
    cin.get(FirstName, ArSize);

    cout << "What is your last name? ";
    cin.get(LastName, ArSize);

    cout << "What letter grade do you deserve ? ";
    cin >> grade;

    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << LastName << ", " << FirstName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}