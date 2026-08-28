#include <iostream>
#include <version>
#include <vector>

using namespace std;

int main()
{

    vector<int> a = {2, 45, 6, 1, 6, 8, 9, 33, 26, 0};

    int n = a.size();

    cout << "\n Before sorting: \n";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
            swap(a[min], a[i]);
    }

    cout << "\n After sorting: \n";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    return 0;
}