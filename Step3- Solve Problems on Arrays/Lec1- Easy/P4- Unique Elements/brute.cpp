#include <bits/stdc++.h>
using namespace std;

int uniqueElement(int arr[], int n)
{
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto i:st)
    {
        arr[index] = i;
        index++;
    }
    return index;
}

int main()
{
    int arr[7] = {1, 1, 2, 2, 2, 3, 3};
    cout << uniqueElement(arr, 7) << endl;
    for(auto i:arr)
    {
        cout << i << " ";
    }
    return 0;
}