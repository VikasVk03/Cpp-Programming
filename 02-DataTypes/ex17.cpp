/*

WAP That requests the user to enter three times for the 40-yd dash(or 40-meter, if you prefer) and then
displays the times and the average. Use an array object to hold the data. (use a built-in array if array is
not available)


*/

#include <iostream>

using namespace std;

int main()
{
    double times[3];
    double sum = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter time" << i + 1 << ": ";
        cin >> times[i];
    };

    cout << "\nEntered times\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Entered time" << i + 1 << ": " << times[i] << endl;
        sum += times[i];
    };

    cout << "sum : " << sum << endl;
    cout << "Average: " << sum / 3 << endl;

    return 0;
}