// Function and array objects

// arrobj.cpp  -- functions with array objects (C++ 11)

#include <iostream>
#include <array>
#include <string>

// const data
const int Seasons = 4;

const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(std::array<double, Seasons> *pa);

// Function that uses array without modifying it
void show(std::array<double, Seasons> da);

int main()
{
    std::array<double, Seasons> expenses;
    fill(&expenses); // passing address
    show(expenses);  // passing values

    return 0;
}

void fill(std::array<double, Seasons> *pa)
{
    using namespace std;

    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(std::array<double, Seasons> da)
{
    using namespace std;

    double total = 0.0;
    cout << "\nExpenses\n";

    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
