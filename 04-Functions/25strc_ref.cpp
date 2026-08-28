/* #include <iostream>

double refcube(const double &ra);

int main()
{
    using namespace std;

    double side = 3.0;

    double *pd = &side;
    double &rd = side;
    long edge = 5L;
    double lens[4] = {2.0, 5.0, 10.0, 12.0};

    double c1 = refcube(side);        // ra is side;
    double c2 = refcube(lens[2]);     // ra is lens[2];
    double c3 = refcube(rd);          // ra is rd is side;
    double c4 = refcube(*pd);         // ra is *pd is side;
    double c5 = refcube(edge);        // ra is temporary variable
    double c6 = refcube(7.0);         // ra is temporary variable
    double c7 = refcube(side + 10.0); // ra is temporary variable

    cout << "c1: " << c1 << "\n";
    cout << "c2: " << c2 << "\n";
    cout << "c3: " << c3 << "\n";
    cout << "c4: " << c4 << "\n";
    cout << "c5: " << c5 << "\n";
    cout << "c6: " << c6 << "\n";
    cout << "c7: " << c7 << "\n";

    return 0;
}

double refcube(const double &ra)
{
    return ra * ra * ra;
} */

// Using Reference with a structure

// strc_ref.cpp  -- using structure reference

#include <iostream>
#include <string>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws &ft);
void set_pc(free_throws &ft);

free_throws &accumulate(free_throws &target, const free_throws &source);

int main()
{

    // partial initialization - remaining members set to 0
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    // no initialize

    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    // use return value as argument
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

    // use return value in assignment
    dup = accumulate(team, five);

    std::cout << "Displaying team: \n";
    display(team);
    std::cout << "Displaying dup after assignment: \n";
    display(dup);
    set_pc(four);

    // ill-advised assignment
    accumulate(dup, five) = four;
    std::cout << "Display dup after ill-advised assignment: \n";
    display(dup);

    return 0;
}

void display(const free_throws &ft)
{
    using std::cout;
    cout << "Name: " << ft.name << "\n";
    cout << " Made: " << ft.made << "\t";
    cout << "Attempts: " << ft.attempts << "\t";
    cout << "Percent: " << ft.percent << '\n';
}

void set_pc(free_throws &ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws &accumulate(free_throws &target, const free_throws &source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
