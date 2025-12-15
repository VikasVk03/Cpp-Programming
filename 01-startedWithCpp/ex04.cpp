// WAP that asks user to enter his or her age. ths program then should display hte age in months: (1 year = 12 months)
// Enter your age: 29
// Your age in months is 384

#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    int ageMonth = age * 12;
    std::cout << "Your age in months is " << ageMonth;
    return 0;
}