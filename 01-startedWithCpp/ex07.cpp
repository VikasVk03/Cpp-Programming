// WAP that asks user to enter an hour value and minute value. the main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

#include <iostream>

void emptyTime(int, int);

int main()
{
    using namespace std;
    int hours;
    int minutes;
    cout << "Enter the number of hour: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    emptyTime(hours, minutes);
    return 0;
}

void emptyTime(int a, int b)
{
    std::cout << "Time: " << a << ":" << b;
}