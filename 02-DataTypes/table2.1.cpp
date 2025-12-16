#include <iostream>
#include <climits>
#define PI 3.14

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    // const type name = value;     // used to declare const value same as #define, you can explicitly specify type of value
    const double PI_V = 3.14;

    // cout << "CHAR_BIT " << CHAR_BIT << endl;
    // cout << "CHAR_MAX " << CHAR_MAX << endl;
    // cout << "CHAR_MIN " << CHAR_MIN << endl;
    // cout << "Signed Char max " << SCHAR_MAX << endl;
    // cout << "Signed Char min " << SCHAR_MIN << endl;
    // cout << "Unsigned char max " << UCHAR_MAX << endl;
    // cout << "Short max " << SHRT_MAX << endl;
    // cout << "Short min " << SHRT_MIN << endl;
    // cout << "Unsigned Short max" << USHRT_MAX << endl;
    // cout << "Maximum int " << INT_MAX << endl;
    // cout << "Minimum int " << INT_MIN << endl;
    // cout << "Maximum unsigned int " << UINT_MAX << endl;
    // cout << "Long max " << LONG_MAX << endl;
    // cout << "Long min " << LONG_MIN << endl;
    // cout << "Unsigned long max " << ULONG_MAX << endl;
    // cout << "Long long max " << LLONG_MAX << endl;
    // cout << "Long long min " << LLONG_MIN << endl;
    // cout << "Unsigned long long max" << ULLONG_MAX << endl;

    int radius = 2;
    double areaOfCircle = PI * radius * radius;

    cout << "area of circle " << areaOfCircle << endl;

    return 0;
}