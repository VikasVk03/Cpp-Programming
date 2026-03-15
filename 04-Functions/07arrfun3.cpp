/*
-> C++ normally passes arguments by value. That means the numeric value of the argument is passed to the
function, where it is assigned to a new variable.
    the functions works with a copy of arguments rather than with original data.
    but when Array is passed to function, it operates or works with original array.

    -> Note: Variables, including parameters, declared within a function are private to the function. When
    function is called, the computer allocates the memory needed that was used for those variable. and
    after completing operation it frees the memory spaces.
    -> the overhead for using copies can be prohibitive if working with array or large arrays. With copies,
    not only does the program need more computer memory, but it spends time copying large blocks of data.
    -> working with original data rises the possibility of inadvertent data corruption. therfore, function
    works on original array than copies of array. any change directly happens to original array *******


*/

// arrfun3.cpp  -- array function and const

#include <iostream>

const int MAX = 5;

// function prototypes
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); // don't change data
void revalue(double r, double ar[], int n);

int main()
{
    using namespace std;
    double properties[MAX];

    int size = fill_array(properties, MAX);
    show_array(properties, size);

    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }

    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value # " << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) // signal to terminate
            break;
        ar[i] = temp;
    }
    return i;
}

// the following function can use, but not alter,
// the array whose address is ar

void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property # " << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

// multiplies each element for ar[] by r

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}
