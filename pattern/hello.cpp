#include <iostream>
using namespace std;
// int main()
// {
//     cout << "hello world";
//     return 0;
// }

int x = 5;
void extrnStorageClass()
{

    cout << "Demonstrate external storage class \n";

    extern int x;
    cout << "value of variable 'x'"
         << "declared, as extern: " << x << "\n";
    x = 10;

    cout << "modified value of x "
         << "declared as extern: "
         << x;
}

int main()
{

    extrnStorageClass();
    return 0;
}