#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int> &a, int lb, int ub);
void QuickSort(vector<int> &a, int lb, int ub);

int main()
{
    vector<int> a = {1, 3, 45, 23, 56, 4, 6, 54, 34, 8, 96, 7};

    int lowerBound = 0;
    int upperBound = a.size() - 1;

    cout << "\nArray before sorting: \n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    QuickSort(a, lowerBound, upperBound);

    cout << "\n\nArray after sorting:\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

int partition(vector<int> &a, int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (start <= ub && a[start] <= pivot)
        {
            start++;
        }

        while (a[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            swap(a[start], a[end]);
        }
    }

    swap(a[end], a[lb]);

    return end;
}

void QuickSort(vector<int> &a, int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        QuickSort(a, lb, loc - 1);
        QuickSort(a, loc + 1, ub);
    }
}