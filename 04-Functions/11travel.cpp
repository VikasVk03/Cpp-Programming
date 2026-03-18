// Functions and Structures

// Read info from book

// 1. Passing and Retuning Structure

// travel.cpp  -- using structures with functions

#include <iostream>

struct travel_time
{
    int hours;
    int min;
};

const int Mins_per_hr = 60;

// Function Prototype using structure
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
    using namespace std;

    travel_time day1 = {5, 45}; // 5 hrs, 45 mins
    travel_time day2 = {4, 55}; // 4 hrs, 55 mins

    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4, 32};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));

    return 0;
}

// functions using structure
travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;

    total.min = (t1.min + t2.min) % Mins_per_hr;
    total.hours = t1.hours + t2.hours + (t1.min + t2.min) / Mins_per_hr;

    return total;
}

void show_time(travel_time t)
{
    using namespace std;

    cout << t.hours << " hours, "
         << t.min << " minutes\n";
}
