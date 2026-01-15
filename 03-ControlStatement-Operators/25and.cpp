/*
2. The logical And operator: &&



*/

/*
-> The below program uses && to cope with a common situation, terminating a while loop, for two different reason. In program, while loop reads values into an array. One test(i < ArSize) terminate the loop when the array is full. The second test (temp >=0) gives the user the option of quitting early by entering a negative number. the program uses tow if statement, an if else statement and a for loop.
*/

// and.cpp -- using the logical AND operator

#include <iostream>

const int Arsize = 6;

int main()
{
    using namespace std;
    float naaq[Arsize];

    cout << "Enter the NAAQ (New Age Awareness Quotients) "
         << "of\nyour neighbors. Program terminates "
         << "when your make\n " << Arsize << " entries "
         << "or enter a negative value.\n";

    int i = 0;
    float temp;

    cout << "First value: ";
    cin >> temp;
    while (i < Arsize && temp >= 0)
    {
        naaq[i] = temp;
        ++i;
        if (i < Arsize) // room left in the array,
        {
            cout << "Next value: ";
            cin >> temp; // so getnext value
        }
    }

    if (i == 0)
        cout << "No data--bye\n";
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;

        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;

        cout << count;
        cout << " of your neighbors have grater awareness of \n"
             << "the New Age tha you do.\n";
    }

    return 0;
}
