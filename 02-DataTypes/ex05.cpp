/*
WAP that request the user to enter the current world population and the current population of the U.S(or any nation). store info in variable of type long long.
output: display the percent that the U.S population is of the world's populations.

sample output:
Enter the world's population: 6899758899
Enter the population of the U.S: 310783781
The population of the U.S is 4.50492 % of the world population


*/

#include <iostream>

int main()
{
    using namespace std;

    long long world_population;

    long long Nation_population;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter the world\'s population: ";
    cin >> world_population;
    cout << "Enter the Population of the US: ";
    cin >> Nation_population;

    double population_percent = static_cast<double>(Nation_population * 100) / world_population;

    cout << "The Population of the U.S is " << population_percent << "% of the world population \n";

    return 0;
}