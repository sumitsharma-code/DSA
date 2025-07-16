#include <bits/stdc++.h>
using namespace std;

// 2ptr approach
int main()
{
    int arr1[6] = {1, 1, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 4, 4, 5};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int i = 0;
    int j = 0;
    vector<int> v;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (v.size() == 0 || arr1[i] != v.back())
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (v.size() == 0 || arr2[j] != v.back())
            {
                v.push_back(arr2[j]);
            }
            j++;
        }
        else
        {
            if (v.size() == 0 || arr1[i] != v.back())
            {
                v.push_back(arr1[i++]);
            }
            j++;
        }
    }

    while (n > i)
    {
        if (v.size() == 0 || arr1[i] != v.back())
        {
            v.push_back(arr1[i]);
        }
        i++;
    }
    while (m > j)
    {
        if (v.size() == 0 || arr2[j] != v.back())
        {
            v.push_back(arr2[j]);
        }
        j++;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}