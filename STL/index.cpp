#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(5);

    v.push_back(4);
    int i = 1;

    v.insert(v.begin(), 300);
    v.erase(v.begin() + 2, v.begin() + 4);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    list<int> ls;
    ls.push_back(5);
    ls.push_back(10);
    ls.push_front(40);
    ls.pop_back();

    cout << endl;
    for (auto lt : ls)
    {
        cout << lt << " ";
    }
    cout << "happy";
    return 0;
}