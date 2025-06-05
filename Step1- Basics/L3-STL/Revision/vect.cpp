#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> b)
{
    for (auto i : b)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> v = {1, 2, 4, 6};
    // v.erase(v.begin());
    v.erase(v.begin(), v.begin() + 2);
    printV(v);
    return 0;
}