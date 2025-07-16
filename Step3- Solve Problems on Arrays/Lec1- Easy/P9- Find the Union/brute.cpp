#include <bits/stdc++.h>
using namespace std;

// union means unique => use set (brute)
int main()
{
    int arr1[6] = {1, 1, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 4, 4, 5};
    //extra space (n+m)
    set<int> st;

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    // O(n*log(st.size()))
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    // O(m*log(st.size()))
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }

    //extra space only to store the output (not used for processing)
    int uni[st.size()];

    int j = 0;
    //O(n+m)
    for (auto i : st)
    {
        uni[j++] = i;
    }

    for (auto i : uni)
    {
        cout << i << " ";
    }
    return 0;
}