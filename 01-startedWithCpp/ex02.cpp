// WAP to asks for a distance in furlongs and converts it to yards ( 1 furlong = 220 yards)

#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    int distance;
    cout << "Enter a distance in furlong :" << endl;
    cin >> distance;
    double sq = sqrt(distance);
    int distanceInYard = distance * 220;
    cout << "the distance in yards: " << sq;
    return 0;
}