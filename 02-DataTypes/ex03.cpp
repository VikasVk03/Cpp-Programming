/*
WAP to ask user to enter latitude in degree, minutes and seconds and that then displays the latitude in decimal format.

user input: latitude in degree, minutes and seconds

conversions factors:
1. 60 seconds of arc to a minutes
    1 min = 60 sec
    sec_per_min = 60
2. 60 minutes of arc to a degree
    1 degree = 60 min
    min_per_degree = 60

sample output:
Enter a latitude in degree, minutes, and seconds:
first, enter the degrees: 37
next, enter the minutes of arc: 51
finally, enter the seconds of arc: 19
37 degrees, 51 minutes 19 seconds = 37.8553

*/

#include <iostream>

int main()
{
    using namespace std;

    const double MIN_PER_SEC = 60;
    const int DEGREE_PER_MIN = 60;

    int degree, minutes, seconds;

    cout << "Enter a latitude in degree, minutes and seconds\n";
    cout << "First, enter degree: ";
    cin >> degree;
    cout << "Next, enter minutes: ";
    cin >> minutes;
    cout << "Finally, enter seconds: ";
    cin >> seconds;

    double sec_to_min = seconds / MIN_PER_SEC;

    double min_to_degree = (minutes + sec_to_min) / DEGREE_PER_MIN;

    double final_degree = degree + min_to_degree;

    cout << degree << " degree " << minutes << " minutes " << seconds << " seconds = " << final_degree << endl;

    return 0;
}
