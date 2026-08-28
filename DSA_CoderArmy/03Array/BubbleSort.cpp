// Bubble Sort

// Asending order - largest value in last

/*
#include <iostream>

using namespace std;

int main()
{
    int n = 8;

    int arr[n] = {18, 19, 5, 3, 7, 9, 15, 0};

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
 */

// Optimized Bubble sort

#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    int A[n] = {2, 5, 6, 8, 9, 10, 22, 24, 34, 40};

    for (int i = 0; i < n - 1; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            cout << "Array is sorted \n";
            break;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}
