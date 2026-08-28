#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 2, 4, 6, 7, 54, 6, 7, 54, 6, 75, 4, 4, 6, 45, 56, 6, 5, 43, 674};
    int target;
    int index = -1;

    cout << "Linear Search \n";

    cout << "Array elements \n";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    cout << "\n Enter an element to find: ";
    cin >> target;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        cout << index << endl;
    }
    else
        cout << "Element not found: " << -1 << endl;

    return 0;
}