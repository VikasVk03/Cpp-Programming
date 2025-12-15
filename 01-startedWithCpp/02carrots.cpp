// 1.2 carrots.cpp --- food processing program
// uses and displays a variable

#include <iostream>

int main()
{
    using namespace std;
    int carrots; // Declare an integer variable
    int radish;
    int beans;
    int pumpkin;
    radish = beans = pumpkin = 39;
    carrots = 25; // initialize, assign a value to variable
    cout << "I have ";
    cout << carrots; // display value of variable
    cout << " carrots";
    cout << endl;
    carrots = carrots - 1; // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    beans = beans - 1;
    pumpkin = pumpkin - 1;
    cout << radish; // does this change on changing beans and pumpkin value
    cout << endl
         << radish;
    cout << "pumpkin " << pumpkin;
    cout << "beans " << beans;
    return 0;
}