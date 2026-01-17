/*
WAP to display following output:

output: for n = 5;

    ....*
    ...**
    ..***
    .****
    *****


    personal
    for more: https://chatgpt.com/share/696b08b8-c6e4-8009-be6d-f6ccab292519

*/

#include <iostream>

int main()
{
    using namespace std;

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << ".";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    return 0;
}
