#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {10, 4, 6, 4, 6, 7, 2, 9};

    int n = a.size();

    cout << "Before sorting: \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nAfter sorting with insertion sort: \n";

    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    cout << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
    return 0;
}