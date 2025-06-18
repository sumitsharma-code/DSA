#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 3, 1, 3, 2,12};
    map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }
    for (auto i : mp)
    {
        cout << i.first << "-" << i.second << endl;
    }
    return 0;
}